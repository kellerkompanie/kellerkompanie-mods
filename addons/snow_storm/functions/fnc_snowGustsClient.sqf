#include "script_component.hpp"

if (!hasInterface) exitWith {};

params ["_unit_cold"];

GVAR(player_act_cold) = _unit_cold;

while {GVAR(stormActive)} do {
	if ((GVAR(pos_p) == "open") && (player == GVAR(hunt_alias))) then {
		GVAR(rafala) = true; 
		publicVariable QGVAR(rafala);
		_pozitie_x = (selectrandom [1,-1])*round(random 50); 
		_pozitie_y = (selectrandom [1,-1])*round(random 50);
		[[_pozitie_x,_pozitie_y], QFUNC(playerTremble)] remoteExec ["spawn",0];
		sleep (GVAR(snow_gust)#1);
		GVAR(rafala) = false; 
		publicVariable QGVAR(rafala);
	};
	sleep 20 + random GVAR(interval_burst);
};