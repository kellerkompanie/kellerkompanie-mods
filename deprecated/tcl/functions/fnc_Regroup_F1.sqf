#include "script_component.hpp"

params ["_group","_logic","_count"];

private _ai = (_group getVariable QGVAR(AI) select 9);

if (_ai) then {
	private _array = ( (GVAR(Hold) select 0) + (GVAR(Defend) select 0) + (GVAR(Location) select 0) );
	
	if (_group in _array) exitWith {};
	
	if (_count < 3) then {					
		private _groups = (_logic getVariable QGVAR(Reinforcement));		
		_groups = _groups - [_group];		
		_groups = _groups select { (side _group isEqualTo side _x) };
		
		if (_groups isEqualTo [] ) exitWith {};
		
		[_group, _logic, _count, _groups] call FUNC(Regroup_F2);
	};
};

True
