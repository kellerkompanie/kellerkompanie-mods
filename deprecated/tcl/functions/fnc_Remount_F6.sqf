#include "script_component.hpp"

params ["_group"];
	
if (_group in (GVAR(Garrison) select 2) ) then {
	private _bool = True;
	private _leader = (leader _group);
	private _position = (_group getVariable QGVAR(Position));
	private _distance = (_leader distance _position);
	private _time = (time + 30);
	_time = (_time + _distance);
	
	while { (_leader distance _position > 10) } do {
		if ( (time > _time) || (_group in (GVAR(Reinforcement) select 0) ) ) exitWith {
			_bool = False;
		};
		
		sleep 10;
	};
	
	if (_bool) then {
		private _units = (units _group);
		
		if (vehicle _leader isKindOf "Car") then {
			{ 
				[_x] orderGetIn False; 
				[_x] allowGetIn False;
			} forEach _units;
			sleep 10;
		};
		
		[_group] spawn FUNC(Garrison_F1);
	};
};
