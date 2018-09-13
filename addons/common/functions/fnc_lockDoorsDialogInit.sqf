#include "script_component.hpp"

disableSerialization;

//dialog
private _display = _this select 0;
private _ctrlRadius = _display displayCtrl 1400;
private _ctrlLocked = _display displayCtrl 2800;

private _lastRadius = profileNamespace getVariable [QGVAR(lastDoorRadius), "100"];
private _lastLocked = profileNamespace getVariable [QGVAR(lastDoorLocked), true];

_ctrlRadius ctrlSetText _lastRadius;
_ctrlLocked ctrlSetChecked _lastLocked;

true;
