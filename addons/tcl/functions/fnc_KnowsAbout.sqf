#include "script_component.hpp"

[] spawn {
	while { True } do {
		private ["_groups","_count","_group","_units","_time","_random","_array"];

		_groups = GVAR(Groups) select 0;	
		_groups = _groups - (GVAR(Idle) select 0);	
		_groups = _groups - (GVAR(Artillery) select 0);	
		_groups = _groups - (GVAR(Reinforcement) select 0);
		
		_count = 0;
		
		for "_count" from _count to (count _groups - 1) do {
			_group = (_groups select _count);		
			_units = (units _group);
			
			if (_units findIf { (alive _x) } > -1) then {
				[_group] call FUNC(KnowsAbout_F1);
				
				if (GVAR(Feature) select 0) then {
					if (floor (random 100) < (GVAR(Feature) select 1) ) then {
						_time = (_group getVariable QGVAR(Watch));
						
						if (time > _time) then {
							[_group] spawn FUNC(Watch_F1);
						};
						
						_random = (random 15);					
						_group setVariable [QGVAR(Watch), (time + _random) ];
					};
				};
			}
			else {
				DELETE_AT(GVAR(Groups), 0, _group);
				
				if (_group in (GVAR(Location) select 0) ) then {
					_array = (_group getVariable QGVAR(Location));				
					DELETE_AT(GVAR(Location), 0, _group);				
					_array deleteAt (_array find _group);				
					{
						_delete = (_x getVariable QGVAR(Location)); 
						_delete deleteAt (_delete find _group) 
					} forEach _array;
				};
			};
		};
		
		sleep 1;
	};
};