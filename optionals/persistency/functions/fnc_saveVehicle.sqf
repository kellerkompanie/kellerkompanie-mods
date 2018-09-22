#include "script_component.hpp"

if !(EGVAR(persistency_settings,enabled)) exitWith{diag_log text "[KEKO] (persistency) saveVehicle: persistency disabled, exiting!"; false};
if(EGVAR(persistency_settings,key) == "") exitWith{diag_log text "[KEKO] (persistency) saveVehicle: persistency key not set, exiting!"; false};
if !(EGVAR(persistency_settings,vehiclesEnabled)) exitWith{diag_log text "[KEKO] (persistency) saveVehicle: persistency for vehicles is disabled, exiting!"; false};

params ["_vehicle"];

private _vehicleID = _vehicle getVariable ["keko_persistency_vehicleID", -1];
private _vehicleClass = typeOf _vehicle;
private _vehiclePosition = getPos _vehicle;
private _vehicleOrientation = getDir _vehicle;

private _vehicleSerialization = _vehicle call FUNC(getContainerContent);
private _vehicleItems = _vehicleSerialization select 0;
private _vehicleMagazines = _vehicleSerialization select 1;
private _vehicleWeapons = _vehicleSerialization select 2;
private _vehicleContainers = _vehicleSerialization select 3;

private _vehicleFuel = fuel _vehicle;
private _vehicleDamage = getAllHitPointsDamage _vehicle;

diag_log text format["[KEKO] (persistency) saveVehicle _vehicleID=%1 _vehicleClass=%2 _vehiclePosition=%3", _vehicleID, _vehicleClass, _vehiclePosition];

if(_vehicleID == -1) then {
	// vehicle does not exist yet, create new and store vehicleID
	private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:addVehicle:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10",
		EGVAR(persistency_settings,key),
		_vehicleClass,
		_vehiclePosition,
		_vehicleOrientation,
		_vehicleItems,
		_vehicleMagazines,
		_vehicleWeapons,
		_vehicleContainers,
		_vehicleFuel,
		_vehicleDamage]);
	diag_log text format["[KEKO] (persistency) addVehicle returns: %1", _ret];

	if ((_ret select 0) == 1) then {
		_vehicleID = ((_ret select 1) select 0);
		diag_log text format["[KEKO] (persistency) vehicle was created with VehicleID %1", _vehicleID];
		_vehicle setVariable ["keko_persistency_vehicleID", _vehicleID];
		true
	} else {
		diag_log text format["[KEKO] (persistency) creation of vehicle was unsucessful :("];
		false
	};


} else {
	// vehicle already exists, update information
	private _ret = "extDB3" callExtension format [ "1:keko_persistency:updateVehicle:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10:%11",
		EGVAR(persistency_settings,key),
		_vehicleClass,
		_vehiclePosition,
		_vehicleOrientation,
		_vehicleItems,
		_vehicleMagazines,
		_vehicleWeapons,
		_vehicleContainers,
		_vehicleFuel,
		_vehicleDamage,
		_vehicleID];

	diag_log text format["[KEKO] (persistency) updatevehicle returns: %1", _ret];
	true
};
