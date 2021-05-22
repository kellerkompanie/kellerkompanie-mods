#include "script_component.hpp"

params ["_group","_vehicle"];

private _units = units _group;
private _leader = leader _group;
private _position = _group getVariable QGVAR(Position);

[QGVAR(Remount), _group] call FUNC(Marker_F1);

if (_leader in (GVAR(Static_Weapon) select 0) ) then {

}
else {
	_units select { (_x in (GVAR(Static_Weapon) select 0) ) } apply {_x leaveVehicle assignedVehicle _x; [_x] orderGetIn False; [_x] allowGetIn False};
};

if (_vehicle isKindOf "Ship") exitWith {
	[_group] call FUNC(Remount_F3);
};

if (_vehicle isKindOf "Helicopter") exitWith {
	private _crew = (crew _vehicle);
	
	if (_crew findIf { (alive _x) } > -1) then {
		[_group, _crew, _vehicle] spawn FUNC(Helicopter_F2);
	};
	
	GVAR(Helicopter) set [0, (GVAR(Helicopter) select 0) - _crew];
};

if (_vehicle isKindOf "LandVehicle") exitWith {
	[_group] call FUNC(Remount_F3);
};

_group lockWp False;
_group move _position;
_units doFollow _leader;
[_group] call FUNC(Remount_F5);

True
