#include "script_component.hpp"

params ["_unit","_group","_objects","_magazine","_magazines"];

private _return = True;

if (_magazine isEqualTo "") exitWith {_return};

private ["_object","_array"];
private _count = 0;

for "_count" from _count to (count _objects - 1) do {
	_object = (_objects select _count);
	_array = (magazines _object);
	
	if (_magazine in _array) exitWith {
		_return = False;
		(GVAR(Rearm) select 0) pushBack _unit;
		(GVAR(Rearm) select 2) pushBack _object;
	
		_array = _array select { (_x in _magazines) };
	
		[_unit, _group, _object, _array] spawn FUNC(Rearm_F4);
	};
};

_return
	