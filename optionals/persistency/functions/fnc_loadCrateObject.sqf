#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;
if (GVAR(cratesEnabled) == 0) exitWith{false};

params ["_crate"];

private _objectVariable = _crate getVariable [QGVAR(objectVariable), ""];

if !(_objectVariable call FUNC(dbCrateExists)) exitWith {
    ERROR("crate %1 does not exist in DB!", _objectVariable);
    false
};

if(count _objectVariable == 0) exitWith {
    _crate call FUNC(initObject);
    _crate call FUNC(saveCrate);
    ERROR("crate was not initialized and therefore cannot be loaded");
    false
};

private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:getCrate:%1:%2", GVAR(key), _objectVariable]);

if !((_ret select 0) == 1) exitWith {ERROR("loadCrate: loading unsucessful", _ret); false};

// assume loading was sucess
((_ret select 1) select 0) params [
    "", // _class
    "_position",
    "_orientation",
    "_items",
    "_magazines",
    "_weapons",
    "_containers"];

_crate setPos _position;
_crate setDir _orientation;
private _serializedData = [_items, _magazines, _weapons, _containers];
[_crate, _serializedData] call FUNC(setContainerContent);

true
