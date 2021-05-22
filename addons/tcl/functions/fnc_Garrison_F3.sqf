#include "script_component.hpp"

params ["_group","_array"];
	
private _units = (units _group);
_array = [_array, true] call CBA_fnc_shuffle;
_units = _units - (GVAR(Garrison) select 3);
_units = _units select { ( (alive _x) && { (isNull objectParent _x) } ) };

if (count _units > count _array) then {
	[_group] spawn FUNC(Garrison_F1);
};

private ["_unit","_position"];
private _count = 0;

for "_count" from _count to (count _units - 1) do {
	_unit = (_units select _count);
	
	if (_array isEqualTo [] ) exitWith {};
	
	(GVAR(Garrison) select 3) pushBack _unit;
	_position = (_array select 0);
	_unit doMove _position;
	[_unit, _group, _position] spawn FUNC(Garrison_F4);
	_array deleteAt (_array find _position);
};

True
