#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;
if (GVAR(vehiclesEnabled) == 0) exitWith{WARNING("saveVehicle: persistency for vehicles is disabled, exiting!"); false};

params ["_vehicle"];

private _objectVariable = _vehicle getVariable [QGVAR(objectVariable), ""];
private _vehicleClass = typeOf _vehicle;
private _vehiclePosition = getPos _vehicle;
private _vehicleOrientation = getDir _vehicle;

private _vehicleSerialization = _vehicle call FUNC(getContainerContent);
_vehicleSerialization params ["_vehicleItems", "_vehicleMagazines", "_vehicleWeapons", "_vehicleContainers"];

private _vehicleFuel = fuel _vehicle;
private _vehicleDamage = getAllHitPointsDamage _vehicle;

INFO_3("saveVehicle %1 %2 %3", _objectVariable, _vehicleClass, _vehiclePosition);

if(count _objectVariable == 0) then {
	_objectVariable = _vehicle call FUNC(initObject);
};

INFO_2("saving vehicle %1 of objectVariable %2", _vehicle, _objectVariable);

"extDB3" callExtension format [ "1:keko_persistency:saveVehicle:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10:%11",
	GVAR(key),
	_objectVariable,
	_vehicleClass,
	_vehiclePosition,
	_vehicleOrientation,
	_vehicleItems,
	_vehicleMagazines,
	_vehicleWeapons,
	_vehicleContainers,
	_vehicleFuel,
	_vehicleDamage];
true
