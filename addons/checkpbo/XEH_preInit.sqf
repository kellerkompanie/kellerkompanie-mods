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

            if!(GVAR(reaction) isEqualTo "NOTHING") then {
                [[_loadedAddons, _loadedVersions], player] remoteExec [QFUNC(compareAddons), 2];
            }
        } remoteExec ["call", _owner];
    }];
};

[
    QGVAR(checkAddons), // key/reference variable
    "LIST", // type of setting
    [localize LSTRING(checkAddons), localize LSTRING(checkAddonsTooltip)], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [true,false], // values
        [localize LSTRING(enabled), localize LSTRING(disabled)], // names
        0 // default index
    ],
    1
] call cba_settings_fnc_init;

[
    QGVAR(reaction), // key/reference variable
    "LIST", // type of setting
    [localize LSTRING(reaction), localize LSTRING(reactionTooltip)], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        ["KICK","WARN","NOTHING"], // values
        [localize LSTRING(kick), localize LSTRING(warning), localize LSTRING(nothing)], // names
        0 // default index
    ],
    1
] call cba_settings_fnc_init;

ADDON = true;
