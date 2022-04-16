#include "script_component.hpp"

params ["_group","_logic","_vehicle"];

private _distance = 100;
private _random = (random _distance);

_distance = (_distance + _random);

if (_vehicle isKindOf "Helicopter") then {
	private _value = 0;
	private _crew = (crew _vehicle);
	
	if (_crew findIf { ( (assignedVehicleRole _x select 0 == "Cargo") && { (backpack _x isEqualTo "B_Parachute") } ) } > -1) then {
		_value = 50;
	};
	
	if (floor (random 100) < _value) then {
		_vehicle flyInHeight _distance;
		_group setVariable [QGVAR(Eject), True];
	}
	else {
		_group setVariable [QGVAR(Eject), False];
	};
	
	_random = 1 + (random 1);
	_distance = (_distance * _random);
};

_distance
