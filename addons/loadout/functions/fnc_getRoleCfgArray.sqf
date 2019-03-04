#include "script_component.hpp"

params ["_cfg", "_role"];

private _value = getArray (_cfg >> "Default");

if isArray (_cfg >> _role) then {
	_value = getArray (_cfg >> _role);
};

_value
