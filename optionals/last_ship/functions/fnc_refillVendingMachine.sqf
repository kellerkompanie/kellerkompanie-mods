#include "script_component.hpp"

params ["_object", "_item"];

private _load = _object getVariable QGVAR(load);
private _type = _object getVariable QGVAR(type);

private _newLoad = [];
{
    _x params ["_itemClass", "_itemAmount"];
    if (_itemClass == _item) then {
        _newLoad pushBack [_itemClass, _itemAmount + 1];
    } else {
        _newLoad pushBack [_itemClass, _itemAmount];
    };
} forEach _load;

_object setVariable [QGVAR(load), _newLoad, true];

switch (_type) do {
    case "cigs": {
        [player, _item] call CBA_fnc_removeMagazine;
    };
    case "soda": {
        [player, _item] call CBA_fnc_removeItem;
    };
    default {
        [player, _item] call CBA_fnc_removeMagazine;
    };
};

[] spawn {
    hint "Vending machine refilled";
    sleep 5;
    hintSilent "";
};
