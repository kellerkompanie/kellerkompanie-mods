#include "script_component.hpp"

params ["_object","_group","_value"];

private _leader = (leader _group);
private _distance = (_object distance _leader);

if (_distance < _value) then {
	[_object, _group, _distance] spawn FUNC(Advancing_F3);
};

True
