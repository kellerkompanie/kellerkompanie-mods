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
		_weapon call FUNC(onFired);
	}];

	player addEventHandler["Reloaded", {
		params ["_unit", "_weapon"];
		[_unit, _weapon] call FUNC(onReload);
	}];

	["ace_weaponJammed", {
		params ["_unit","_weapon"];
		[_unit, _weapon] call FUNC(onWeaponJammed);
	}] call CBA_fnc_addEventHandler;
};
