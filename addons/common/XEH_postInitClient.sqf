#include "script_component.hpp"

player setVariable ["BIS_noCoreConversations", true];
enableRadio false;

// according to the BIKI, this should reset viewDistance to Video Setting values
setViewDistance -1;

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

// add medical button to arsenal
[
    [
        "ACE_atropine",
        "ACE_fieldDressing",
        "ACE_elasticBandage",
        "ACE_quikclot",
        "ACE_bloodIV",
        "ACE_bloodIV_500",
        "ACE_bloodIV_250",
        "ACE_bodyBag",
        "ACE_bodyBagObject",
        "ACE_epinephrine",
        "ACE_morphine",
        "ACE_packingBandage",
        "ACE_personalAidKit",
        "ACE_plasmaIV",
        "ACE_plasmaIV_500",
        "ACE_plasmaIV_250",
        "ACE_salineIV",
        "ACE_salineIV_500",
        "ACE_salineIV_250",
        "ACE_surgicalKit",
        "ACE_splint",
        "ACE_tourniquet",
        "ACE_medicalSupplyCrate",
        "ACE_medicalSupplyCrate_advanced",
        "KEKO_painkiller",
        "FirstAidKit",
        "Medikit",
        "keko_firstAidKit"
    ],
    localize LSTRING(Arsenal_buttonMedicalTooltip),
    QPATHTOF(ui\icon_medical.paa)
] call ace_arsenal_fnc_addRightPanelButton;

// add food button to arsenal
[
    [
        "ACE_Banana",
        "ACE_Can_Franta",
        "ACE_Can_RedGull",
        "ACE_Can_Spirit",
        "ACE_Humanitarian_Ration",
        "ACE_MRE_BeefStew",
        "ACE_MRE_ChickenTikkaMasala",
        "ACE_MRE_ChickenHerbDumplings",
        "ACE_MRE_CreamChickenSoup",
        "ACE_MRE_CreamTomatoSoup",
        "ACE_MRE_LambCurry",
        "ACE_MRE_MeatballsPasta",
        "ACE_MRE_SteakVegetables",
        "ACE_WaterBottle",
        "ACE_WaterBottle_Empty",
        "ACE_WaterBottle_Half",
        "ACE_Canteen",
        "ACE_Canteen_Empty",
        "ACE_Canteen_Half"
    ],
    localize LSTRING(Arsenal_buttonFoodTooltip),
    QPATHTOF(ui\icon_food.paa)
] call ace_arsenal_fnc_addRightPanelButton;

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