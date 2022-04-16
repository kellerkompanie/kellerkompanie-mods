#include "script_component.hpp"

params ["_enemy","_group"];
	
private _groups = (GVAR(Groups) select 0);

if (_group in (GVAR(Location) select 0) ) then {
	_groups = _group getVariable QGVAR(Location);
}
else {
	_groups = _groups - (GVAR(Location) select 0);
};

private _array = ( (GVAR(Hold) select 0) + (GVAR(Zeus) select 1) + (GVAR(Defend) select 0) + (GVAR(Freeze) select 0) + (GVAR(Default) select 0) + (GVAR(Artillery) select 0) + (GVAR(Reinforcement) select 0) );
_groups = _groups - _array;
_groups append (GVAR(Join) select 0);
private _return = grpNull;

if (_groups isEqualTo [] ) exitWith {
	_return
};

if ( [_enemy, _group] call FUNC(Rating_F1) ) then {
	private _leader = (leader _group);
	private _condition = [_group] call FUNC(Radio_F3);
	private ["_distance","_units","_bool"];
	{
		_distance = _leader distance leader _x;
	
		if (_distance < _condition) then {
			_units = (units _x);
			
			if ( (_units findIf { (alive _x) } > -1) && { (side _group getFriend side _x > 0.6) } ) then {
				if (side _x getFriend side _enemy < 0.6) then {
					_bool = [_group, _x] call FUNC(Radio_F1);
					
					if (_bool) then {
						_return = _x;
						_condition = _distance;
					};
				};
			};
		};	
	} forEach _groups;
};

_return
