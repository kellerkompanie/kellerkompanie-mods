#include "script_component.hpp"

params ["_enemy","_group","_logic"];

if (GVAR(Feature) select 9) then {
	if (floor (random 100) < (GVAR(Feature) select 10) ) then {
		private _condition = (_logic getVariable QGVAR(Artillery));
		
		if (_condition select 0) then {
			private _leader = (leader _group);
			private _position = (getPos _logic);
			private _groups = (GVAR(Artillery) select 0);
			_groups = _groups select { ( (side _x getFriend side _group > 0.6) && { (_x getVariable QGVAR(Artillery)) } ) };
			
			if (_groups isEqualTo [] ) exitWith {};
			
			private ["_vehicle","_distance","_bool"];
			{
				_vehicle = (vehicle leader _x);
				_distance = [_x, _group] call FUNC(Radio_F1);
				_bool = [_vehicle, _position] call FUNC(Artillery_F3);
			
				if ( (_bool) && { (_distance) } ) exitWith {
					_condition set [0, False];
					_x setVariable [QGVAR(Artillery), False];
					[_enemy, _x, _logic, _vehicle] spawn FUNC(Artillery_F2);
				};			
			} forEach _groups;
		};
	};
};

True
