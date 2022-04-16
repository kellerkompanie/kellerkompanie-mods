#include "script_component.hpp"

params ["_type","_group","_objects"];

private _return = True;

if (_objects isEqualTo [] ) exitWith {_return};

_objects = _objects select { (triggerText _x == _type) };
private "_object";
private _count = 0;

for "_count" from _count to (count _objects - 1) do {
	_object = (_objects select _count);
	
	if (_object isKindOf "EmptyDetector") exitWith {
		_return = False;		
		[_type, _group] call FUNC(Groups_F7);
	};
};

_return
