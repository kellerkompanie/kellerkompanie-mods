#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

if !(EGVAR(persistency_settings,enabled)) exitWith{diag_log text "[KEKO] (persistency) preInit: persistency disabled, exiting!"; false};
if (EGVAR(persistency_settings,key) == "") exitWith{diag_log text "[KEKO] (persistency) preInit: persistency key not set, exiting!"; false};

diag_log text "[KEKO] (persistency) running XEH_preInit";

addMissionEventHandler ["HandleDisconnect",
{
	diag_log text format["[KEKO] (persistency) HandleDisconnect %1", _this];

	// params ["_unit,", "_id", "_uid", "_name"];
	private _unit = _this select 0;
	private _name = _this select 3;

	if(_name == "__SERVER__" ) exitWith {};

	_unit call FUNC(savePlayerLoadout);
}];

ADDON = true;
