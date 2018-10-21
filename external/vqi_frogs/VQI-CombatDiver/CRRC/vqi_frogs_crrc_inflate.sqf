// Inflate the Zodiac Craft
// 



NOZZLE = "Land_MetalWire_F" createVehicle (position HMSProteus);
NOZZLE attachTo [HMSProteus,[0, 5, 3]];
publicVariable "NOZZLE";


{ execVM "vqi_frogs\VQI-CombatDiver\CRRC\vqi_frogs_crrc_bubbles.sqf"; } remoteExec ["bis_fnc_call", 0]; // MP?
sleep 3;


CRRC = "B_Boat_Transport_01_F" createVehicle (position HMSProteus);
CRRC attachTo [HMSProteus,[0, 5, 4.8]];
CRRC allowDamage false;
publicVariable "CRRC";



sleep 1;
//_mass = getMass CRRC;
//hint format ["CRRC: %1",_mass];

////////////////////////
/* NOTES:




*/