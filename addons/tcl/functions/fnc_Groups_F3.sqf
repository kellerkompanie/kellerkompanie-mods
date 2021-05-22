#include "script_component.hpp"

params ["_group","_units"];

private _array = _units select { (side _x isEqualTo sideLogic) };
_units = _units - _array;

if (_units isEqualTo [] ) exitWith {True};

_array = [];
private "_unit";
private _count = 0;

for "_count" from _count to (count _units - 1) do {
	_unit = (_units select _count);
	
	if (units _unit findIf { (alive _x) } > -1) then {
		_array pushBackUnique (group _unit);
	};
};

if (_array isEqualTo [] ) exitWith {True};

_array pushBack _group;

{ (GVAR(Location) select 0) pushBackUnique _x} forEach _array;

_group setVariable [QGVAR(Location), _array];

True
	