#include "script_component.hpp"

params ["_group","_object"];

private _return = False;
private _trigger = (_group getVariable QGVAR(Trigger));

if (_object inArea _trigger) then {
	_return = True;
};

_return