#include "script_component.hpp"

params ["_logic"];

if (isServer) then {
	publicVariable QGVAR(shotsFired);
	publicVariable QGVAR(aiKilled);
	[{
		publicVariable QGVAR(pulseChecked);
		publicVariable QGVAR(bandagesApplied);
		publicVariable QGVAR(cprPerformed);
		publicVariable QGVAR(fragsOut);
	}, [], 8] call CBA_fnc_waitAndExecute;
} else {
	[GVAR(bandagesApplied), GVAR(pulseChecked), GVAR(cprPerformed), GVAR(fragsOut)] remoteExec [QFUNC(addStatisticValues), 2, false];
};

[] spawn {
	playMusic "LeadTrack01_F_Tank";
	sleep 2;
	["<t color='#00ff00'>Mission erfolgreich</t>", 1, 0.8] spawn BIS_fnc_dynamicText;
	sleep 3;
	[
		[(format ["%1 Spieler", playersNumber playerSide]), 1, 2],
		[(format ["%1min im Kampf", floor (time / 60)]), 1, 3]
	] spawn BIS_fnc_EXP_camp_SITREP;
	sleep 5;
	[
		[format ["%1 Kugeln abgegeben", GVAR(shotsFired)], 1, 2],
		[format ["%1 Granaten geworfen", GVAR(fragsOut)], 1, 2],
		[format ["%1 Feinde bekämpft", GVAR(aiKilled)], 1, 3]
	] spawn BIS_fnc_EXP_camp_SITREP;
	sleep 5;
	[
		[format ["%1 mal Puls gemessen", GVAR(pulseChecked)], 1, 2],
		[format ["%1 Bandagen angelegt", GVAR(bandagesApplied)], 1, 2],
		[format ["%1 mal CPR durchgeführt", GVAR(cprPerformed)], 1, 3]
	] spawn BIS_fnc_EXP_camp_SITREP;
	sleep 5;
	5 fadeMusic 0;
};

if !(local _logic) exitWith {};

[{
	["WIN"] remoteExec [QEFUNC(logging,endMission), 2];
}, [], 25] call CBA_fnc_waitAndExecute;
