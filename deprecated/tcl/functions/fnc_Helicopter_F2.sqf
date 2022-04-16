#include "script_component.hpp"

params ["_group","_crew","_vehicle"];
	
_vehicle forceSpeed -1;
private _units = (units _group);
private _leader = (leader _group);
private _driver = (driver _vehicle);
private _position = (_group getVariable QGVAR(Position));
_units = _units - _crew;

if (_units findIf { (alive _x) } > -1) then {
	private _unit = (_units select 0);
	
	{if (_x == _leader) exitWith {_unit = _x} } count _units;
	
	_driver doMove (getPos _unit);
	
	while { (_vehicle distance2D _unit > 100) } do {
		sleep 1;
	};
	
	if (floor (random 100) < 50) then {
		_vehicle land "LAND";
	}
	else {		
		_vehicle land "GET IN";
	};
};

_group move _position;
[_group] call FUNC(Remount_F3);

while { ( (alive _vehicle) && { (_vehicle distance2D _position > 100) } ) } do {
	sleep 1;
};

_vehicle land "LAND";
