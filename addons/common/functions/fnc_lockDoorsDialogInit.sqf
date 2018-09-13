#include "script_component.hpp"

disableSerialization;

//dialog
_display = _this select 0;
_ctrlRadius = _display displayCtrl 1400;
_ctrlLocked = _display displayCtrl 2800;

_lastRadius = profileNamespace getVariable [QGVAR(lastDoorRadius), "100"];
_lastLocked = profileNamespace getVariable [QGVAR(lastDoorLocked), true];

_ctrlRadius ctrlSetText _lastRadius;
_ctrlLocked ctrlSetChecked _lastLocked;

true;