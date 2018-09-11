params ["_lockedState"];

disableSerialization;

_radiusText = ctrlText ((uiNamespace getVariable "keko_common_lockdoors_dialog") displayCtrl 1400);
//_lockedState = ctrlChecked ((uiNamespace getVariable "keko_common_lockdoors_dialog") displayCtrl 2800);

_centerPos = profileNamespace getVariable "keko_common_lockDoors_center";
_radius = parseNumber _radiusText;

diag_log text format["[KEKO] (common) callback _lockedState: %1", _lockedState];
[_centerPos, _radius, _lockedState] call keko_common_fnc_lockDoors;

profileNamespace setVariable ["keko_common_lastDoorRadius", _radiusText];
profileNamespace setVariable ["keko_common_lastDoorLocked", _lockedState];

closeDialog 1;