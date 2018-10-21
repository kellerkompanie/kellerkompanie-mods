//
//



_start0 = [200,200,0];

// SDV/CRRC/Control Panel
SDVLOCK = "Land_CarBattery_02_F" createVehicle _start0;
SDVLOCK attachTo [HMSProteus,[0.05,-4.35,3.2]];
publicVariable "SDVLOCK";

// Upper Hatch Control
LOCLOCK = "Land_CarBattery_01_F" createVehicle _start0;
LOCLOCK attachTo [HMSProteusLOC,[-4.3, -0.4, 3.5]];	// 3.8
publicVariable "LOCLOCK";

// Flood/Drain Control
LOCFLOOD = "Land_CarBattery_01_F" createVehicle _start0;
LOCFLOOD attachTo [HMSProteusLOC,[-2.75, -3.8, -1.28]];
publicVariable "LOCFLOOD";

// Bubbles Source Ref Location
LOCFLOOR = "Land_MetalWire_F" createVehicle _start0;
LOCFLOOR attachTo [HMSProteusLOC,[-4.3, -0.4, -10]];
publicVariable "LOCFLOOR";

// Sub Rear/Outer Hatch Controls
LOCENTER = "Land_CarBattery_02_F" createVehicle _start0;
LOCENTER attachTo [HMSProteus,[0.05, 17, 3.83]];
publicVariable "LOCENTER";
sleep 1;





// Exterior of Sub (SDV/Controls)
{ SDVLOCK addAction ["----------------"," "]; } remoteExec ["bis_fnc_call",0];
{ SDVLOCK addAction ["SDV L: Disengage Lock","vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_l_detach.sqf"]; } remoteExec ["bis_fnc_call",0];
{ SDVLOCK addAction ["SDV L: Re-Engage Lock","vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_l_attach.sqf"]; } remoteExec ["bis_fnc_call",0];
{ SDVLOCK addAction ["-"," "]; } remoteExec ["bis_fnc_call",0];
{ SDVLOCK addAction ["SDV R: Disengage Lock","vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_r_detach.sqf"]; } remoteExec ["bis_fnc_call",0];
{ SDVLOCK addAction ["SDV R: Re-Engage Lock","vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_r_attach.sqf"]; } remoteExec ["bis_fnc_call",0];
{ SDVLOCK addAction ["----------------"," "]; } remoteExec ["bis_fnc_call",0];
{ SDVLOCK addAction ["CRRC: Inflate Zodiac","vqi_frogs\VQI-CombatDiver\CRRC\vqi_frogs_crrc_inflate.sqf"]; } remoteExec ["bis_fnc_call",0];
{ SDVLOCK addAction ["CRRC: Detach Zodiac","vqi_frogs\VQI-CombatDiver\CRRC\vqi_frogs_crrc_detach.sqf"]; } remoteExec ["bis_fnc_call",0];
{ SDVLOCK addAction ["----------------"," "]; } remoteExec ["bis_fnc_call",0];
{ SDVLOCK addAction ["Lighting: Ext.RED - LOW VIS","vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_red.sqf"]; } remoteExec ["bis_fnc_call",0];
{ SDVLOCK addAction ["Lighting: Ext.GRN - MED VIS","vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_grn.sqf"]; } remoteExec ["bis_fnc_call",0];
{ SDVLOCK addAction ["Lighting: Ext.BLU - HIGH VIS","vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_blu.sqf"]; } remoteExec ["bis_fnc_call",0];
{ SDVLOCK addAction ["Lighting: Ext.OFF - BLACKOUT","vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_off.sqf"]; } remoteExec ["bis_fnc_call",0];
{ SDVLOCK addAction ["----------------"," "]; } remoteExec ["bis_fnc_call",0];
sleep 1;
/*
LOCFLOOD addAction ["Collect Burnt Research", {
	execVM "vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_disembark_sub.sqf";
}, nil, 1.5, true, true, "", "_this distance _target < 3"];
sleep 1;
*/

// Inside LOC (top hatch)
{ LOCLOCK addAction ["----------------"," "]; } remoteExec ["bis_fnc_call",0];
{ LOCLOCK addAction ["Open Hatch: Disembark","vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_disembark_sub.sqf"]; } remoteExec ["bis_fnc_call",0];
{ LOCLOCK addAction ["----------------"," "]; } remoteExec ["bis_fnc_call",0];
// Inside LOC (controls)
{ LOCFLOOD addAction ["----------------"," "]; } remoteExec ["bis_fnc_call",0];
{ LOCFLOOD addAction ["LOC System Valves: Flood Chamber","vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_flood.sqf"]; } remoteExec ["bis_fnc_call",0];
{ LOCFLOOD addAction ["LOC System Valves: Drain Chamber","vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_drain.sqf"]; } remoteExec ["bis_fnc_call",0];
{ LOCFLOOD addAction ["----------------"," "]; } remoteExec ["bis_fnc_call",0];
// Exterior of Sub (Hatch)
{ LOCENTER addAction ["----------------"," "]; } remoteExec ["bis_fnc_call",0];
{ LOCENTER addAction ["LOC: Enter Submarine","vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_enter.sqf"]; } remoteExec ["bis_fnc_call",0];
{ LOCENTER addAction ["LOC: System Valves - Flood Chamber","vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_flood.sqf"]; } remoteExec ["bis_fnc_call",0];
{ LOCENTER addAction ["----------------"," "]; } remoteExec ["bis_fnc_call",0];
sleep 1;



////////////////////
/* NOTES:



*/