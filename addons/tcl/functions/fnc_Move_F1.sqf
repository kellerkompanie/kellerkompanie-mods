#include "script_component.hpp"

params ["_enemy","_group","_logic","_array","_spot","_waypoint"];
	
private _leader = (leader _group);	
private _position = (_group getVariable QGVAR(Position));

if ( [_enemy, _group, _logic] call FUNC(Move_F2) ) then {
	_position = [_enemy, _group, _logic, _array] call FUNC(Move_F3);
};

if ( (_leader distance _position > 10) || (_leader distance _waypoint > 10) ) then {
	_group move _position;
	
	if (alive _spot) then {
		_spot setPos _position;
	};
};

_group setVariable [QGVAR(Waypoint), _position];

[QGVAR(Position), _group, _position] call FUNC(Marker_F1);

True
