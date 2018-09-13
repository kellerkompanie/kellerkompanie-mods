#include "script_component.hpp"

disableSerialization;

private _object = profileNamespace getVariable "keko_teleport_menu_object";
private _display = uiNamespace getVariable "keko_teleport_menuDialog";

private _allowBLUFOR = cbChecked (_display displayCtrl 2800);
private _allowINDFOR = cbChecked (_display displayCtrl 2801);
private _allowOPFOR  = cbChecked (_display displayCtrl 2802);
private _allowCIV    = cbChecked (_display displayCtrl 2803);

profileNamespace setVariable ["keko_teleport_lastBLUFOR", _allowBLUFOR];
profileNamespace setVariable ["keko_teleport_lastINDFOR", _allowINDFOR];
profileNamespace setVariable ["keko_teleport_lastOPFOR", _allowOPFOR];
profileNamespace setVariable ["keko_teleport_lastCIV", _allowCIV];

[_object, [_allowBLUFOR, _allowINDFOR, _allowOPFOR, _allowCIV]] call keko_teleport_fnc_addTeleportMenu;

closeDialog 1;
