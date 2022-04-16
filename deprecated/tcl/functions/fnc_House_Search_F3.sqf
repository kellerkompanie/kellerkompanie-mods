#include "script_component.hpp"

params ["_unit","_group","_logic","_building","_positions"];

(GVAR(House_Search) select 0) pushBack _unit;
(GVAR(House_Search) select 1) pushBack _building;

if (alive _unit) then {
	private ["_position","_distance","_time"];
	
	while { ( (alive _unit) && { (alive _logic) } && { (_positions > 0) } && { (_unit distance _building < 100) } ) } do {
		_position = (_building buildingPos _positions);
		_distance = (_unit distance _position);
		
		if (_distance > 3) then {
			_unit doMove _position;
			_time = (time + 10);
			_time = (_time + _distance);
			
			while { ( (alive _unit) && { (alive _logic) } && { (time < _time) } && { (_unit distance _building < 100) } ) } do {
				if (unitReady _unit) exitWith {
					sleep (random 5);
				};
				
				if (_unit distance _logic > 100) exitWith {
					_positions = 0;
				};
				
				sleep 5;
			};
		};
		
		_positions = _positions - 1;
	};
};

DELETE_AT(GVAR(House_Search), 0, _unit);
[_unit, _group] call FUNC(Follow_F1);

if (False) then {
	[_unit, _group, _logic, _building] spawn FUNC(House_Search_F4);
};

sleep 30 + (random 50);

if (alive _unit) then {
	DELETE_AT(GVAR(House_Search), 1, _building);
};
