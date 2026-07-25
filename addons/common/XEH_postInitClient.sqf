#include "script_component.hpp"

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

// add roleplay button to arsenal
private _ares_roleplay_items = "(toLower configName _x) find 'ar_' == 0" configClasses (configfile >> "CfgWeapons") apply {configName _x};
private _umi_roleplay_items = "(toLower configName _x) find 'umi_' == 0" configClasses (configfile >> "CfgWeapons") apply {configName _x};
[
    _ares_roleplay_items + _umi_roleplay_items,
    localize LSTRING(Arsenal_buttonRoleplayTooltip),
    QPATHTOF(ui\icon_roleplay.paa)
] call ace_arsenal_fnc_addRightPanelButton;

[] spawn {
    // check if player runs 32bit ArmA
    [{ time > 15 }, {call FUNC(check64bit);}, []] call CBA_fnc_waitUntilAndExecute;
};

// add action to allow player to fix map bug
private _fixMapBugaction = [
    QGVAR(fixMapBug),
    localize LSTRING(fixMapBug),
    "",
    { 
        false call RR_mapStuff_fnc_mapEH;
		{
			detach _x; 
			deleteVehicle _x;
		} forEach attachedObjects player; 
    },
    { count attachedObjects player > 0 }
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "ACE_Equipment"], _fixMapBugaction] call ace_interact_menu_fnc_addActionToObject;


// disable certain HUD elements, see https://community.bistudio.com/wiki/showHUD
showHUD [
  true, // scriptedHUD
  true, // info
  true, // radar
  true, // compass
  true, // direction
  false, // menu
  false, // group
  true, // cursors
  true, // panels
  false, // kills
  false  // showIcon3D
];