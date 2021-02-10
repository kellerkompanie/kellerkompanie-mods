#include "script_component.hpp"

params ["_unit", "_new_loadout", "_old_loadout"];

private _old_primary_weapon = _old_loadout select 0;
private _new_primary_weapon = _new_loadout select 0;

if (count _old_primary_weapon > 0 && count _new_primary_weapon > 0) then {
    private _old_primary_mag = _old_primary_weapon select 4;
    private _new_primary_mag = _new_primary_weapon select 4;

    if (count _old_primary_mag > 0) then {
        if (_old_primary_mag select 1 == 0 && count _new_primary_mag == 0) then {
            private _args = [_unit, primaryWeapon _unit, primaryWeapon _unit, _old_primary_mag, _old_primary_mag];
            _args remoteExec ["greenmag_main_fnc_addempty", _unit];
        };
    };
};


private _old_handgun_weapon = _old_loadout select 2;
private _new_handgun_weapon = _new_loadout select 2;

if (count _old_handgun_weapon > 0 && count _new_handgun_weapon > 0) then {
    private _old_handgun_mag = _old_handgun_weapon select 4;
    private _new_handgun_mag = _new_handgun_weapon select 4;

    if (count _old_handgun_mag > 0) then {
        if (_old_handgun_mag select 1 == 0 && count _new_handgun_mag == 0) then {
            private _args = [_unit, handgunWeapon _unit, handgunWeapon _unit, _old_handgun_mag, _old_handgun_mag];
            _args remoteExec ["greenmag_main_fnc_addempty", _unit];
        };
    };
};