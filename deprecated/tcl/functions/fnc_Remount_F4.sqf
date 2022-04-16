#include "script_component.hpp"

params ["_group","_vehicles"];

private _units = (units _group);

{_x forceSpeed 0} count _vehicles;

while { (count _units > 0) } do {
	_units = _units select { ( (alive _x) && { (isNull objectParent _x) } && { (count assignedVehicleRole _x > 0) } && { (assignedVehicle _x in _vehicles) } && { (_x in units _group) } ) };
	
	if (_group in (GVAR(Reinforcement) select 0) ) exitWith {
		{
			if (_x distance assignedVehicle _x > 100) then { 
				[_x] orderGetIn False; 
				[_x] allowGetIn False;
			};
		} forEach _units;
	};
	
	sleep 5;
};

{_x forceSpeed -1} count _vehicles;
GVAR(Remount) set [0, (GVAR(Remount) select 0) - [_group] ];
