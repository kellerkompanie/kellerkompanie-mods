#include "script_component.hpp"

if !(EGVAR(persistency_settings,enabled)) exitWith{diag_log text "[KEKO] (persistency) loadVehicle: persistency disabled, exiting!"; false};
if(EGVAR(persistency_settings,key) == "") exitWith{diag_log text "[KEKO] (persistency) loadVehicle: persistency key not set, exiting!"; false};
if !(EGVAR(persistency_settings,vehiclesEnabled)) exitWith{diag_log text "[KEKO] (persistency) loadVehicle: persistency for vehicles is disabled, exiting!"; false};

params [
	["_input", objNull, [objNull, -1]]
];

diag_log text format ["[KEKO] (persistency) loadVehicle: _input=%1", _input];

private _objIsNull = false;
if((typeName _input) == (typeName objNull)) then {
	if(isNull _input) then {
		_objIsNull = true;
	};
};

if(_objIsNull) exitWith{diag_log text "[KEKO] (persistency) loadVehicle: illegal argument, exiting!"; false};

private _vehicle = objNull;
private _vehicleID = -1;

if ((typeName _input) == (typeName objNull)) then {
	// an object was passed as input, assume it's a vehicle
	_vehicle = _input;
	_vehicleID = _vehicle getVariable ["keko_persistency_vehicleID", -1];
} else {
	// input must be a vehicleID
	_vehicleID = _input;
};

if(_vehicleID == -1) exitWith{diag_log text "[KEKO] (persistency) loadVehicle: vehicle has no ID assigned, exiting!"; false};

private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:getVehicle:%1", _vehicleID]);

if ((_ret select 0) == 1) then {
	diag_log text format ["[KEKO] (persistency) loadVehicle: loading sucessful %1", _ret];

	// assume loading was sucess
	((_ret select 1) select 0) params [
		"_class",
		"_position",
		"_orientation",
		"_items",
		"_magazines",
		"_weapons",
		"_containers",
		"_fuel",
		"_damage"];

	diag_log text format ["[KEKO] (persistency) loadVehicle: _class=%1 _position=%2 _orientation=%3 _fuel=%4 _damage=%5 _items=%6", _class, _position, _orientation, _fuel, _damage, _items];

	if(isNull _vehicle) then {
		private _allPossiblevehicles = allMissionObjects _class;
		{
			if (_x getVariable ["keko_persistency_vehicleID", -1] == _vehicleID) exitWith{_vehicle = _x;};
		} forEach _allPossiblevehicles;
	};

	// spawn vehicle slightly higher to prevent getting it stucked in the surface
	private _z = _position select 2;
	_position set [2, _z + 0.3];

	if(isNull _vehicle) then {
		_vehicle = createVehicle [_class, _position, [], 0, "CAN_COLLIDE"];
	} else {
		_vehicle setPos _position;
	};

	_vehicle setDir _orientation;
	private _serializedData = [_items, _magazines, _weapons, _containers];
	[_vehicle, _serializedData] call FUNC(setContainerContent);

	_vehicle setVariable ["keko_persistency_vehicleID", _vehicleID];

	_vehicle setFuel _fuel;

	_damage params ["_hitpointsNamesArray", "", "_damageValuesArray"];
	{
		private _damagePart = _damageValuesArray select _forEachIndex;
		_vehicle setHitIndex  [_forEachIndex, _damagePart];
	} forEach _hitpointsNamesArray;

	true
} else {
	diag_log text format ["[KEKO] (persistency) loadVehicle: loading unsucessful %1", _ret];
	false
};
