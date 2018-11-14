#include "script_component.hpp"

if (isServer) then {
	publicVariable QGVAR(aiKilled);
	publicVariable QGVAR(peoplePunched);
	publicVariable QGVAR(civsKilled);
	publicVariable QGVAR(corpsesHidden);
	[{
		publicVariable QGVAR(pulseChecked);
		publicVariable QGVAR(bandagesApplied);
		publicVariable QGVAR(cprPerformed);
		publicVariable QGVAR(fragsOut);
		publicVariable QGVAR(shotsFired);
	}, [], 8] call CBA_fnc_waitAndExecute;
} else {
	disableUserInput true;
	[GVAR(bandagesApplied), GVAR(pulseChecked), GVAR(cprPerformed), GVAR(fragsOut), GVAR(shotsFired)] remoteExec [QFUNC(addStatisticValues), 2, false];
};

if (hasInterface) then {
	[] spawn {
		playMusic "LeadTrack01_F_Tank";
		sleep 2;
		["<t color='#00ff00'>Mission erfolgreich</t>", 1, 0.8] spawn BIS_fnc_dynamicText;
		sleep 3;
		[
			[(format ["%1 Spieler", playersNumber playerSide]), 1, 2],
			[(format ["%1 min im Kampf", floor (time / 60)]), 1, 2]
		] spawn BIS_fnc_EXP_camp_SITREP;
		sleep 5;
		[
			[format ["%1 Kugeln abgegeben", GVAR(shotsFired)], 1, 2],
			[format ["%1 Granaten geworfen", GVAR(fragsOut)], 1, 2],
			[format ["%1 Feinde bekämpft", GVAR(aiKilled)], 1, 2]
		] spawn BIS_fnc_EXP_camp_SITREP;
		sleep 5;
		[
			[format ["%1 Leute geschlagen", GVAR(peoplePunched)], 1, 2],
			[format ["%1 Zivilisten gemeuchelt", GVAR(civsKilled)], 1, 2],
			[format ["%1 Leichen versteckt", GVAR(corpsesHidden)], 1, 2]
		] spawn BIS_fnc_EXP_camp_SITREP;
		sleep 5;
		[
			[format ["%1 mal Puls gemessen", GVAR(pulseChecked)], 1, 2],
			[format ["%1 Bandagen angelegt", GVAR(bandagesApplied)], 1, 2],
			[format ["%1 mal CPR durchgeführt", GVAR(cprPerformed)], 1, 2]
		] spawn BIS_fnc_EXP_camp_SITREP;
		sleep 5;
		5 fadeMusic 0;
	};
};

if (isServer) then {
	[{
		"WIN" call EFUNC(logging,endMission);
	}, [], 30] call CBA_fnc_waitAndExecute;
};
