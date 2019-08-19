#include "script_component.hpp"

params ["_object", "_item"];

private _type = _object getVariable QGVAR(type);
private _load = _object getVariable QGVAR(load);

INFO_4("useVendingMachine _type=%1 _load=%2 _object=%3 _item=%4",_type,_load,_object,_item);

private _prices = [
    ["murshun_cigs_cigpack",6],
    ["murshun_cigs_matches",1],
    ["ACE_Can_Franta",2],
    ["ACE_Can_RedGull",3],
    ["ACE_Can_Spirit",2],
    ["ACE_WaterBottle",1],
    ["immersion_pops_poppack",1]
];

private _price = 0;
{
    _x params ["_itemClass", "_itemPrice"];
    if(_itemClass == _item) exitWith {
        _price = _itemPrice;
    };
} forEach _prices;


private _amount = 0;
{
    _x params ["_itemClass", "_itemAmount"];
    if(_itemClass == _item) exitWith {
        _amount = _itemAmount;
    };
} forEach _load;

if (_amount <= 0) exitWith {
    [] spawn {
        sleep 0.5;
        hintC "Der Automat ist leer, vielleicht kann sich einer von der Logistik drum kümmern?";
        sleep 10;
        hintSilent "";
    };
};

switch (_type) do {
    case "cigs": {
        [player, _item] call CBA_fnc_addMagazine;
        [_object, QGVAR(vending_machine)] remoteExec ["say3D", 0, false];
    };
    case "soda": {
        [player, _item] call CBA_fnc_addItem;
        [_object, QGVAR(vending_machine_soda)] remoteExec ["say3D", 0, false];
    };
    default {
        [player, _item] call CBA_fnc_addMagazine;
        [_object, QGVAR(vending_machine)] remoteExec ["say3D", 0, false];
    };
};

private _newLoad = [];
{
    _x params ["_itemClass", "_itemAmount"];
    if (_itemClass == _item) then {
        _newLoad pushBack [_itemClass, _itemAmount - 1];
    } else {
        _newLoad pushBack [_itemClass, _itemAmount];
    };
} forEach _load;

_object setVariable [QGVAR(load), _newLoad, true];

INFO_1("useVendingMachine _newLoad=%1",_newLoad);
