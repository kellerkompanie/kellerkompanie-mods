#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;
if (GVAR(vehiclesEnabled) == 0) exitWith{WARNING("loadVehicle: persistency for vehicles is disabled, exiting!"); false};

INFO("loadVehicleByVariable");

params ["_objectVariable"];

INFO_1("loadVehicleByVariable %1", _objectVariable);

if !(_objectVariable call FUNC(dbVehicleExists)) exitWith {ERROR_1("vehicle %1 does not exist in DB!", _objectVariable); false};

private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:getVehicle:%1:%2",GVAR(key), _objectVariable]);

if !((_ret select 0) == 1) exitWith {ERROR_1("loadVehicle: loading unsucessful %1", _ret); false};

INFO_1("loadVehicle: loading sucessful %1", _ret);

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

INFO_5("loadVehicle %1 %2 %3 %4 %5", _objectVariable, _class, _position, _fuel, _damage);

private _vehicle = objNull;

private _allPossiblevehicles = allMissionObjects _class;
{
	if (_x getVariable [QGVAR(objectVariable), ""] == _objectVariable) exitWith {_vehicle = _x;};
} forEach _allPossiblevehicles;

// spawn vehicle slightly higher to prevent getting it stucked in the surface
private _z = _position select 2;
_position set [2, _z + 0.3];

if(isNull _vehicle) then {
	_vehicle = createVehicle [_class, _position, [], 0, "CAN_COLLIDE"];
	_vehicle setVariable [QGVAR(objectVariable), _objectVariable];
	missionNamespace setVariable [_objectVariable, _vehicle];
} else {
	_vehicle setPos _position;
};

_vehicle setDir _orientation;
private _serializedData = [_items, _magazines, _weapons, _containers];
[_vehicle, _serializedData] call FUNC(setContainerContent);
_vehicle setFuel _fuel;

_damage params ["_hitpointsNamesArray", "", "_damageValuesArray"];
{
	private _damagePart = _damageValuesArray select _forEachIndex;
	_vehicle setHitIndex  [_forEachIndex, _damagePart];
} forEach _hitpointsNamesArray;

INFO_2("loaded vehicle %1 of objectVariable %2", _vehicle, _objectVariable);

true
