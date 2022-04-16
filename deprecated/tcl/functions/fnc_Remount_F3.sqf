#include "script_component.hpp"

params ["_group"];

private _vehicles = [];
private _units = (units _group);
private _leader = (leader _group);
(GVAR(Remount) select 0) pushBack _group;
private ["_unit","_vehicle"];
private _count = 0;

for "_count" from _count to (count _units - 1) do {
	_unit = (_units select _count);
	_vehicle = (assignedVehicle _unit);
	
	if (_vehicle in _vehicles) then {
		_vehicle = _vehicle;
	}
	else {
		if (_unit in _vehicle) then {
			_unit = _unit;
		}
		else {
			_vehicles pushBack _vehicle;
			GVAR(Assign) set [0, (GVAR(Assign) select 0) - [_vehicle] ];
			[QGVAR(Remount), _group, _vehicle] call FUNC(Marker_F1);
		};
	};
};

_units orderGetIn True; _units allowGetIn True;	
[_group, _vehicles] spawn FUNC(Remount_F4);

True
