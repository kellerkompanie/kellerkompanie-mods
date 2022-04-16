#include "script_component.hpp"

params ["_group"];

private _time = 5 - (random 3);

if (_group in (GVAR(Garrison) select 0) ) then {
	_time = 0;
};

sleep _time;

private _units = (units _group);

if (_group in (GVAR(Freeze) select 0) ) exitWith {};

if (_units findIf { (alive _x) } > -1) then {
	if (GVAR(Feature) select 2) then {
		private _leader = (leader _group);
		
		if (isNull objectParent _leader) then {
			if (count (waypoints _group) == 1) then {
				if (_group in (GVAR(Reinforcement) select 0) ) exitWith {};
				
				private _array = [_group] call FUNC(Garrison_F2);
				
				if (_array isEqualTo [] ) exitWith {};
				
				private _building = (_array select 0);
				private _bool = True;
				
				if (_group in (GVAR(Hold) select 0) ) then {
					_bool = [_group, _building] call FUNC(Trigger_F);
				};
				
				if ( (_bool) && { (damage _building < 1) } ) then {
					_array deleteAt (_array find _building);
					
					if (_group in (GVAR(Garrison) select 0) ) then {
						private _buildings = (_group getVariable QGVAR(Garrison));
						_buildings pushBack _building;
					}
					else {
						(GVAR(Garrison) select 0) pushBack _group;
						(GVAR(Garrison) select 2) pushBack _group;
						_group setVariable [QGVAR(Garrison), [_building] ];
					};
					
					(GVAR(Garrison) select 1) pushBack _building;
					[_group, _array] call FUNC(Garrison_F3);
				};
			};
		};
	};
};
