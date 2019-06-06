#include "script_component.hpp"

params ["_cfg", "_role"];

private _value = getNumber (_cfg >> "Default");

if isNumber (_cfg >> _role) then {
    _value = getNumber (_cfg >> _role);
};

_value
