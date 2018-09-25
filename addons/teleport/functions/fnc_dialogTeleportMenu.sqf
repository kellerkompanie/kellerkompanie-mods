#include "script_component.hpp"

disableSerialization;

private _object = profileNamespace getVariable QGVAR(menuObject);
private _display = uiNamespace getVariable QGVAR(menuDialog);

private _allowBLUFOR = cbChecked (_display displayCtrl 2800);
private _allowINDFOR = cbChecked (_display displayCtrl 2801);
private _allowOPFOR  = cbChecked (_display displayCtrl 2802);
private _allowCIV    = cbChecked (_display displayCtrl 2803);

profileNamespace setVariable [QGVAR(lastBLUFOR), _allowBLUFOR];
profileNamespace setVariable [QGVAR(lastINDFOR), _allowINDFOR];
profileNamespace setVariable [QGVAR(lastOPFOR), _allowOPFOR];
profileNamespace setVariable [QGVAR(lastCIV), _allowCIV];

[_object, [_allowBLUFOR, _allowINDFOR, _allowOPFOR, _allowCIV]] call FUNC(addTeleportMenu);

closeDialog 1;
