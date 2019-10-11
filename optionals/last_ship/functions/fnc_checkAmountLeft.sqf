#include "script_component.hpp"

params ["_object"];

private _type = _object getVariable QGVAR(type);
private _load = _object getVariable QGVAR(load);

private _messages = [];
{
    _x params ["_itemClass", "_itemAmount"];

    private _itemString = "";
    switch (_itemClass) do {
        case "murshun_cigs_cigpack": {
            _itemString = "Zigaretten";
        };
        case "murshun_cigs_matches": {
            _itemString = "Streichhölzer";
        };
        case "ACE_Can_Franta": {
            _itemString = "Franta";
        };
        case "ACE_Can_RedGull": {
            _itemString = "RedGull";
        };
        case "ACE_Can_Spirit": {
            _itemString = "Spirit";
        };
        case "ACE_WaterBottle": {
            _itemString = "Water";
        };
        default {
            _itemString = "Lollipops";
        };
    };

    _messages pushBack (format ["%1: %2", _itemString, _itemAmount]);
} forEach _load;

[_messages] spawn {
    params ["_messages"];
    sleep 0.5;
    "Inhalt" hintC _messages;
    sleep 10;
    hintSilent "";
};
