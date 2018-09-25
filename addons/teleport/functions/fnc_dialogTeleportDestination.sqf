#include "script_component.hpp"

//diag_log "dialogTeleportDestination";

private _text = ctrlText ((uiNamespace getVariable QGVAR(destDialog)) displayCtrl 1400);

private _allowBLUFOR = cbChecked ((uiNamespace getVariable QGVAR(destDialog)) displayCtrl 2800);
private _allowINDFOR = cbChecked ((uiNamespace getVariable QGVAR(destDialog)) displayCtrl 2801);
private _allowOPFOR  = cbChecked ((uiNamespace getVariable QGVAR(destDialog)) displayCtrl 2802);
private _allowCIV    = cbChecked ((uiNamespace getVariable QGVAR(destDialog)) displayCtrl 2803);

//diag_log format ["_text: %1", _text];
private _object = profileNamespace getVariable QGVAR(destObject);
//diag_log format ["_object: %1", _object];

profileNamespace setVariable [QGVAR(lastName), _text];
profileNamespace setVariable [QGVAR(lastBLUFOR), _allowBLUFOR];
profileNamespace setVariable [QGVAR(lastINDFOR), _allowINDFOR];
profileNamespace setVariable [QGVAR(lastOPFOR), _allowOPFOR];
profileNamespace setVariable [QGVAR(lastCIV), _allowCIV];

[_object, _text, [_allowBLUFOR, _allowINDFOR, _allowOPFOR, _allowCIV]] call FUNC(addTeleportDestination);

deleteVehicle _object;

closeDialog 1;
