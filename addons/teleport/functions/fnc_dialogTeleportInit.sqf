#include "script_component.hpp"

//mission variables and parameters:
disableSerialization;

//dialog
_display = _this select 0;
_listBox = _display displayCtrl 1500;

// LBs leeren
lbClear _listBox;

switch(side player) do {
	case west: {
		if (isNil "keko_teleport_destinations_blufor") then {keko_teleport_destinations_blufor = []};

		diag_log text format["[KEKO] (teleport) dialogTeleportInit: keko_teleport_destinations_blufor = %1", keko_teleport_destinations_blufor];

		{ 
			diag_log text format["[KEKO] (teleport) dialogTeleportInit _x = %1", _x];

			lbAdd [1500, _x];
			lbSetData [1500, _forEachIndex, _x];
		} forEach keko_teleport_destinations_blufor;
	};
	case resistance: {
		if (isNil "keko_teleport_destinations_indfor") then {keko_teleport_destinations_indfor = []};

		diag_log text format["[KEKO] (teleport) dialogTeleportInit: keko_teleport_destinations_indfor = %1", keko_teleport_destinations_indfor];

		{ 
			diag_log text format["[KEKO] (teleport) dialogTeleportInit _x = %1", _x];

			lbAdd [1500, _x];
			lbSetData [1500, _forEachIndex, _x];
		} forEach keko_teleport_destinations_indfor;
	};
	case east:
	{
		if (isNil "keko_teleport_destinations_opfor") then {keko_teleport_destinations_opfor = []};

		diag_log text format["[KEKO] (teleport) dialogTeleportInit: keko_teleport_destinations_opfor = %1", keko_teleport_destinations_opfor];

		{ 
			diag_log text format["[KEKO] (teleport) dialogTeleportInit _x = %1", _x];

			lbAdd [1500, _x];
			lbSetData [1500, _forEachIndex, _x];
		} forEach keko_teleport_destinations_opfor;
	};
	case civilian: {
		if (isNil "keko_teleport_destinations_civ") then {keko_teleport_destinations_civ = []};

		diag_log text format["[KEKO] (teleport) dialogTeleportInit: keko_teleport_destinations_civ = %1", keko_teleport_destinations_civ];

		{ 
			diag_log text format["[KEKO] (teleport) dialogTeleportInit _x = %1", _x];

			lbAdd [1500, _x];
			lbSetData [1500, _forEachIndex, _x];
		} forEach keko_teleport_destinations_civ;
	};
};

true