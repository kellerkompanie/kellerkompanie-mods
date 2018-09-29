#include "script_component.hpp"

//mission variables and parameters:
disableSerialization;

//dialog
private _display = _this select 0;
private _listBox = _display displayCtrl 1500;

// LBs leeren
lbClear _listBox;

switch(side player) do {
	case west: {
		if (isNil QGVAR(destinations_blufor)) then {GVAR(destinations_blufor) = []};

		TRACE_1("dialogTeleportInit", GVAR(destinations_blufor));

		{
			TRACE_1("dialogTeleportInit", _x);

			lbAdd [1500, _x];
			lbSetData [1500, _forEachIndex, _x];
		} forEach GVAR(destinations_blufor);
	};
	case resistance: {
		if (isNil "keko_teleport_destinations_indfor") then {GVAR(destinations_indfor) = []};

		TRACE_1("dialogTeleportInit", GVAR(destinations_indfor));

		{
			TRACE_1("dialogTeleportInit", _x);

			lbAdd [1500, _x];
			lbSetData [1500, _forEachIndex, _x];
		} forEach GVAR(destinations_indfor);
	};
	case east:
	{
		if (isNil QGVAR(destinations_opfor)) then {GVAR(destinations_opfor) = []};

		TRACE_1("dialogTeleportInit", GVAR(destinations_opfor));

		{
			TRACE_1("dialogTeleportInit", _x);

			lbAdd [1500, _x];
			lbSetData [1500, _forEachIndex, _x];
		} forEach GVAR(destinations_opfor);
	};
	case civilian: {
		if (isNil "keko_teleport_destinations_civ") then {GVAR(destinations_civ) = []};

		TRACE_1("dialogTeleportInit", GVAR(destinations_civ));

		{
			TRACE_1("dialogTeleportInit", _x);

			lbAdd [1500, _x];
			lbSetData [1500, _forEachIndex, _x];
		} forEach GVAR(destinations_civ);
	};
};

true
