#include "script_component.hpp"

params ["_enemy","_group","_logic"];
	
private "_groups";
private _leader = (leader _group);
private _ai = (_group getVariable QGVAR(AI));

{ 
	(GVAR(Reinforcement) select _x) pushBack _group;
} forEach [0, 1];

if (isNil { (_logic getVariable QGVAR(Reinforcement)) } ) then {
	(GVAR(Request) select 0) pushBack _group;
	
	_logic setVariable [QGVAR(AI), _ai];
	_logic setVariable [QGVAR(Reinforcement), [_group] ];
	
	if (_group in (GVAR(Hold) select 0) ) exitWith {};
	
	if (floor (random 100) < 15) then {
		[_enemy, _group] call FUNC(Sneaking_F1);
	}
	else {
		if ( (floor (random 100) < 35) && { ( { (alive _x) } count (units _group) < { (alive _x) } count (units _enemy) ) } ) then {
			if (_leader distance _enemy > 300) then {
				(GVAR(Waiting) select 0) pushBack _group;
				private _time = (time + 50);
				_time = _time + (random 70);
				_group setVariable [QGVAR(Waiting), _time];
			};
		};
	};
}
else {
	_groups = (_logic getVariable QGVAR(Reinforcement));
	_groups pushBack _group;
	
	if (floor (random 100) < 15) then {
		[_enemy, _group] call FUNC(Sneaking_F1);
	};
};

if (_group in (GVAR(Location) select 0) ) then {
	_groups = (_group getVariable QGVAR(Location));
	_ai set [2, count _groups];
};

private _units = (units _group);

if (_group in (GVAR(Garrison) select 0) ) then {
	if (_group in (GVAR(Hold) select 0) ) exitWith {};
	
	private _array = (_group getVariable QGVAR(Garrison));
	DELETE_AT(GVAR(Garrison), 0, _group);
	GVAR(Garrison) set [1, (GVAR(Garrison) select 1) - _array];
};

if (GVAR(Feature) select 19) then {
	if (floor (random 100) < (GVAR(Feature) select 20) ) then {
		if (floor (random 100) < 50) then  {
			(GVAR(Flanking) select 3) pushBack _group;
		};
		
		[_group] call FUNC(Flanking_F1);
	};
};

private _time = _ai select 10;
_group setVariable [QGVAR(Time), (time + _time) ];
[_enemy, _group, _logic] execFSM QPATHTOF(TCL_System.fsm);

True
