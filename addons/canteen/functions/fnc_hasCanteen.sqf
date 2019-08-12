#include "script_component.hpp"

params ["_unit"];

/*private _unitItems = items _unit;
private _hasCanteen = false;

{
    if (_x in _unitItems) exitWith {_hasCanteen = true;};
} forEach CANTEEN_ITEMS;*/

QGVAR(canteen) in (magazines _unit) || QGVAR(canteenEmpty) in (items _unit)
