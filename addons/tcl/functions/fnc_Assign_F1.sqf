#include "script_component.hpp"

params ["_units","_group"];
	
private _return = True;

if (_units isEqualTo [] ) exitWith {_return = False};

private _unit = (_units select 0);

if (isNull objectParent _unit) then {
	private _objects = _unit nearEntities ["Car", 100];	
	private _array = ( (GVAR(Assign) select 0) + (GVAR(Stuck) select 0) );	
	_objects = _objects - _array;	
	_objects = _objects select { ( (alive _x) && { (fuel _x > 0) } && { (canMove _x) } && { (_unit knowsAbout _x > 0) } ) };
	
	if (_objects isEqualTo [] ) exitWith {};
	
	private ["_vehicle","_side","_crew"];	
	private _count = 0;
	
	for "_count" from _count to (count _objects - 1) do {
		_vehicle = (_objects select _count);		
		_side = False;
		
		if (getNumber (configFile >> "CfgVehicles" >> (typeOf _unit) >> "side") isEqualTo getNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "side") ) then {
			_side = True;
		};
		
		_crew = (crew _vehicle);
		
		if ( (_side) && { (_crew isEqualTo [] ) } ) exitWith {
			_return = False;			
			(GVAR(Assign) select 0) pushBack _vehicle;			
			[_units, _group, _vehicle] call FUNC(Assign_F2);
		};
	};
};

_return
