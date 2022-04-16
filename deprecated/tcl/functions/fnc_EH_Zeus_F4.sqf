#include "script_component.hpp"

params ["_group"];

private _id = (groupId _group);
private _string = format ["%1 ( Zeus ) ", _id];

while { True } do {
	private _array = (waypoints _group);
	
	if (count _array == 1) then {
		_group setGroupId [_id];
	}
	else {
		_group setGroupId [_string];
	};
	
	if (isNull _group) exitWith {};
	
	sleep 1;
};
