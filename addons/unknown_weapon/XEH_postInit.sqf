#include "script_component.hpp"

if ! (GVAR(enabled)) exitWith {diag_log text "[KEKO] (unknown_weapon) keko_settings_unknown_weapon_enable = false"};

if ! (isClass(configFile >> "CfgPatches" >> "ace_overheating")) exitWith {diag_log text "[KEKO] (unknown_weapon) ACE Overheating not found! Punishing unknown weapons cannot be used!"};
if ! (ace_overheating_enabled) exitWith {diag_log text "[KEKO] (unknown_weapon) ACE Overheating not enabled! Punishing unknown weapons cannot be used!"};

if(missionNamespace getVariable [QGVAR(init),false]) exitWith {};
missionNamespace setVariable [QGVAR(init),true];

if ! (ace_overheating_overheatingDispersion) then {diag_log text "[KEKO] (unknown_weapon) Warning, ACE dispersion not enabled!"};

if(isNil QGVAR(local_weapons)) then {
	GVAR(local_weapons) = [];
};

diag_log text "[KEKO] (unknown_weapon) running postInit";

if(isServer) then {
	GVAR(whitelist) = [];

	if(GVAR(keko_loadout)) then {
		[] call FUNC(addKekoFactionWeapons);
	};

	if(typeName GVAR(add_weapons) == typeName "") then {
		GVAR(add_weapons) = GVAR(add_weapons) splitString ",";
		{
			GVAR(whitelist) pushBackUnique toUpper(_x);
			false
		} count GVAR(add_weapons);
	};

	diag_log text format ["[KEKO] (unknown_weapon) propagation disabled, whitelist now: %1", GVAR(whitelist)];
	publicVariable QGVAR(whitelist);
};

waitUntil{!isNil QGVAR(whitelist)};

diag_log text format["[KEKO] (unknown_weapon) whitelist after init: %1", GVAR(whitelist)];

