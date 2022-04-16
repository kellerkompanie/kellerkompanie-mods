#include "script_component.hpp"

params ["_enemy","_group","_logic"];

private _units = (units _group);
private _array = ( (GVAR(House_Search) select 0) + (GVAR(Static_Weapon) select 0) );
_units = _units - _array;
private _leader = (leader _group);
_units deleteAt (_units find _leader);
_units = _units select { ( (alive _x) && { (isNull objectParent _x) } ) };

if (count _units > 1) then {
	private _unit = _units select (count _units - 1);
	private _objects = nearestObjects [_logic, ["House"], 100];
	_objects = _objects - (GVAR(House_Search) select 1);
	
	if (_objects isEqualTo [] ) exitWith {};
	
	private _object = (_objects select 0);
	
	if (_unit distance _object < 100) then {
		[_unit, _group, _logic, _objects] call FUNC(House_Search_F2);
	};
};

True
