// Master Initialization File
//
waitUntil {sleep 1; !isNil "bis_fnc_init"};


// Vanity Tag ----------------------------------------------------------------------------------
if (VQI_FROGS_HINTS == 1) then {
hint "Von Quest Industries Presents: \n F.R.O.G.S v0.3 \n by: R. Von Quest aka 'Goblin'"; };
//----------------------------------------------------------------------------------------------
sleep 5;




// Functions, EventHandlers, Variables, Equipment
execVM "vqi_frogs\VQI-CombatDiver\vqi_frogs_functions.sqf";

//User Custom KeyBinding ----> set config?
execVM "vqi_frogs\XEH_postClientInit.sqf";

// Combat Diver System
execVM "vqi_frogs\VQI-CombatDiver\vqi_frogs.sqf";


/////////////////////////////////////////////////
/* NOTES:



*/