if(hasInterface) then {
	diag_log text "[KEKO] (unknown_weapon) running client side functions";

	if(GVAR(briefing)) then {
		player createDiaryRecord ["Diary", ["Aufnahme von Fremdwaffen", "<font size='25'>Warnung: Bestrafung von unbekannten Waffen ist aktiviert!</font><br/><font size='15'>Aufnahme von unbekannten Waffen, z.B. Feindwaffen, hat eine katastrophale Waffeneffizienz zur Folge!<br/>Symptome können verschlechterte Genauigkeit, höhere Jamming Wahrscheinlichkeit und Nachladefehler sein, da das Handling sowie der Zustand der Waffen beeinträchtigt sind.<br/><br/>In extremen Fällen kann Munition eine Fehlzündung haben, was eine Zerstörung der Waffe und Verletzungen zur Folge haben kann!"]];
	};

  	player addEventHandler["Fired",{
		private _weapon = _this select 1;
		if(!(primaryWeapon ace_player == _weapon)) exitWith {};
		if(isNil QGVAR(whitelist)) exitWith {};

		private _weaponData = ace_overheating_cacheWeaponData getVariable _weapon;
		if(isNil "_weaponData") then {
			private _weaponUpper = toUpper(_weapon);
			// weapon class has not been initialized
			if(!(_weaponUpper in GVAR(whitelist) || {_weaponUpper in GVAR(local_weapons)})) then {
				// weapon not in whitelist
				_weaponData = [_weapon] call ace_overheating_fnc_getWeaponData;
				/*
				* 0: dispresion <NUMBER>
				* 1: slowdownFactor <NUMBER>
				* 2: jamChance <NUMBER>
				*/
				_weaponData set[0,(_weaponData select 0 + GVAR(dispersion_add))];
				_weaponData set[2,(_weaponData select 2 + (GVAR(jamchance_add) / 100))];
				ace_overheating_cacheWeaponData setVariable [_weapon, _weaponData];
			};
		};
	}];

	player addEventHandler["Reloaded", {
		params ["_unit", "_weapon", "", "", ""];

		if(!(primaryWeapon ace_player == _weapon)) exitWith {};
		if(isNil QGVAR(whitelist)) exitWith {};

		private _weaponUpper = toUpper(_weapon);
		if(!(_weaponUpper in GVAR(whitelist) || {_weaponUpper in GVAR(local_weapons)})) then {
			// weapon not in whitelist
			if( (random 100) <= GVAR(reload_failure) ) then {
				// reload failed
				ace_player addMagazine [_newMagazine select 0, _newMagazine select 1];
				ace_player setAmmo [_weapon, 0];

				[{["Reload failed"] call ace_common_fnc_displayTextStructured;}, []] call CBA_fnc_execNextFrame;
			};
		};
	}];

	["ace_weaponJammed", {
		params["_unit","_weapon"];

		if(_unit == ace_player) then {
			if(!(primaryWeapon ace_player == _weapon)) exitWith {};
			if(isNil QGVAR(whitelist)) exitWith {};

			private _weaponUpper = toUpper(_weapon);
			if(!(_weaponUpper in GVAR(whitelist) || {_weaponUpper in GVAR(local_weapons)})) then {
				if((random 100) < GVAR(jam_explosion)) then {
					private _model = getText(configfile >> "cfgweapons" >> _weapon >> "model");
					if ((_model find ".") == -1) then {
						_model = _model + ".p3d";
					};
					if(_model find "\" == 0) then {
						_model = [_model, 1] call CBA_fnc_substr;
					};

					private _groundHolder = createVehicle ["WeaponHolderSimulated", position ace_player, [], 0.5, "CAN_COLLIDE"];
					private _ammo = 1;
					// private _ammo = (ace_player ammo (primaryWeapon ace_player)) max 1;

					{
						_groundHolder addMagazineAmmoCargo [_x, 1, _ammo];
					} forEach (primaryWeaponMagazine ace_player);

					{
						if(_x != "") then {
							_groundHolder addItemCargoGlobal [_x,1];
						};
					} forEach (primaryWeaponItems ace_player);

					// [_groundHolder, true] remoteExec ["hideObjectGlobal", 2];
					private _dummy = createSimpleObject[_model,getPosATL ace_player];
					_dummy hideSelection ["zasleh",true];
					_dummy hideSelection ["magazine",true];
					_dummy hideSelection ["bolt",true];
					_dummy hideSelection ["magrelease",true];
					_dummy attachTo [_groundHolder,[0,0,-0.5]];

					private _dir = getdir ace_player;
					_groundHolder disableCollisionWith ace_player;
					_groundHolder setPos (ace_player modelToWorld [0.25,0.4,1.2]);
					_groundHolder setDir (_dir + 90);

					private _speed = 2.5;
					// private _speed = 1.5;
					_groundHolder setVelocity [_speed * sin(_dir), _speed * cos(_dir),1];
					ace_player removeWeapon _weapon;

					[{
						{
							deleteVehicle _x;
							false
						} count _this;
					}, [_dummy], 300] call CBA_fnc_waitAndExecute;

					playSound3D["A3\Sounds_F\arsenal\explosives\mines\Mine_closeExp_0" + str( (floor random 3) + 1 ) + ".wss",objNull,false,getPosATL ace_player,10,1,150];
					addCamShake[20,2,2];
					["Weapon has been destroyed"] call ace_common_fnc_displayTextStructured;
					private _dam = 1;
					if(!isNil "ace_medical_fnc_addDamageToUnit") then {
						// Ace medical is enabled
						if(isPlayer ace_player) then {
							_dam = (missionNamespace getVariable ["ace_medical_playerDamageThreshold", 1]) / 10;
						} else {
							private _res = ace_player getVariable ["ace_medical_unitDamageThreshold", [1, 1, 1]];
							_dam = ((_res select 0 + _res select 1 + _res select 2) / 3) / 5;
						};
						[ace_player, _dam, selectRandom ["head", "body", "hand_l", "hand_r"], "stab"] call ace_medical_fnc_addDamageToUnit;
					} else {
						// Ace medical is not enabled
						_dam = damage ace_player;
						ace_player setDamage (_dam + 0.1);
					};
				};
			};
		};
	}] call CBA_fnc_addEventHandler;
};
