#include "script_component.hpp"

params ["_object","_group","_distance"];

private _units = (units _group);
private _array = ( (GVAR(Hold) select 0) + (GVAR(Defend) select 0) + (GVAR(Freeze) select 0) + (GVAR(Default) select 0) + (GVAR(Garrison) select 0) );

if (_group in (GVAR(Garrison) select 0) ) then {
	_units = _units select { ( (isNull objectParent _x) && { (currentCommand _x isEqualTo "") } ) };
	
	if (_units isEqualTo [] ) exitWith {};
	
	_array deleteAt (_array find _group);
};

if (_group in _array) then {
	[_object, _group, _distance] spawn FUNC(Advancing_F4);
}
else {
	if ( (floor (random 100) < 35) && { (_distance > 100) } && { (_group knowsAbout vehicle _object == 0) } ) then {
		private _leader = (leader _group);
		private _behaviour = (behaviour _leader);
		private _speedMode = (speedMode _leader);
		
		_units select { ( (_x == _leader) || (floor (random 100) < 50) ) } apply {_x doWatch (getPos _object) };
		
		if (_distance > 300) then {
			if (_leader hasWeapon "Binocular") then {_leader selectWeapon "Binocular"};
		};
		
		sleep 5 + (random 10);
		
		if (currentWeapon _leader isEqualTo "Binocular") then {
			_leader selectWeapon (primaryWeapon _leader);
		};
		
		if (_group knowsAbout vehicle _object == 0) then {
			_group setBehaviour "AWARE";
			_group setSpeedMode "NORMAL";
			
			if (floor (random 100) < 50) then {
				_group setSpeedMode "FULL";
			};
			
			(GVAR(Advancing) select 0) pushBack _group;
			_group lockWp True;
			private _value = 50;
			
			if (alive _object) then	{
				_value = 30; 
			};
			
			private _position = [ (getPos _object select 0) + (random _value - random _value), (getPos _object select 1) + (random _value - random _value), 0];
			
			if (_group in (GVAR(Garrison) select 0) ) then {
				_units doMove _position;
			}
			else {
				_group move _position;
				_units doFollow _leader;
			};
			
			private _bool = True;
			private _count = (random 50);
			
			while { (_count > 0) } do {
				if ( (_group in (GVAR(Reinforcement) select 0) ) || ( (alive _object) && { (_group knowsAbout vehicle _object > 0) } ) ) exitWith {
					_bool = False;
				};
				
				_count = _count - 1;
				sleep 1;
			};
			
			DELETE_AT(GVAR(Advancing), 0, _group);
			
			if (_group in (GVAR(Garrison) select 0) ) then {
				{_x doMove (getPos _x) } count _units;
				sleep 10 + (random 30);
			};
			
			_group move (getPos _leader);
		};
		
		sleep 10 + (random 30);
		
		if (_group in (GVAR(Reinforcement) select 0) ) then {
			_bool = False;
		}
		else {
			_group lockWp False;
			_group setBehaviour _behaviour;
			_group setSpeedMode _speedMode;
			
			if (count waypoints _group == 1) then {
				private _position = (_group getVariable QGVAR(Position));
				private _value = 50;
				
				if ( (alive _object) && { (_group knowsAbout vehicle _object > 0) } && { (side _group getFriend side _object > 0.6) } ) then {
					private _random = (random 50);
					_value = (_value + _random);
				};
				
				if (floor (random 100) < _value) then {
					_group move _position;
				};
			};
		};
	}
	else {
		[_object, _group, _distance] spawn FUNC(Advancing_F4);
	};
};
