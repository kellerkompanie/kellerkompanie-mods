//mission variables and parameters:
disableSerialization;

//dialog
_display = _this select 0;
_ctrlText 		 = _display displayCtrl 1400;
_ctrlAllowBLUFOR = _display displayCtrl 2800;
_ctrlAllowINDFOR = _display displayCtrl 2801;
_ctrlAllowOPFOR  = _display displayCtrl 2802;
_ctrlAllowCIV    = _display displayCtrl 2803;

_lastName 	= profileNamespace getVariable ["keko_teleport_lastName",   ""   ];
_lastBLUFOR = profileNamespace getVariable ["keko_teleport_lastBLUFOR", true ];
_lastINDFOR = profileNamespace getVariable ["keko_teleport_lastINDFOR", false];
_lastOPFOR  = profileNamespace getVariable ["keko_teleport_lastOPFOR",  false];
_lastCIV    = profileNamespace getVariable ["keko_teleport_lastCIV",    false];

_ctrlText 		 ctrlSetText  _lastName;
_ctrlAllowBLUFOR cbSetChecked _lastBLUFOR;
_ctrlAllowINDFOR cbSetChecked _lastINDFOR;
_ctrlAllowOPFOR  cbSetChecked _lastOPFOR;
_ctrlAllowCIV    cbSetChecked _lastCIV;

true