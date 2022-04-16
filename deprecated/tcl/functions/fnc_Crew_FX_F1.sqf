#include "script_component.hpp"

params ["_crew","_vehicle"];

private _driver = (driver _vehicle);
private _side = (side _driver);
private _group = createGroup _side;

while { (getPos _vehicle select 2 > 3) } do {
	sleep 1;
};

private ["_unit","_type","_spawnedUnit"];

while { count _crew > 0 } do {
	_unit = (_crew select 0);
	
	if (floor (random 100) < 35) then {
		_type = typeOf _unit;		
		_spawnedUnit = _group createUnit [_type, [ (getPos _unit select 0), (getPos _unit select 1), - 5], [], 0, "CAN_COLLIDE"];		
		_spawnedUnit setDamage (random 0.3);		
		_spawnedUnit allowDamage False;		
		[_spawnedUnit, _vehicle] spawn FUNC(Crew_FX_F2);
	};
	
	_crew deleteAt (_crew find _unit);
	deleteVehicle _unit;
};
	