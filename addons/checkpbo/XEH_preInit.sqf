#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

if (isServer) then {
    private _onPlayerConnectedHandler = addMissionEventHandler ["PlayerConnected",
    {
        params ["_id", "_uid", "_name", "_jip", "_owner"];

        diag_log text format ["EH:PlayerConnected _id=%1 _uid=%2 _name=%3 _jip=%4 _owner=%5", _id, _uid, _name, _jip, _owner];

        if(_name == "__SERVER__" ) exitWith {};

        {
            #include "functions\getAddons.sqf"

            [[_loadedAddons, _loadedVersions], player] remoteExec [QFUNC(compareAddons), 2];
        } remoteExec ["call", _owner];
    }];
};

ADDON = true;
