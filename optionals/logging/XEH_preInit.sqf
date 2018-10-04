#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;


TRACE_3("preInit", missionName, missionVersion, worldName);

private _ret = "extDB3" callExtension format [ "0:keko_logging:onMissionLoad:%1:%2:%3", missionName, missionVersion, worldName ];
TRACE_1("", _ret);

private _handle = [] spawn {
	waitUntil { time > 0; };

	_ret = "extDB3" callExtension format [ "0:keko_logging:onMissionStart:%1:%2:%3", missionName, missionVersion, worldName ];
	TRACE_1("", _ret);
};

private _endHandler = addMissionEventHandler ["Ended",{
	_ret = "extDB3" callExtension format [ "0:keko_logging:onMissionEnd:%1:%2:%3", missionName, missionVersion, worldName ];
	TRACE_1("", _ret);
}];

private _conHandler = addMissionEventHandler ["PlayerConnected",
{
	TRACE_1("onPlayerConnected", _this);

	params ["", "_uid", "_name", "_jip", ""];

	if(_name == "__SERVER__" ) exitWith {};

	_ret = "extDB3" callExtension format [ "0:keko_logging:onPlayerConnected:%1:%2:%3", _uid, _name, _jip ];
	TRACE_1("", _ret);
}];

private _disconHandler = addMissionEventHandler ["PlayerDisconnected",
{
	TRACE_1("onPlayerDisconnected", _this);

	params ["", "_uid", "_name", "_jip", ""];

	if(_name == "__SERVER__" ) exitWith {};

	_ret = "extDB3" callExtension format [ "0:keko_logging:onPlayerDisconnected:%1:%2:%3", _uid, _name, _jip ];
	TRACE_1("", _ret);
}];


ADDON = true;
