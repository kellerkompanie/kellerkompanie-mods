//diag_log "dialogTeleportDestination";

_text = ctrlText ((uiNamespace getVariable "keko_teleport_dest_dialog") displayCtrl 1400);
//diag_log format ["_text: %1", _text];
_object = profileNamespace getVariable "keko_teleport_dest_object";
//diag_log format ["_object: %1", _object];

[_object, _text] call keko_teleport_fnc_addTeleportDestination;

deleteVehicle _object;

closeDialog 1;