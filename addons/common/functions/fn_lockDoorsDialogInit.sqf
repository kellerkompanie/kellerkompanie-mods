disableSerialization;

//dialog
_display = _this select 0;
_ctrlRadius = _display displayCtrl 1400;
_ctrlLocked = _display displayCtrl 2800;

_lastRadius = profileNamespace getVariable ["keko_common_lastDoorRadius", "100"];
_lastLocked = profileNamespace getVariable ["keko_common_lastDoorLocked", true];

_ctrlRadius ctrlSetText _lastRadius;
_ctrlLocked ctrlSetChecked _lastLocked;

true;