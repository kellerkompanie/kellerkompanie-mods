#include "script_component.hpp"

params ["_holder", "_allowedNumber"];

private _items = (
	weaponCargo _holder
	+ magazineCargo _holder
	+ itemCargo _holder
	+ backpackCargo _holder
);

(count _items <= _allowedNumber)
