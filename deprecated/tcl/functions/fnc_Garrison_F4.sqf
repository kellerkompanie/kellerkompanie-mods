#include "script_component.hpp"

params ["_unit","_group","_position"];
	
private _time = (time + 30);
private _distance = (_unit distance _position);
_time = (_time + _distance);

while { ( (alive _unit) && { (time < _time) } ) } do {
	if ( (unitReady _unit) || (count (waypoints _group) > 1) ) exitWith {
		if (_group in (GVAR(Reinforcement) select 0) ) then {
			_time = time;
		};
	};
	
	sleep 5;
};

if ( (alive _unit) && { (time < _time) } ) then {
	if ( (_unit distance _position > 3) || (count (waypoints _group) > 1) ) exitWith {};
	doStop _unit;
};

DELETE_AT(GVAR(Garrison), 3, _unit);
