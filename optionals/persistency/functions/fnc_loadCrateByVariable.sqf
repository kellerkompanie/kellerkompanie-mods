#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;

INFO("loadCrateByVariable");

if !(GVAR(enabled)) exitWith {WARNING("loadCrate: persistency disabled, exiting!"); false};
if (GVAR(key) == "") exitWith {WARNING("loadCrate: persistency key not set, exiting!"); false};
if (GVAR(cratesEnabled) == 0) exitWith {WARNING("loadCrate: persistency for crates is disabled, exiting!"); false};

params ["_objectVariable"];

INFO_1("loadCrateByVariable %1", _objectVariable);

if !(_objectVariable call FUNC(dbCrateExists)) exitWith {ERROR_1("crate %1 does not exist in DB!", _objectVariable); false};

private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:getCrate:%1:%2",GVAR(key), _objectVariable]);

if !((_ret select 0) == 1) exitWith {ERROR_1("loadCrate: loading unsucessful %1", _ret); false};

INFO_1("loadCrate: loading sucessful %1", _ret);

// assume loading was sucess
((_ret select 1) select 0) params [
    "_class",
    "_position",
    "_orientation",
    "_items",
    "_magazines",
    "_weapons",
    "_containers"];

INFO_5("loadCrate %1 %2 %3 %4 %5", _objectVariable, _class, _position, _orientation, _items);

// ReammoBox_F
private _crate = objNull;

// check if crate already exists as an object on the map
{
    if (_x getVariable [QGVAR(objectVariable), ""] == _objectVariable) exitWith {_crate = _x;};
} forEach allMissionObjects _class;

// create a new object if there is none yet, otherwise update position
if(isNull _crate) then {
    _crate = createVehicle [_class, _position, [], 0, "CAN_COLLIDE"];
    _crate setVariable [QGVAR(objectVariable), _objectVariable];
    missionNamespace setVariable [_objectVariable, _crate];
} else {
    _crate setPos _position;
};

_crate setDir _orientation;
private _serializedData = [_items, _magazines, _weapons, _containers];
[_crate, _serializedData] call FUNC(setContainerContent);

INFO_2("loaded crate %1 of objectVariable %2", _crate, _objectVariable);

true
