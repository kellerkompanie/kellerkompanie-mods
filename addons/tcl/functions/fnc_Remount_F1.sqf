#include "script_component.hpp"

params ["_group"];
	
private _units = (units _group);
private _leader = (leader _group);

{_x setUnitPos "AUTO"} count _units;

_group setVariable [QGVAR(Enemy), objNull];

if (isNil { (_group getVariable QGVAR(Helicopter)) } ) then {
	_leader = _leader;
}
else {
	_leader = (_group getVariable QGVAR(Helicopter));
	
	if (alive _leader) then {
		_group selectLeader _leader;
	}
	else {
		_leader = (leader _group);
	};
};

private _vehicle = (assignedVehicle _leader);

if ( (alive _vehicle) && { (canMove _vehicle) } ) then {
	_vehicle = _vehicle;
}
else {
	_vehicle = (vehicle _leader);
};

[_group, _vehicle] call FUNC(Remount_F2);

True
	