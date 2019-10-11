#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;
if (GVAR(vehiclesEnabled) == 0) exitWith{false};

params ["_vehicle"];

private _objectVariable = _vehicle getVariable [QGVAR(objectVariable), ""];

if !(_objectVariable call FUNC(dbVehicleExists)) exitWith {ERROR("vehicle %1 does not exist in DB!", _objectVariable); false};

if(count _objectVariable == 0) exitWith {
    _vehicle call FUNC(initObject);
    _vehicle call FUNC(saveVehicle);
    ERROR("vehicle was not initialized and therefore cannot be loaded");
    false
};

private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:getVehicle:%1:%2", GVAR(key), _objectVariable]);

if !((_ret select 0) == 1) exitWith {ERROR("loadVehicleObject: loading unsucessful", _ret); false};

// assume loading was sucess
((_ret select 1) select 0) params [
    "", // _class
    "_position",
    "_orientation",
    "_items",
    "_magazines",
    "_weapons",
    "_containers",
    "_fuel",
    "_damage"];

// spawn vehicle slightly higher to prevent getting it stucked in the surface
private _z = _position select 2;
_position set [2, _z + 0.3];
_vehicle setPos _position;
_vehicle setDir _orientation;
private _serializedData = [_items, _magazines, _weapons, _containers];
[_vehicle, _serializedData] call FUNC(setContainerContent);_vehicle setFuel _fuel;

_damage params ["_hitpointsNamesArray", "", "_damageValuesArray"];
{
    private _damagePart = _damageValuesArray select _forEachIndex;
    _vehicle setHitIndex  [_forEachIndex, _damagePart];
} forEach _hitpointsNamesArray;

true
