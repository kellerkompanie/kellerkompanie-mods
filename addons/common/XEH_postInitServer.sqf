#include "script_component.hpp"

// according to BIKI this should set the maximum viewDistance at server
setViewDistance 10000;

//stops the blabbering of AI units and players
{_x setVariable ["BIS_noCoreConversations", true, true]} count allUnits;

//removes notification and bird of all curators:
{ _x setVariable ["birdType",""]; _x setVariable ["showNotification",false]; [_x, [-1, -2, 2]] call bis_fnc_setCuratorVisionModes; nil;} count allCurators;

//deletes empty groups via MissionEventHandler
GVAR(emptyGroupsDeleter) = addMissionEventHandler ["EntityKilled", {private _grp = group (_this select 0);if ( count (units _grp) == 0 ) then { deleteGroup _grp };}];

//for good measure add CBA per frame handler as well
[
    {
        {
            if ((units _x) isEqualTo []) then {[_x] call CBA_fnc_deleteEntity};
        } forEach allGroups;
    },
    1800
] call CBA_fnc_addPerFrameHandler;

// Fix for units forgetting that their path is disabled after being transferred to a headless client
// Before the transfer check whether the unit's path is set to disabled, if so save it
[
    "ace_headless_groupTransferPre", 
    {
        _this params ["_unit", "_hc", "_previousOwner", "_idHc"];

        if (_unit checkAIFeature "PATH") then {
            _unit setVariable [QGVAR(disablePath), true, true];
        };
    }
] call CBA_fnc_addEventHandler;

// After the transfer check if the value matches the stored value and if not set it again
[
    "ace_headless_groupTransferPost", 
    {
        _this params ["_unit", "_hc", "_previousOwner", "_idHc", _transferred];

        if (_unit getVariable [QGVAR(disablePath), false] != _unit checkAIFeature "PATH") then {
            doStop _unit;
            if (_unit getVariable [QGVAR(disablePath), false]) then {
                _unit enableAI "PATH";
            } else {
                _unit disableAI "PATH";
            };
        };
    }
] call CBA_fnc_addEventHandler;