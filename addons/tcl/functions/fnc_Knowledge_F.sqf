#include "script_component.hpp"

params ["_enemy","_groups"];

private _return = False;
private _units = (units _enemy);
private ["_group","_knowsAbout"];
private _count = 0;

for "_count" from _count to (count _groups - 1) do {
	_group = (_groups select _count);	
	_knowsAbout = _units findIf { ( (alive _x) && { (_group knowsAbout vehicle _x > 0) } ) };
	
	if (_knowsAbout > -1) exitWith {
		_return = True;
	};
};

_return