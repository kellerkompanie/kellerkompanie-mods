#include "script_component.hpp"

player setVariable ["BIS_noCoreConversations", true];
enableRadio false;

//failsafe for missing curator interface:
if ( player isKindOf QEGVAR(faction_generic,blufor_command) || player isKindOf QEGVAR(faction_generic,opfor_command) || player isKindOf QEGVAR(faction_generic,indfor_command) ) then {
    if (TFAR_pluginTimeout < 15) then {
        ["TFAR_pluginTimeout", 15] call CBA_settings_fnc_set;
    };

    [] spawn {
        waitUntil {time > 2};

        if (isNull (getAssignedCuratorLogic player)) then {
            player remoteExec [QFUNC(createZeus), 2];
        };
    };
};

// add check for custom faces and kick players that use them
call FUNC(checkCustomFace);
["ace_arsenal_displayClosed", FUNC(checkCustomFace)] call CBA_fnc_addPlayerEventHandler;

// display settings in briefing area
call FUNC(addBriefingEntries);

// replace items in loadout, but postpone until settings are propagated
[{player call FUNC(replaceGenericItems); ["loadout", FUNC(replaceGenericItems)] call CBA_fnc_addPlayerEventHandler;}, []] call CBA_fnc_execNextFrame;

// add action to allow group leader to change the name of his group
private _action = [
    QGVAR(changeGroupName),
    localize LSTRING(changeGroupName),
    "",
    { createDialog QGVAR(changeGroupName) },
    { leader group player == player }
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "ACE_TeamManagement"], _action] call ace_interact_menu_fnc_addActionToObject;

// check if player runs 32bit ArmA
[{ time > 15 }, {call FUNC(check64bit);}, []] call CBA_fnc_waitUntilAndExecute;
