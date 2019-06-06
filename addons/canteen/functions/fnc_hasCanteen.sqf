#include "script_component.hpp"

params ["_unit"];

/*private _unitItems = items _unit;
private _hasCanteen = false;

{
    if (_x in _unitItems) exitWith {_hasCanteen = true;};
} forEach CANTEEN_ITEMS;*/

QGVAR(canteen) in (magazineCargo uniformContainer _unit) || QGVAR(canteenEmpty) in (itemCargo uniformContainer _unit)
