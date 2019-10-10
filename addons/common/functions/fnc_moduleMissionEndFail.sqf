#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Zeus module callback for ending a mission with a failure.
 *
 * Arguments:
 * 0: Placed module <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _logic call keko_common_fnc_moduleMissionEndFail
 *
 */
[QGVAR(onMissionEnd), "FAIL"] call CBA_fnc_localEvent;

if (isServer) then {
    ["All", "Fired", {
        params ["_unit", "", "", "", "", "", "_projectile"];

        deleteVehicle _projectile;
        ["ace_captives_setHandcuffed", [_unit, true], [_unit]] call CBA_fnc_targetEvent;
    }] call CBA_fnc_addClassEventHandler;

    [{
        "FAIL" call EFUNC(logging,endMission);
    }, [], 8] call CBA_fnc_waitAndExecute;
};

if (hasInterface) then {
    player setVariable ["tf_unable_to_use_radio", false];
    call TFAR_fnc_onSwTangentReleased;
    call TFAR_fnc_onLRTangentReleased;

    [] spawn {
        playMusic "BackgroundTrack03_F_EPC";
        sleep 2;
        [localize LSTRING(statsMissionFail), 1, 0.8] spawn BIS_fnc_dynamicText;
        sleep 1;
        [
            [format [localize LSTRING(statsPlayers), playersNumber playerSide], 1, 2],
            [format [localize LSTRING(statsMinutes), floor (time / 60)], 1, 2]
        ] spawn BIS_fnc_EXP_camp_SITREP;
        sleep 2;
        2 fadeMusic 0;
    };
};
