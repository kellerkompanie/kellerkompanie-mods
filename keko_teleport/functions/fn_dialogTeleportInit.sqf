//mission variables and parameters:
disableSerialization;

//dialog
_display = _this select 0;
_listBox = _display displayCtrl 1500;

// LBs leeren
lbClear _listBox;

if (isNil "keko_teleport_destinations") then {keko_teleport_destinations = []};

{ 
	_x params ["_teleporterObject","_teleporterName"];

	lbAdd [1500, _teleporterName];
	lbSetData [1500, _forEachIndex, _teleporterName];
} forEach keko_teleport_destinations;

true;