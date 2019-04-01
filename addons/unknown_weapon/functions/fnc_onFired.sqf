#include "script_component.hpp"

params ["_weapon"];

if !(GVAR(enabled)) exitWith {};
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
        diag_log text format ["_weaponData %1", _weaponData ];
        diag_log text format ["_weapon %1", _weapon ];
        diag_log text format ["dispersion_add %1", GVAR(dispersion_add) ];

        _weaponData set[0,((_weaponData select 0) + GVAR(dispersion_add))];
        _weaponData set[2,((_weaponData select 2) + (GVAR(jamchance_add) / 100))];
        ace_overheating_cacheWeaponData setVariable [_weapon, _weaponData];
    };
};
