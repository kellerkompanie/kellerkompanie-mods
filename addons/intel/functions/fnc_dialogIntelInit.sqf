#include "script_component.hpp"

//mission variables and parameters:
disableSerialization;

//dialog
_display = _this select 0;
_ctrlAction = _display displayCtrl 1401;
_ctrlTitle = _display displayCtrl 1400;
_ctrlContent = _display displayCtrl 1402;
_ctrlRemove = _display displayCtrl 2800;

_lastAction = profileNamespace getVariable [QGVAR(lastAction), "Dokumente aufhaben"];
_lastTitle = profileNamespace getVariable [QGVAR(lastTitel), "Dokumenttitel"];
_lastContent = profileNamespace getVariable [QGVAR(lastContent), "Das Dokument enthält einiges an Text"];
_lastRemove = profileNamespace getVariable [QGVAR(lastRemove), false];

_ctrlAction ctrlSetText _lastAction;
_ctrlTitle ctrlSetText _lastTitle;
_ctrlContent ctrlSetText _lastContent;
_ctrlRemove cbSetChecked _lastRemove;

true;
