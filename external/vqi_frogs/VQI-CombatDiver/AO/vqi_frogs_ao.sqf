// Start F.R.O.G.S Area-of-Operation System
//

if (!isServer) exitWith {};
sleep 1;

// Mod check...
if (!isNil "aoSCAR") then { waitUntil { sleep 2; !isNil "scar_ao_done"}; };
if (!isNil "aoLEAP") then { waitUntil { sleep 2; !isNil "leap_ao_done"}; };




//openMap true;
hint "- INTEL REPORT - \n Decrypting F.R.O.G.S Feed \n \n - Stand By -";
sleep 10;

// Areas-of-Operation
execVM "vqi_frogs\VQI-CombatDiver\AO\nav\vqi_frogs_ao_nav_setup.sqf"; waitUntil { sleep 2; !isNil "ao_nav_done"};
execVM "vqi_frogs\VQI-CombatDiver\AO\sub\vqi_frogs_ao_sub_setup.sqf"; waitUntil { sleep 2; !isNil "ao_sub_done"};





sleep 1;
frogs_ao_done = true;

////////////////////
/* NOTES:



*/