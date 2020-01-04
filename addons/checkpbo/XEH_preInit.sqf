#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

if (isServer) then {
    addMissionEventHandler ["PlayerConnected",
    {
        if !( QGVAR(checkAddons) call CBA_settings_fnc_get ) exitWith {};

        params ["", "", "_name", "", "_owner"];

        if (_name == "__SERVER__" ) exitWith {};

        {
            if !(hasInterface) exitWith {};

            private _addons = call FUNC(determineAddons);
            _addons params ["_loadedAddons", "_loadedVersions"];

            private _reaction = QGVAR(reaction) call CBA_settings_fnc_get;
            if !(_reaction isEqualTo "NOTHING") then {
                [[_loadedAddons, _loadedVersions], player] remoteExec [QFUNC(compareAddons), 2];
            };
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
