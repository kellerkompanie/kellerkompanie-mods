#include "script_component.hpp"

params ["_player", "_book"];

private _item = "";
private _duration = 0;
private _text = "";
private _variable = "";
private _value = 0;

switch (_book) do {
    case "medic1": {
        _item = QGVAR(medicMagazine1);
        _duration = 30;
        _text = "Reading Medicine 101";
        _variable = "ace_medical_medicClass";
        _value = 1;
    };
    case "medic2": {
        _item = QGVAR(medicMagazine1);
        _duration = 60;
        _text = "Reading Medical Encyclopedia";
        _variable = "ace_medical_medicClass";
        _value = 2;
    };
    case "mechanic1": {
        _item = QGVAR(mechanicMagazine1);
        _duration = 30;
        _text = "Reading Mechanics 101";
        _variable = "ACE_isEngineer";
        _value = 1;
    };
    case "mechanic2": {
        _item = QGVAR(mechanicMagazine2);
        _duration = 60;
        _text = "Reading Mechanics Encyclopedia";
        _variable = "ACE_isEngineer";
        _value = 2;
    };
};

[_duration, [_player,_variable,_value,_item], {
    params ["_args"];
    _args params ["_player","_variable","_value","_item"];
    _player removeItem _item;
    _player setVariable [_variable, _value, true]
}, {}, _text] call ace_common_fnc_progressBar;
