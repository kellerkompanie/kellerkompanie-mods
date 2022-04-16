#include "script_component.hpp"

params ["_group"];

private _return = [];
private _units = (units _group);
private _leader = (leader _group);

_units deleteAt (_units find _leader); 

private _random = 3 - (random 1);
_value = (count _units / _random);
private "_unit";
private _count = 0;

while { _count < _value } do {
	_unit = (_units select _count);	
	_return pushBack _unit;	
	_count = _count + 1;
};

_return