#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Zeus module callback for ending a mission with a sucess.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * _logic call keko_common_fnc_moduleMissionEndSuccess
 *
 */
[QGVAR(onMissionEnd), "WIN"] call CBA_fnc_localEvent;

if (isServer) then {
    ["All", "Fired", {
        params ["_unit", "", "", "", "", "", "_projectile"];

        deleteVehicle _projectile;
        ["ace_captives_setHandcuffed", [_unit, true], [_unit]] call CBA_fnc_targetEvent;
    }] call CBA_fnc_addClassEventHandler;

    [{
        "WIN" call EFUNC(logging,endMission);
    }, [], 8] call CBA_fnc_waitAndExecute;
};

if (hasInterface) then {
    EGVAR(punch,enabled) = false;

    player setVariable ["tf_unable_to_use_radio", false];
    call TFAR_fnc_onSwTangentReleased;
    call TFAR_fnc_onLRTangentReleased;

    [] spawn {
        playMusic "LeadTrack01_F_Tank";
        sleep 2;
        [localize LSTRING(statsMissionWin), 1, 0.8] spawn BIS_fnc_dynamicText;
        sleep 1;
        [
            [format [localize LSTRING(statsPlayers), playersNumber playerSide], 1, 2],
            [format [localize LSTRING(statsMinutes), floor (time / 60)], 1, 2]
        ] spawn BIS_fnc_EXP_camp_SITREP;
        sleep 2;
        2 fadeMusic 0;
    };
};
