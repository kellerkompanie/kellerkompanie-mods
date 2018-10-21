// Drain the Submarine Lockout Chamber!
//


HMSProteusVal enableSimulation true;
sleep 2;

HMSProteusVal setMass [1000,30]; sleep 1;
HMSProteusVal setVelocity [0,0,3];

[LOCFLOOD,"VQI_Sound_Buzzer"] call CBA_fnc_globalSay3d;
execVM "vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_bubbles_int.sqf";
sleep 15;

[LOCFLOOD,"VQI_Sound_LOC_Drain"] call CBA_fnc_globalSay3d;
sleep 15;

[LOCFLOOD,"VQI_Sound_LOC_System_Creek"] call CBA_fnc_globalSay3d;
HMSProteusVal enableSimulation false;



sleep 5;
HMSProteusVal enableSimulation true;
HMSProteusVal setMass [2500,10];






sleep 60;
HMSProteusLOC animate ["AnimateLOCdoor1", 0];
sleep 5;
HMSProteusVal enableSimulation false;

/////////////////////////////
/* NOTES:


*/