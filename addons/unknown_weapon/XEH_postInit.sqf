#include "script_component.hpp"

if ! (GVAR(enabled)) exitWith {WARNING("keko_settings_unknown_weapon_enable = false, exiting");};

if ! (isClass(configFile >> "CfgPatches" >> "ace_overheating")) exitWith {ERROR("ACE Overheating not found, exiting!"); false};
if ! (ace_overheating_enabled) exitWith {ERROR("ACE Overheating not enabled, exiting!"); false};

if(missionNamespace getVariable [QGVAR(init),false]) exitWith {};
missionNamespace setVariable [QGVAR(init),true];

if ! (ace_overheating_overheatingDispersion) then {WARNING("ACE dispersion not enabled!");};

if(isNil QGVAR(local_weapons)) then {
    GVAR(local_weapons) = [];
};

INFO("running postInit");

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

    TRACE_1("propagation disabled, whitelist now", GVAR(whitelist));
    publicVariable QGVAR(whitelist);
};

if(hasInterface) then {
    INFO("running client side functions");

    if(GVAR(briefing)) then {
        player createDiaryRecord ["Diary", ["Aufnahme von Fremdwaffen", "<font size='25'>Warnung: Bestrafung von unbekannten Waffen ist aktiviert!</font><br/><font size='15'>Aufnahme von unbekannten Waffen, z.B. Feindwaffen, hat eine katastrophale Waffeneffizienz zur Folge!<br/>Symptome können verschlechterte Genauigkeit, höhere Jamming Wahrscheinlichkeit und Nachladefehler sein, da das Handling sowie der Zustand der Waffen beeinträchtigt sind.<br/><br/>In extremen Fällen kann Munition eine Fehlzündung haben, was eine Zerstörung der Waffe und Verletzungen zur Folge haben kann!"]];
    };

      player addEventHandler["Fired",{
        private _weapon = _this select 1;
        _weapon call FUNC(onFired);
    }];

    player addEventHandler["Reloaded", {
        params ["_unit", "_weapon", "", "_newMagazine", ""];
        [_unit, _weapon, _newMagazine] call FUNC(onReload);
    }];

    ["ace_weaponJammed", {
        params ["_unit","_weapon"];
        [_unit, _weapon] call FUNC(onWeaponJammed);
    }] call CBA_fnc_addEventHandler;
};
