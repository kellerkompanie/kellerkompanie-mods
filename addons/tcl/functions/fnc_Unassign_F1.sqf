#include "script_component.hpp"

params ["_enemy","_group","_logic"];
	
private _time = 0;
private _count = 30;
private _units = (units _group);
private _leader = (leader _group);
private _vehicle = (vehicle _leader);
private _position = (getPos _vehicle);
private _distance = [_group, _logic, _vehicle] call FUNC(Unassign_F2);
private _assign = True;

if (_group knowsAbout vehicle _enemy > 0) then {
	_assign = False;
};

if (_assign) then {
	if (assignedVehicle _leader isKindOf "LandVehicle") then {
		_assign = False;
		_position = (getPos assignedVehicle _leader);
		private _distance = (_leader distance _logic);
		_distance = (_distance / 3);
		_units = _units select { ( (isNull objectParent _x) && { (_x distance assignedVehicle _x < _distance) } ) };
		
		if (_leader in _units) then {
			if (_units findIf { (assignedVehicleRole _x select 0 == "Driver") } < 0) then {
				_leader assignAsDriver assignedVehicle _leader;
			};
			
			[_units, _group, _vehicle] call FUNC(Assign_F2);
		};
	};
};

private ["_waypoint","_driver","_enemy"];

while { ( (units _group findIf { (alive _x) } > -1) && { (_group in (GVAR(Reinforcement) select 0) ) } ) } do {
	_waypoint = (_group getVariable QGVAR(Waypoint));
	
	if ( (units _enemy findIf { ( (alive _x) && { (_group knowsAbout vehicle _x > 0) } ) } > -1) || (units _group findIf { ( (alive _x) && { ( (_x distance2D _waypoint < _distance) || (_x distance2D _logic < _distance) ) } ) } > -1) ) exitWith {
		if (_count < 0) exitWith {
			[_group] call FUNC(Behaviour_F1);
			[_enemy, _group, _logic] spawn FUNC(Unassign_F1);
		};
		
		[_enemy, _group, _logic] call FUNC(Unassign_F3);
	};
	
	_leader = (leader _group);
	_vehicle = (vehicle _leader);
	
	if (_assign) then {
		if (isNull objectParent _leader) then {
			if (_leader distance _waypoint > 300) then {
				if (time > _time) then {
					_units = (units _group);
					_assign = [_units, _group] call FUNC(Assign_F1);
					
					if (_assign) exitWith {
						_time = (time + 30);
					};
					
					_vehicle = (assignedVehicle _leader);
					_position = (getPos assignedVehicle _leader);
				};
			};
		};
	}
	else {
		_driver = (driver _vehicle);
		
		if (alive _driver) then {
			_count = [_group, _vehicle] call FUNC(Stuck_F1);
		};
	};
	
	_enemy = [_enemy, _group] call FUNC(Enemy_F1);
	sleep 1;
};
