#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;


diag_log text format["[KEKO] (logging) preInit %1 %2 %3", missionName, missionVersion, worldName];

_ret = "extDB3" callExtension format [ "0:keko_logging:onMissionLoad:%1:%2:%3", missionName, missionVersion, worldName ];
diag_log _ret;

_handle = [] spawn {
	waitUntil { time > 0; };

	_ret = "extDB3" callExtension format [ "0:keko_logging:onMissionStart:%1:%2:%3", missionName, missionVersion, worldName ];
	diag_log _ret;
};

_endHandler = addMissionEventHandler ["Ended",{
	_ret = "extDB3" callExtension format [ "0:keko_logging:onMissionEnd:%1:%2:%3", missionName, missionVersion, worldName ];
	diag_log _ret;
}];

_conHandler = addMissionEventHandler ["PlayerConnected",
{
	diag_log text format["[KEKO] (logging) onPlayerConnected %1", _this];

	params ["_id,", "_uid", "_name", "_jip", "_owner"];

	if(_name == "__SERVER__" ) exitWith {};

	_ret = "extDB3" callExtension format [ "0:keko_logging:onPlayerConnected:%1:%2:%3", _uid, _name, _jip ];
	diag_log text format["[KEKO] (logging) %1", _ret];
}];

_disconHandler = addMissionEventHandler ["PlayerDisconnected",
{
	diag_log text format["[KEKO] (logging) onPlayerDisconnected %1", _this];

	params ["_id,", "_uid", "_name", "_jip", "_owner"];

	if(_name == "__SERVER__" ) exitWith {};

	_ret = "extDB3" callExtension format [ "0:keko_logging:onPlayerDisconnected:%1:%2:%3", _uid, _name, _jip ];
	diag_log text format["[KEKO] (logging) %1", _ret];
}];


ADDON = true;
