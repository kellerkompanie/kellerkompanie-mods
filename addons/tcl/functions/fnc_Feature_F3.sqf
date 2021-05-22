#include "script_component.hpp"

params ["_object","_array","_distance"];

private _groups = GVAR(Groups) select 0;
_groups = _groups - _array;
private ["_group","_leader"];
private _count = 0;

for "_count" from _count to (count _groups - 1) do {
	_group = (_groups select _count);
	_leader = (leader _group);
	
	if (isNull objectParent _leader) then {
		[_object, _group, _distance] call FUNC(Advancing_F2);
	};
};

True
