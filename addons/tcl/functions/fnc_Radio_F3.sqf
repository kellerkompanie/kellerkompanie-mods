#include "script_component.hpp"

params ["_group"];

private _vehicle = (vehicle leader _group);
private "_index";

if (True) then {
	if (_vehicle isKindOf "Man") exitWith {
		_index = 0;
	};
	
	if (_vehicle isKindOf "Car") exitWith {
		_index = 1;
	};
	
	if (_vehicle isKindOf "Tank") exitWith {
		_index = 2;
	};
	
	if (_vehicle isKindOf "Air") exitWith {
		_index = 3;
	};
	
	_index = 0;
};

private _return = (GVAR(Radio) select 2 select _index);

_return
	