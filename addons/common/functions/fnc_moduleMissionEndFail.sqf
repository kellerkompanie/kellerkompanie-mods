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

 if (isServer) then {
     ["All", "Fired", {
         params ["_unit", "", "", "", "", "", "_projectile"];

         deleteVehicle _projectile;
         ["ace_captives_setHandcuffed", [_unit, true], [_unit]] call CBA_fnc_targetEvent;
     }] call CBA_fnc_addClassEventHandler;

     publicVariable QGVAR(aiKilled);
     publicVariable QGVAR(peoplePunched);
     publicVariable QGVAR(civsKilled);
     publicVariable QGVAR(corpsesHidden);
     publicVariable QGVAR(windowsBroken);
     [{
         publicVariable QGVAR(pulseChecked);
         publicVariable QGVAR(bandagesApplied);
         publicVariable QGVAR(cprPerformed);
         publicVariable QGVAR(fragsOut);
         publicVariable QGVAR(shotsFired);
     }, [], 8] call CBA_fnc_waitAndExecute;
 } else {
     [GVAR(bandagesApplied), GVAR(pulseChecked), GVAR(cprPerformed), GVAR(fragsOut), GVAR(shotsFired)] remoteExec [QFUNC(addStatisticValues), 2, false];
 };

 if (hasInterface) then {
     [] spawn {
         playMusic "BackgroundTrack03_F_EPC";
         sleep 2;
         [localize LSTRING(statsMissionFail), 1, 0.8] spawn BIS_fnc_dynamicText;
         (localize LSTRING(statsKills)) hintC parseText GVAR(outputText);
         sleep 3;
         [
             [format [localize LSTRING(statsPlayers), playersNumber playerSide], 1, 2],
             [format [localize LSTRING(statsMinutes), floor (time / 60)], 1, 2]
         ] spawn BIS_fnc_EXP_camp_SITREP;
         sleep 5;
         [
             [format [localize LSTRING(statsBullets), GVAR(shotsFired)], 1, 2],
             [format [localize LSTRING(statsGrenades), GVAR(fragsOut)], 1, 2],
             [format [localize LSTRING(statsEnemies), GVAR(aiKilled)], 1, 2]
         ] spawn BIS_fnc_EXP_camp_SITREP;
         sleep 5;
         [
             [format [localize LSTRING(statsPunches), GVAR(peoplePunched)], 1, 2],
             [format [localize LSTRING(statsCivilians), GVAR(civsKilled)], 1, 2],
             [format [localize LSTRING(statsHidden), GVAR(corpsesHidden)], 1, 2],
             [format [localize LSTRING(statsWindows), GVAR(windowsBroken)], 1, 2]
         ] spawn BIS_fnc_EXP_camp_SITREP;
         sleep 5;
         [
             [format [localize LSTRING(statsPulse), GVAR(pulseChecked)], 1, 2],
             [format [localize LSTRING(statsBandages), GVAR(bandagesApplied)], 1, 2],
             [format [localize LSTRING(statsCPR), GVAR(cprPerformed)], 1, 2]
         ] spawn BIS_fnc_EXP_camp_SITREP;
         sleep 5;
         5 fadeMusic 0;
     };
 };

 if (isServer) then {
     [{
         "FAIL" call EFUNC(logging,endMission);
     }, [], 30] call CBA_fnc_waitAndExecute;
 };
