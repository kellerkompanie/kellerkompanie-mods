#include "script_component.hpp"

params ["_group","_x","_distance"];

private _return = False;
private _units = (units _group);
private ["_unit","_bool"];
private _count = 0;

for "_count" from _count to (count _units - 1) do {
	_unit = (_units select _count);
	
	if ( (alive _unit) && { (units _x findIf { ( (alive _x) && { (_unit distance _x < _distance) } ) } > -1) } ) exitWith {
		_bool = [_group, _x] call FUNC(KnowsAbout_F5);
		
		if (_bool) then {
			_return = True;
		};
	};
};

_return
