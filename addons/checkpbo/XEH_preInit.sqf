#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

INFO("XEH_preInit");

private _onPlayerConnectedHandler = addMissionEventHandler ["PlayerConnected",
{
	INFO("EH:PlayerConnected");
	INFO_1("EH:PlayerConnected _this", _this);

	params ["_id", "_uid", "_name", "_jip", "_owner"];

	INFO_1("EH:PlayerConnected _id", _id);
	INFO_1("EH:PlayerConnected _uid", _uid);
	INFO_1("EH:PlayerConnected _name", _name);
	INFO_1("EH:PlayerConnected _jip", _jip);
	INFO_1("EH:PlayerConnected _owner", _owner);

	if(_name == "__SERVER__" ) exitWith {};

	remoteExec [QFUNC(onPlayerConnected), _owner];

	INFO("EH:PlayerConnected finish");
}];

INFO("XEH_preInit after EH");

ADDON = true;
