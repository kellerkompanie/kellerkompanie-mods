#include "script_component.hpp"

params ["_groups"];

private _array = [];

_array append _groups;

private ["_group","_units","_objects"];

private _count = 0;

for "_count" from _count to (count _groups - 1) do {
	_group = (_groups select _count);
	
	_units = (units _group);
	
	if (_units findIf { (alive _x) } > -1) then {
		_objects = [];		
		{_objects append (synchronizedObjects _x) } count _units;		
		{ [_x, _group, _objects] call FUNC(Groups_F2) } count [QGVAR(Idle),QGVAR(Hold),QGVAR(Defend),QGVAR(Custom),QGVAR(Freeze),QGVAR(Default),QGVAR(Disabled),QGVAR(Enhanced),QGVAR(Location)];
	};
};

if (count (GVAR(Custom) select 0) > 0) then {
	_array = ( (GVAR(Hold) select 0) + (GVAR(Defend) select 0) + (GVAR(Custom) select 0) + (GVAR(Location) select 0) );	
	_array = (_array arrayIntersect _array);	
	_groups = _groups - _array;	
	(GVAR(Disabled) select 0) append _groups;
	
	private _sort = GVAR(Initialized) select 0;	
	_sort = _sort - _array;	
	_sort = _sort - GVAR(Disabled) select 0;	
	(GVAR(Disabled) select 0) append _sort;
};

_array = _array - (GVAR(Players) select 2);
_array = _array - (GVAR(Disabled) select 0);
_array = _array - (GVAR(Initialized) select 0);
_array = _array select { (side _x in (GVAR(System) select 2) ) };

{ 
	[_x] call FUNC(Get_In_F1); 
	[_x] call FUNC(Groups_F8); 
	[units _x] call FUNC(Units_F); 
	[_x] spawn FUNC(Garrison_F1) 
} forEach _array;

(GVAR(Groups) select 0) append _array;
(GVAR(Initialized) select 0) append _array;

True
