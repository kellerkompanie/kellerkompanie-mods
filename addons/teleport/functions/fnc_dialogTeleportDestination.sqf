//diag_log "dialogTeleportDestination";

_text = ctrlText ((uiNamespace getVariable "keko_teleport_dest_dialog") displayCtrl 1400);

_allowBLUFOR = cbChecked ((uiNamespace getVariable "keko_teleport_dest_dialog") displayCtrl 2800);
_allowINDFOR = cbChecked ((uiNamespace getVariable "keko_teleport_dest_dialog") displayCtrl 2801);
_allowOPFOR  = cbChecked ((uiNamespace getVariable "keko_teleport_dest_dialog") displayCtrl 2802);
_allowCIV    = cbChecked ((uiNamespace getVariable "keko_teleport_dest_dialog") displayCtrl 2803);

//diag_log format ["_text: %1", _text];
_object = profileNamespace getVariable "keko_teleport_dest_object";
//diag_log format ["_object: %1", _object];

profileNamespace setVariable ["keko_teleport_lastName", _text];
profileNamespace setVariable ["keko_teleport_lastBLUFOR", _allowBLUFOR];
profileNamespace setVariable ["keko_teleport_lastINDFOR", _allowINDFOR];
profileNamespace setVariable ["keko_teleport_lastOPFOR", _allowOPFOR];
profileNamespace setVariable ["keko_teleport_lastCIV", _allowCIV];

[_object, _text, [_allowBLUFOR, _allowINDFOR, _allowOPFOR, _allowCIV]] call keko_teleport_fnc_addTeleportDestination;

deleteVehicle _object;

closeDialog 1;