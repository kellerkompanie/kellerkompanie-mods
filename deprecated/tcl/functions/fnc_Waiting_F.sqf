#include "script_component.hpp"

params ["_enemy","_group","_logic"];

private _return = False;
private _units = (units _enemy);
private _leader = (leader _group);

if ( (_units findIf { (_x distance _leader < 100) } > -1) || (_group in (GVAR(Reinforcement) select 2) ) ) then {
	_return = True;
}
else {
	private _groups = (_logic getVariable QGVAR(Reinforcement));
	
	_groups = _groups - [_group];
	
	if (_groups isEqualTo [] ) then {
		private _time = (_group getVariable QGVAR(Waiting));
		
		if (time > _time) then {
			_return = True;
		};
	}
	else {
		if (_groups findIf { ( ( (leader _x distance _enemy) < (_leader distance _enemy) ) || (leader _x distance _leader < 100) ) } > -1) then {
			_return = True;
		}
		else {
			{
				if !(_x in (GVAR(Reinforcement) select 1) ) then {
					_return = True;
				}; 
			} forEach _groups;
		};
	};
};

_return
	