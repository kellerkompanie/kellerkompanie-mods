#include "script_component.hpp"

//mission variables and parameters:
disableSerialization;

//dialog
private _display = _this select 0;
private _ctrlText 		 = _display displayCtrl 1400;
private _ctrlAllowBLUFOR = _display displayCtrl 2800;
private _ctrlAllowINDFOR = _display displayCtrl 2801;
private _ctrlAllowOPFOR  = _display displayCtrl 2802;
private _ctrlAllowCIV    = _display displayCtrl 2803;

private _lastName 	= profileNamespace getVariable [QGVAR(lastName),   ""   ];
private _lastBLUFOR = profileNamespace getVariable [QGVAR(lastBLUFOR), true ];
private _lastINDFOR = profileNamespace getVariable [QGVAR(lastINDFOR), false];
private _lastOPFOR  = profileNamespace getVariable [QGVAR(lastOPFOR),  false];
private _lastCIV    = profileNamespace getVariable [QGVAR(lastCIV),    false];

_ctrlText 		 ctrlSetText  _lastName;
_ctrlAllowBLUFOR cbSetChecked _lastBLUFOR;
_ctrlAllowINDFOR cbSetChecked _lastINDFOR;
_ctrlAllowOPFOR  cbSetChecked _lastOPFOR;
_ctrlAllowCIV    cbSetChecked _lastCIV;

true
