#include "script_component.hpp"

//mission variables and parameters:
disableSerialization;

//dialog
private _display = _this select 0;
private _ctrlAllowBLUFOR = _display displayCtrl 2800;
private _ctrlAllowINDFOR = _display displayCtrl 2801;
private _ctrlAllowOPFOR  = _display displayCtrl 2802;
private _ctrlAllowCIV    = _display displayCtrl 2803;

private _lastBLUFOR = profileNamespace getVariable ["keko_teleport_lastBLUFOR", true ];
private _lastINDFOR = profileNamespace getVariable ["keko_teleport_lastINDFOR", false];
private _lastOPFOR  = profileNamespace getVariable ["keko_teleport_lastOPFOR",  false];
private _lastCIV    = profileNamespace getVariable ["keko_teleport_lastCIV",    false];

_ctrlAllowBLUFOR cbSetChecked _lastBLUFOR;
_ctrlAllowINDFOR cbSetChecked _lastINDFOR;
_ctrlAllowOPFOR  cbSetChecked _lastOPFOR;
_ctrlAllowCIV    cbSetChecked _lastCIV;

true
