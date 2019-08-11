#include "script_component.hpp"

INFO("running XEH_postInitClient");

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



// fix for settings not yet being propagated properly
[{call FUNC(addBriefingEntries);}, []] call CBA_fnc_execNextFrame;


// event handlers for the statistics at mission end
GVAR(bandagesApplied) = 0;
GVAR(pulseChecked) = 0;
GVAR(cprPerformed) = 0;
GVAR(fragsOut) = 0;
GVAR(shotsFired) = 0;

["ace_treatmentSucceded", {
    params ["_medic", "_patient", "_bodyPart", "_className"];

    if (_className in ["FieldDressing", "PackingBandage", "ElasticBandage", "QuikClot"]) exitWith {
        GVAR(bandagesApplied) = GVAR(bandagesApplied) + 1;
    };

    if (_className isEqualTo "CheckPulse") exitWith {
        GVAR(pulseChecked) = GVAR(pulseChecked) + 1;
    };

    if (_className isEqualTo "CPR") exitWith {
        GVAR(cprPerformed) = GVAR(cprPerformed) + 1;
    };
}] call CBA_fnc_addEventHandler;

["ace_throwableThrown", {
    params ["_unit", "_frag"];

    if (isPlayer _unit) then {
        GVAR(fragsOut) = GVAR(fragsOut) + 1;
    };
}] call CBA_fnc_addEventHandler;

player addEventHandler ["Fired", {
    params ["_unit", "_weapon", "_muzzle"];

    if (_weapon == "Throw") then {
        GVAR(fragsOut) = GVAR(fragsOut) + 1;
    };

    if (_weapon isEqualTo primaryWeapon _unit) then {
        GVAR(shotsFired) = GVAR(shotsFired) + 1;
    };
}];


// replace items in loadout, but postpone until settings are propagated
[{player call FUNC(itemCheck); ["loadout", FUNC(itemCheck)] call CBA_fnc_addPlayerEventHandler;}, []] call CBA_fnc_execNextFrame;

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
