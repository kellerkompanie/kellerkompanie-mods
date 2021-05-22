#include "script_component.hpp"

params ["_enemy","_group","_logic"];
	
private _return = False;
private _groups = (_logic getVariable QGVAR(Reinforcement));

if (_groups findIf { (side _group getFriend side _x < 0.6) } > -1) exitWith {
	_return
};

if ( (group _enemy) isEqualTo (_logic getVariable QGVAR(Group)) ) then {
	_return = True;
};

_return
