#include "script_component.hpp"

params ["_group"];

private _units = (units _group);

if ( { (alive _x) } count _units > 3) then {
	private _array = [];
	private _random = 3 - (random 1);
	private _value = (count _units / 2);
	
	if (floor (random 100) < (GVAR(Feature) select 20) ) then {
		(GVAR(Flanking) select 0) pushBack _group;
	};
	
	private "_unit";	
	private _count = (count _units - 1);
	
	while { (_count > _value) } do {
		_unit = (_units select _count);
		_array pushBack _unit;
		_count = _count - 1;
	};
	
	(GVAR(Flanking) select 1) append _array;
	
	if (floor (random 100) < (GVAR(Feature) select 21) ) then {
	}
	else {
		_units = _units - _array;
		private _leader = (leader _group);
		_units deleteAt (_units find _leader);
		private _unit = (_units select 0);
		_units deleteAt (_units find _unit);
		(GVAR(Flanking) select 2) append _units;
	};
};

True
