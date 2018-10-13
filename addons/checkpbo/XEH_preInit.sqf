#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

private _onPlayerConnectedHandler = addMissionEventHandler ["PlayerConnected",
{
	//INFO("EH:PlayerConnected");
	//INFO_1("EH:PlayerConnected _this", _this);

	params ["_id", "_uid", "_name", "_jip", "_owner"];

	diag_log text format ["EH:PlayerConnected _id=%1 _uid=%2 _name=%3 _jip=%4 _owner=%5",_id,_uid,_name,_jip,_owner];

	if(_name == "__SERVER__" ) exitWith {};

	remoteExec [QFUNC(onPlayerConnected), _owner];
}];

ADDON = true;
