#include "script_component.hpp"

params ["_enemy","_group","_logic"];
	
private _return = False;
private _groups = (_logic getVariable QGVAR(Reinforcement));

if (_group in (GVAR(Location) select 0) ) then {
	private _array = (_group getVariable QGVAR(Location));
	
	{
		if (_x in _groups) then {
			_x = _x
		} 
		else {
			_return = True
		} 
	} count _array;
}
else {
	if (_group in (GVAR(Join) select 0) ) then {
		_return = False;
	}
	else {
		_groups = _groups - (GVAR(Join) select 0);
		private _ai = (_group getVariable QGVAR(AI) select 2);
		_ai = _ai + 1;
		
		if (count _groups < _ai) then {
			_return = True;
		};
	};
};

_return
