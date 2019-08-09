#include "script_component.hpp"

params ["_magazineClasses"];

private _magsWithCount = [];
{
    private _cfg = configFile >> "CfgMagazines" >> _x;
    private _count = getNumber(_cfg >> "count");
    _magsWithCount pushBack [_count, _x];
} forEach _magazineClasses;

// sort mags descending by ammo count
_magsWithCount sort false;

_magazineClasses = [];
{
    _magazineClasses pushBack (_x select 1);
} forEach _magsWithCount;

_magazineClasses
