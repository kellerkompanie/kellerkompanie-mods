#include "script_component.hpp"

params ["_enemy","_group","_units"];

private _array = ( (GVAR(Sneaking) select 0) + (GVAR(Garrison) select 0) );

if (_group in _array) exitWith {};

private _bool = False;
_array = (GVAR(Hold) select 0);

if (_group in _array) then {
	_bool = True;
};

_array = ( (GVAR(Heal) select 0) + (GVAR(Rearm) select 0) + (GVAR(Take_Cover) select 0) + (GVAR(House_Search) select 0) + (GVAR(Static_Weapon) select 0) );
_units = _units - _array;

private ["_unit","_enemy"];
private _count = 0;

for "_count" from _count to (count _units - 1) do {
	_unit = (_units select _count);
	
	if (floor (random 100) < (GVAR(Feature) select 16) ) then {
		if ( (alive _unit) && { (isNull objectParent _unit) } ) then {
			[_unit, _enemy, _group, _bool] call FUNC(Take_Cover_F2);
		};
	};
};

True
