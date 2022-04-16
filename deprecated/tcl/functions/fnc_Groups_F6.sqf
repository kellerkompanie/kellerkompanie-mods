#include "script_component.hpp"

params ["_type","_group"];

private _objects = allMissionObjects "EmptyDetector";

if (_objects isEqualTo [] ) exitWith {True};

private _leader = (leader _group);
_objects = _objects select { (triggerText _x == _type) };
private "_object";
private _count = 0;

for "_count" from _count to (count _objects - 1) do {
	_object = (_objects select _count);
	
	if (_leader inArea _object) exitWith {
		[_type, _group, _object] call FUNC(Groups_F7);
	};
};

True
