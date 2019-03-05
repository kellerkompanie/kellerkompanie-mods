#include "script_component.hpp"

params ["", "_weapon", "_newMagazine"];

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
