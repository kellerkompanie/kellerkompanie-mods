#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

if !(GVAR(enabled)) exitWith{WARNING("preInit: persistency disabled, exiting!"); false};
if (GVAR(key) == "") exitWith{WARNING("preInit: persistency key not set, exiting!"); false};

INFO("running XEH_preInit");

addMissionEventHandler ["HandleDisconnect",
{
	TRACE_1("HandleDisconnect", _this);

	// params ["_unit,", "_id", "_uid", "_name"];
	private _unit = _this select 0;
	private _name = _this select 3;

	if(_name == "__SERVER__" ) exitWith {};

	_unit call FUNC(savePlayerLoadout);
}];

["keko_loadout_onLoadoutFinished", {
	params ["_player"];
	_player call FUNC(loadPlayerLoadout);
}] call CBA_fnc_addEventHandler;

ADDON = true;
