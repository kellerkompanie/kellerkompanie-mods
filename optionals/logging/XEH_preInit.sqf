#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

private _ret = "extDB3" callExtension format [ "0:keko_logging:onMissionLoad:%1:%2:%3", missionName, missionVersion, worldName ];

private _handle = [] spawn {
    waitUntil { time > 0; };

    _ret = "extDB3" callExtension format [ "0:keko_logging:onMissionStart:%1:%2:%3", missionName, missionVersion, worldName ];
};

private _endHandler = addMissionEventHandler ["Ended",{
    _ret = "extDB3" callExtension format [ "0:keko_logging:onMissionEnd:%1:%2:%3", missionName, missionVersion, worldName ];
}];

private _conHandler = addMissionEventHandler ["PlayerConnected",
{
    params ["", "_uid", "_name", "_jip", ""];

    if(_name == "__SERVER__" ) exitWith {};

    _ret = "extDB3" callExtension format [ "0:keko_logging:onPlayerConnected:%1:%2:%3", _uid, _name, _jip ];
}];

private _disconHandler = addMissionEventHandler ["PlayerDisconnected",
{
    params ["", "_uid", "_name", "_jip", ""];

    if(_name == "__SERVER__" ) exitWith {};

    _ret = "extDB3" callExtension format [ "0:keko_logging:onPlayerDisconnected:%1:%2:%3", _uid, _name, _jip ];
}];

ADDON = true;
