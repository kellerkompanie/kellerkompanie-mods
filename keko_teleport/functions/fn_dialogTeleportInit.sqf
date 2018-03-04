//mission variables and parameters:
disableSerialization;

//dialog
_display = _this select 0;
_listBox = _display displayCtrl 1500;

// LBs leeren
lbClear _listBox;

if (isNil "keko_teleport_destinations") then {keko_teleport_destinations = []};

diag_log text format["[KEKO] (teleport) dialogTeleportInit: keko_teleport_destinations = %1", keko_teleport_destinations];

{ 
	_x params ["_teleporterObject","_teleporterName"];
	diag_log text format["[KEKO] (teleport) dialogTeleportInit _x = %1", _x];

	lbAdd [1500, _teleporterName];
	lbSetData [1500, _forEachIndex, _teleporterName];
} forEach keko_teleport_destinations;

true;