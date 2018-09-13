#include "script_component.hpp"

//mission variables and parameters:
disableSerialization;

//dialog
private _display = _this select 0;
private _ctrlAction = _display displayCtrl 1401;
private _ctrlTitle = _display displayCtrl 1400;
private _ctrlContent = _display displayCtrl 1402;
private _ctrlRemove = _display displayCtrl 2800;

private _lastAction = profileNamespace getVariable [QGVAR(lastAction), "Dokumente aufhaben"];
private _lastTitle = profileNamespace getVariable [QGVAR(lastTitel), "Dokumenttitel"];
private _lastContent = profileNamespace getVariable [QGVAR(lastContent), "Das Dokument enthält einiges an Text"];
private _lastRemove = profileNamespace getVariable [QGVAR(lastRemove), false];

_ctrlAction ctrlSetText _lastAction;
_ctrlTitle ctrlSetText _lastTitle;
_ctrlContent ctrlSetText _lastContent;
_ctrlRemove cbSetChecked _lastRemove;

true;
