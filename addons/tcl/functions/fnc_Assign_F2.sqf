#include "script_component.hpp"

params ["_units","_group","_vehicle"];
	
private _leader = (leader _group);

if (_group in (GVAR(Artillery) select 0) ) exitWith {};

_units select { (_x in (GVAR(Static_Weapon) select 0) ) } apply {_x leaveVehicle assignedVehicle _x; [_x] orderGetIn False; [_x] allowGetIn False};

{
	if (_x in assignedVehicle _x) then {
		_units = _units - [_x]; 
	} 
	else {
		if (count assignedVehicleRole _x > 0) then {
			_units = _units - [_x];
			[_x] orderGetIn True;
			[_x] allowGetIn True;
		} 
	}; 
} forEach _units;

if (_units isEqualTo [] ) exitWith {
	True
};

_units = [_units, _vehicle] call FUNC(Assign_F3);

if (_units isEqualTo [] ) exitWith {
	True
};

{
	_x assignAsCargo _vehicle;
} forEach _units;

{
	if (assignedVehicle _x == _vehicle) then {
		_units = _units - [_x]; 
		[_x] orderGetIn True; 
		[_x] allowGetIn True;
	}; 
} forEach _units;

if (_units isEqualTo [] ) exitWith {
	True
};

[_units, _group, _vehicle] call FUNC(Assign_F1);

True
	