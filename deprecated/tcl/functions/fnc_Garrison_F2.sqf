#include "script_component.hpp"

params ["_group"];

private _return = [];
private _distance = 100;
private _leader = (leader _group);
private _objects = nearestObjects [_leader, ["House"], _distance];
_objects = _objects - (GVAR(Garrison) select 1);

if (_objects isEqualTo [] ) exitWith {_return};

private ["_building","_index","_position"];
private _count = 0;

for "_count" from _count to (count _objects - 1) do {
	_building = (_objects select _count);
	_index = [_building] call FUNC(Building_Pos_F);
	
	if ( (_index == 2) && { ( [0,1,2] findIf { (_building buildingPos _x select 2 > 5) } > -1) } ) exitWith {
		_return = [_building];
		_position = (_building buildingPos _index);
		_return pushBack _position;
		[_group] spawn FUNC(Garrison_F1);
	};
	
	if (_index > 3) exitWith {
		_return = [_building];
		
		while { (_index > 0) } do {
			_position = (_building buildingPos _index);
			
			if (_return findIf { (_position distance _x > 5) } > -1) then {
				_return pushBack _position;
			};
			
			_index = _index - 1;
		};
	};
};

_return
	