/*
 * Original author: [SeL] Sinus
 */
#include "script_component.hpp"

params [
	["_bandages", 0, [0]],
	["_pulse", 0, [0]],
	["_cpr", 0, [0]],
	["_frags", 0, [0]]
];

GVAR(bandagesApplied) 	= GVAR(bandagesApplied) + _bandages;
GVAR(pulseChecked) 		= GVAR(pulseChecked) + _pulse;
GVAR(cprPerformed) 		= GVAR(cprPerformed) + _cpr;
GVAR(fragsOut) 			= GVAR(fragsOut) + _frags;
