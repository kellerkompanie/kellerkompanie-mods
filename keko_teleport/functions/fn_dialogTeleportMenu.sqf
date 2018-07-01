disableSerialization;

_object = profileNamespace getVariable "keko_teleport_menu_object";
_display = uiNamespace getVariable "keko_teleport_menuDialog";

_text 		 = ctrlText    (_display displayCtrl 1400);
_allowBLUFOR = cbChecked (_display displayCtrl 2800);
_allowINDFOR = cbChecked (_display displayCtrl 2801);
_allowOPFOR  = cbChecked (_display displayCtrl 2802);
_allowCIV    = cbChecked (_display displayCtrl 2803);

profileNamespace setVariable ["keko_teleport_lastBLUFOR", _allowBLUFOR];
profileNamespace setVariable ["keko_teleport_lastINDFOR", _allowINDFOR];
profileNamespace setVariable ["keko_teleport_lastOPFOR", _allowOPFOR];
profileNamespace setVariable ["keko_teleport_lastCIV", _allowCIV];

[_object, [_allowBLUFOR, _allowINDFOR, _allowOPFOR, _allowCIV]] call keko_teleport_fnc_addTeleportMenu;

closeDialog 1;