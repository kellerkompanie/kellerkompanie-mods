#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;
if (GVAR(cratesEnabled) == 0) exitWith{WARNING("saveCrate: persistency for crates is disabled, exiting!"); false};

params ["_crate"];

private _objectVariable = _crate getVariable [QGVAR(objectVariable), ""];
private _crateClass = typeOf _crate;
private _cratePosition = getPos _crate;
private _crateOrientation = getDir _crate;

private _crateSerialization = _crate call FUNC(getContainerContent);
_crateSerialization params ["_crateItems","_crateMagazines","_crateWeapons","_crateContainers"];

INFO_3("saveCrate %1 %2 %3", _objectVariable, _crateClass, _cratePosition);

if(count _objectVariable == 0) then {
    _objectVariable = _crate call FUNC(initObject);
};

INFO_2("saving crate %1 of objectVariable %2", _crate, _objectVariable);

"extDB3" callExtension format [ "1:keko_persistency:saveCrate:%1:%2:%3:%4:%5:%6:%7:%8:%9",
    GVAR(key),
    _objectVariable,
    _crateClass,
    _cratePosition,
    _crateOrientation,
    _crateItems,
    _crateMagazines,
    _crateWeapons,
    _crateContainers];
true
