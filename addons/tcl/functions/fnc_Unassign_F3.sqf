#include "script_component.hpp"

params ["_enemy","_group","_logic"];

private _leader = (leader _group);
private _vehicle = (vehicle _leader);

if (_group in (GVAR(Reinforcement) select 1) ) then {
	DELETE_AT(GVAR(Reinforcement), 1, _group);
	[_group] call FUNC(Behaviour_F1);
};

if (_group in (GVAR(Reinforcement) select 2) ) then {
	DELETE_AT(GVAR(Reinforcement), 2, _group);
};

[_enemy, _group, _logic] call FUNC(Unassign_F4);


private _units = (units _group);

if (_vehicle isKindOf "Man") exitWith {
	if (_units findIf { (count assignedVehicleRole _x > 0) } > -1) then {
		[_group, _logic] call FUNC(Vehicle_F1);
	};
};

if (_vehicle isKindOf "Ship") exitWith {
	[_group, _logic, _vehicle] spawn FUNC(Ship_F1);
};

if (_vehicle isKindOf "Helicopter") exitWith {
	if (getPos _vehicle select 2 < 10) then	{
		_vehicle land "LAND";	
		_units orderGetIn False; 
		_units allowGetIn False;
	}
	else {
		if (_units findIf { ( (assignedVehicleRole _x select 0 == "Cargo") && (count (assignedVehicleRole _x) == 1) ) } > -1) then {
			[_group, _logic, _vehicle] spawn FUNC(Helicopter_F1);
		}
		else {
			_vehicle flyInHeight 50;
		};
	};
};

if (_vehicle isKindOf "LandVehicle") exitWith {
	private _driver = (driver _vehicle);
	
	if (alive _driver) then {
		[_group, _logic] call FUNC(Vehicle_F1);
	};
};

True
