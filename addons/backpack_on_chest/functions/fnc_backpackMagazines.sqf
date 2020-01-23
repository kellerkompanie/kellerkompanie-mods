#include "script_component.hpp"

/*
 * Author: DerZade & Jack Ost
 * Gets array with all magazines from backpack of the given unit.
 *
 * Arguments:
 * 0: unit <OBJECT>
 *
 * Return Value:
 * backpack magazines <ARRAY> [classname,ammo count, amount of mags]
 *
 * Example:
 * [player] call keko_backpack_on_chest_fnc_backpackMagazines;
 *
 * Public: No
 */
params ["_unit"];

private _magsArray = [];

{
    private _mag = _x;
    private _classname = "";
    private _displayname = "";

    {
        _displayName = getText (configFile >> "CfgMagazines" >> _x >> "DisplayName");
        if ((_mag find _displayname)!=(-1) and _displayName != "") exitWith {_classname = _x;};
    } forEach (backpackItems _unit);

    private _arr = _x splitString "(";
    private _size = count _arr;
    private _temp = (_arr select (_size-2)) splitString "/";
    private _ammo = parseNumber (_temp select 0);
    _temp = (_arr select (_size-1)) splitString "x";
    private _amount = parseNumber (_temp select 0);

    _magsArray pushBack [_classname,_ammo,_amount];
} forEach (backpackMagazines _unit);

_magsArray
