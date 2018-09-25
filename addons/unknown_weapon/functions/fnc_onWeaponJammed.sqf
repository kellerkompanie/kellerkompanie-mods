#include "script_component"

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
