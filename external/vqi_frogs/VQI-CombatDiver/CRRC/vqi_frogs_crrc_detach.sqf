// Detach the Zodiac Craft
//

private ["_mass"];

NOZZLE = "Land_MetalWire_F" createVehicle (position HMSProteus);
NOZZLE attachTo [HMSProteus,[0, 5, 3]]; sleep 1;

{ execVM "vqi_frogs\VQI-CombatDiver\CRRC\vqi_frogs_crrc_bubbles.sqf"; } remoteExec ["bis_fnc_call", 0]; // MP?


_mass = getMass CRRC;
sleep 1;

detach CRRC; 
CRRC setMass [1625, 0.1]; 
sleep 1;

CRRC setMass [_mass, 15];
sleep 3;

deleteVehicle NOZZLE;

sleep 20;
CRRC allowDamage true;
//CRRC setVectorUp [0,0,1];




///////////////////////
/* NOTES:



*/