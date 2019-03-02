#include "script_component.hpp"

params ["_cfg", "_role"];

private _value = getText (_cfg >> "Default");

if isText (_cfg >> _role) then {
	_value = getText (_cfg >> _role);
};

_value
