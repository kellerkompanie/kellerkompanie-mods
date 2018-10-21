// Start HMS Proteus & LOC Systems
//
if (VQI_FROGS_HINTS == 1) then { hint "seastart_hmsproteus.sqf"; };
sleep 1;


private ["_subStart","_sdvStart","_ddsStart"];

_subStart = [111, 0, 0];
_sdvStart = [222, 0, 0];
_ddsStart = [333, 0, 0];


if (VQI_FROGS_LOC == 1) then {
	// protoType x valve test (placeholder)
	HMSProteusVal = "B_SDV_01_F" createVehicle _ddsStart;
	HMSProteusVal allowDamage false;
	HMSProteusVal setPosASL [position HMSProteusVal select 0, position HMSProteusVal select 1, -5];
	publicVariable "HMSProteusVal";
	
	sleep 1;

	// Lockout Chamber
	HMSProteusLOC = "VQI_DDS_LockoutChamber" createVehicle _ddsStart;
	HMSProteusLOC allowDamage false;
	HMSProteusLOC attachTo [HMSProteusVal,[0,0,5]]; 
	HMSProteusLOC setVectorUp [0,0,1];
	publicVariable "HMSProteusLOC";
};

// HMS Proteus Submarine
HMSProteus = "Submarine_01_F" createVehicle _subStart;
HMSProteus allowDamage false;
publicVariable "HMSProteus";




sleep 1;




// SDV-1 & SDV-2 (back of HMS Proteus)
VQISDV1 = "B_SDV_01_F" createVehicle _sdvStart;
VQISDV1 allowDamage false;
VQISDV1 attachTo [HMSProteus,[ 1.21,-2, 5]];
publicVariable "VQISDV1";
sleep 1;

VQISDV2 = "B_SDV_01_F" createVehicle _sdvStart;
VQISDV2 allowDamage false;
VQISDV2 attachTo [HMSProteus,[-1.22,-2, 5]];
publicVariable "VQISDV2";
sleep 1;

VQISDV1 setDir 180; 
VQISDV2 setDir 180; 
VQISDV1 setVectorUp [0,-0.06, 1];
VQISDV2 setVectorUp [0,-0.06, 1];
VQISDV1 animate ["Periscope", 3];
VQISDV2 animate ["Periscope", 3];
VQISDV1 animate ["Antenna", 3];
VQISDV2 animate ["Antenna", 3];
///////////////////////////////
sleep 1;



// SDV/CRRC/Control Panel
SDVLOCK = "Land_CarBattery_02_F" createVehicle _subStart;
SDVLOCK attachTo [HMSProteus,[0.05,-4.35,3.1]];

if (VQI_FROGS_LOC == 1) then {
	// Upper Hatch Control
	LOCLOCK = "Land_MetalWire_F" createVehicle _subStart;
	LOCLOCK attachTo [HMSProteusLOC,[-4.3, -0.4, 3.0]];	// 3.8 hotfix

	// Flood/Drain Control
	LOCFLOOD = "Land_CarBattery_01_F" createVehicle _subStart;
	LOCFLOOD attachTo [HMSProteusLOC,[-2.75, -3.8, -1.28]];

	// Bubbles Source Ref Location
	LOCFLOOR = "Land_MetalWire_F" createVehicle _subStart;
	LOCFLOOR attachTo [HMSProteusLOC,[-4.3, -0.4, -10]];
	publicVariable "LOCFLOOR";
};

// Sub Rear/Outer Hatch Controls
LOCENTER = "Land_MetalWire_F" createVehicle _subStart;
LOCENTER attachTo [HMSProteus,[0.05, 17, 3.83]];
publicVariable "LOCENTER";



sleep 60; // delay for CORE Ops Centre (hotfix)


VQI_FROGS_CONVERTOBJECT = VQI_FROGS_MAPOBJECT; // drop, not needed?
VQI_FROGS_MENUOBJECT = missionNamespace getVariable [VQI_FROGS_CONVERTOBJECT, objNull];

// Object X Menu Options
[[VQI_FROGS_MENUOBJECT, ["HMS Proteus: Request Submarine - Surface", "execVM 'vqi_frogs\VQI-CombatDiver\Transport\vqi_frogs_transport_sub_surface.sqf'; [VQI_FROGS_MENUOBJECT, 1]"]], "addAction", true, true] call BIS_fnc_MP;
[[VQI_FROGS_MENUOBJECT, ["HMS Proteus: Request Submarine - Shallow", "execVM 'vqi_frogs\VQI-CombatDiver\Transport\vqi_frogs_transport_sub_shallow.sqf'; [VQI_FROGS_MENUOBJECT, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[VQI_FROGS_MENUOBJECT, ["HMS Proteus: Request Submarine - Deepest", "execVM 'vqi_frogs\VQI-CombatDiver\Transport\vqi_frogs_transport_sub_deepest.sqf'; [VQI_FROGS_MENUOBJECT, 3]"]], "addAction", true, true] call BIS_fnc_MP;

if (VQI_FROGS_BOARDING == 1) then {
	[[VQI_FROGS_MENUOBJECT, ["HMS Proteus: Board Submarine", "execVM 'vqi_frogs\VQI-CombatDiver\Boarding\vqi_frogs_boarding.sqf'; [VQI_FROGS_MENUOBJECT, 4]"]], "addAction", true, true] call BIS_fnc_MP;
};
// Boarding from Sub Exterior ONLY
if (VQI_FROGS_BOARDING == 0) then {
	[[HMSPROTEUS, ["HMS Proteus: Board Submarine", "execVM 'vqi_frogs\VQI-CombatDiver\Boarding\vqi_frogs_boarding_sub_interior.sqf'; [HMSPROTEUS, 1]"]], "addAction", true, true] call BIS_fnc_MP;
};
sleep 10;



// Exterior of Sub (SDV/Controls)
{ SDVLOCK addAction ["SDV L: Disengage Lock","vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_l_detach.sqf"]; } remoteExecCall ["bis_fnc_call",0];
{ SDVLOCK addAction ["SDV L: Re-Engage Lock","vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_l_attach.sqf"]; } remoteExecCall ["bis_fnc_call",0];
{ SDVLOCK addAction ["-"," "]; } remoteExecCall ["bis_fnc_call",0];
{ SDVLOCK addAction ["SDV R: Disengage Lock","vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_r_detach.sqf"]; } remoteExecCall ["bis_fnc_call",0];
{ SDVLOCK addAction ["SDV R: Re-Engage Lock","vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_r_attach.sqf"]; } remoteExecCall ["bis_fnc_call",0];
{ SDVLOCK addAction ["----------------"," "]; } remoteExecCall ["bis_fnc_call",0];
{ SDVLOCK addAction ["CRRC: Inflate Zodiac","vqi_frogs\VQI-CombatDiver\CRRC\vqi_frogs_crrc_inflate.sqf"]; } remoteExecCall ["bis_fnc_call",0];
{ SDVLOCK addAction ["CRRC: Detach Zodiac","vqi_frogs\VQI-CombatDiver\CRRC\vqi_frogs_crrc_detach.sqf"]; } remoteExecCall ["bis_fnc_call",0];
{ SDVLOCK addAction ["----------------"," "]; } remoteExecCall ["bis_fnc_call",0];
{ SDVLOCK addAction ["Lighting: Ext.RED - LOW VIS","vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_red.sqf"]; } remoteExecCall ["bis_fnc_call",0];
{ SDVLOCK addAction ["Lighting: Ext.GRN - MED VIS","vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_grn.sqf"]; } remoteExecCall ["bis_fnc_call",0];
{ SDVLOCK addAction ["Lighting: Ext.BLU - HIGH VIS","vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_blu.sqf"]; } remoteExecCall ["bis_fnc_call",0];
{ SDVLOCK addAction ["Lighting: Ext.OFF - BLACKOUT","vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_off.sqf"]; } remoteExecCall ["bis_fnc_call",0];
sleep 1;



if (VQI_FROGS_LOC == 1) then {
	// Inside LOC (top hatch)
	{ LOCLOCK addAction ["Open Hatch: Disembark","vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_disembark_sub.sqf"]; } remoteExecCall ["bis_fnc_call",0];
	
	// Inside LOC (controls)
	{ LOCFLOOD addAction ["LOC System Valves: Flood Chamber","vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_flood.sqf"]; } remoteExecCall ["bis_fnc_call",0];
	{ LOCFLOOD addAction ["LOC System Valves: Drain Chamber","vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_drain.sqf"]; } remoteExecCall ["bis_fnc_call",0];
	
	// Exterior of Sub (Hatch)
	{ LOCENTER addAction ["LOC: Enter Submarine","vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_enter.sqf"]; } remoteExecCall ["bis_fnc_call",0];
	{ LOCENTER addAction ["LOC System Valves: Flood Chamber","vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_flood.sqf"]; } remoteExecCall ["bis_fnc_call",0];
};



if (VQI_FROGS_LOC == 0) then {
	// Exterior of Sub (Hatch)
	{ LOCENTER addAction ["Sub/Ops Desk: Return","vqi_frogs\VQI-CombatDiver\Transport\vqi_frogs_opsdesk_return.sqf"]; } remoteExecCall ["bis_fnc_call",0];
};




sleep 5;
VQISDV1 allowDamage true;
VQISDV2 allowDamage true;


// Build "Gear-Up" Room
execVM "vqi_frogs\VQI-CombatDiver\ReadyRoom\vqi_frogs_hmsproteus_readyroom.sqf";




sleep 1;
if (VQI_FROGS_HINTS == 1) then { hint "seastart_hmsproteus.sqf -END-"; };

///////////////////////////
/* NOTES:

{ TESTOBJ addAction ["Open Hatch: Disembark","vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_disembark_sub.sqf"]; } remoteExecCall ["bis_fnc_call",0];




// Exterior of Sub (SDV/Controls)
[[VQISDV1, ["SDV L: Disengage Lock", "execVM 'vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_l_detach.sqf'; [VQISDV1, 1]"]], "addAction", true, true] call BIS_fnc_MP;
[[VQISDV1, ["SDV L: Re-Engage Lock", "execVM 'vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_l_attach.sqf'; [VQISDV1, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[VQISDV2, ["SDV R: Disengage Lock", "execVM 'vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_r_detach.sqf'; [VQISDV2, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[VQISDV2, ["SDV R: Re-Engage Lock", "execVM 'vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_r_attach.sqf'; [VQISDV2, 4]"]], "addAction", true, true] call BIS_fnc_MP;
sleep 1;
[[VQISDV1, ["CRRC: Inflate Zodiac", "execVM 'vqi_frogs\VQI-CombatDiver\CRRC\vqi_frogs_crrc_inflate.sqf'; [VQISDV1, 5]"]], "addAction", true, true] call BIS_fnc_MP;
[[VQISDV1, ["CRRC: Detach Zodiac", "execVM 'vqi_frogs\VQI-CombatDiver\CRRC\vqi_frogs_crrc_detach.sqf'; [VQISDV1, 6]"]], "addAction", true, true] call BIS_fnc_MP;
sleep 1;
[[VQISDV1, ["Lighting: Ext.RED - LOW VIS", "execVM 'vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_red.sqf'; [VQISDV1, 7]"]], "addAction", true, true] call BIS_fnc_MP;
[[VQISDV1, ["Lighting: Ext.GRN - MED VIS", "execVM 'vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_grn.sqf'; [VQISDV1, 8]"]], "addAction", true, true] call BIS_fnc_MP;
[[VQISDV1, ["Lighting: Ext.BLU - HIGH VIS", "execVM 'vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_blu.sqf'; [VQISDV1, 9]"]], "addAction", true, true] call BIS_fnc_MP;
[[VQISDV1, ["Lighting: Ext.OFF - BLACKOUT", "execVM 'vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_off.sqf'; [VQISDV1, 10]"]], "addAction", true, true] call BIS_fnc_MP;
sleep 1;


if (VQI_FROGS_LOC == 1) then {
	// Inside LOC (top hatch)
	[[LOCLOCK, ["Open Hatch: Disembark", "execVM 'vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_disembark_sub.sqf'; [LOCLOCK, 1]"]], "addAction", true, true] call BIS_fnc_MP;

	// Inside LOC (controls)
	[[LOCFLOOD, ["LOC System Valves: Flood Chamber", "execVM 'vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_flood.sqf'; [LOCFLOOD, 1]"]], "addAction", true, true] call BIS_fnc_MP;
	[[LOCFLOOD, ["LOC System Valves: Drain Chamber", "execVM 'vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_drain.sqf'; [LOCFLOOD,2]"]], "addAction", true, true] call BIS_fnc_MP;
	[[LOCFLOOD, ["Lighting: Ext.RED - LOW VIS", "execVM 'vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_red.sqf'; [LOCFLOOD, 3]"]], "addAction", true, true] call BIS_fnc_MP;
	[[LOCFLOOD, ["Lighting: Ext.GRN - MED VIS", "execVM 'vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_grn.sqf'; [LOCFLOOD, 4]"]], "addAction", true, true] call BIS_fnc_MP;
	[[LOCFLOOD, ["Lighting: Ext.BLU - HIGH VIS", "execVM 'vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_blu.sqf'; [LOCFLOOD, 5]"]], "addAction", true, true] call BIS_fnc_MP;
	[[LOCFLOOD, ["Lighting: Ext.OFF - BLACKOUT", "execVM 'vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_off.sqf'; [LOCFLOOD, 6]"]], "addAction", true, true] call BIS_fnc_MP;
	sleep 1;

	// Exterior of Sub (Hatch)
	[[LOCENTER, ["LOC: Enter Submarine", "execVM 'vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_enter.sqf'; [LOCENTER, 1]"]], "addAction", true, true] call BIS_fnc_MP;
	[[LOCENTER, ["LOC System Valves: Flood Chamber", "execVM 'vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_flood.sqf'; [LOCENTER, 2]"]], "addAction", true, true] call BIS_fnc_MP;
};

if (VQI_FROGS_LOC == 0) then {
	// Exterior of Sub (Hatch)
	[[LOCENTER, ["Sub/Ops Desk: Return", "execVM 'vqi_frogs\VQI-CombatDiver\Transport\vqi_frogs_opsdesk_return.sqf'; [LOCENTER, 1]"]], "addAction", true, true] call BIS_fnc_MP;
};







[
	LOCLOCK,					// object
	"Open Hatch: Disembark",				// Menu Text
	"",						// Icon (idle)
	"",						// Icon (progress)
	"true",					// condition to show
	"true",					// condition progress
	{},						// 	Code (start)
	{},						// 	Code (per frame)
	{ 	execVM "vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_disembark_sub.sqf" },			// 	Code (completion)
	{},						// 	Code (interupt)
	[],						// args passed...
	5,						// Duration
	0,						// Priority
	false,					// remove on completion
	false					// show if unconscious
] remoteExec ["BIS_fnc_holdActionAdd",0,LOCLOCK];			// MP
//] call BIS_fnc_holdActionAdd;							// SP

[
	SDVLOCK,					// object
	"CRRC: Deploy Zodiac",				// Menu Text
	"",						// Icon (idle)
	"",						// Icon (progress)
	"true",					// condition to show
	"true",					// condition progress
	{},						// 	Code (start)
	{},						// 	Code (per frame)
	{ 	execVM "vqi_frogs\VQI-CombatDiver\CRRC\vqi_frogs_crrc_inflate.sqf"; sleep 3; 
		execVM "vqi_frogs\VQI-CombatDiver\CRRC\vqi_frogs_crrc_detach.sqf" },			// 	Code (completion)
	{},						// 	Code (interupt)
	[],						// args passed...
	5,						// Duration
	0,						// Priority
	false,					// remove on completion
	false					// show if unconscious
] remoteExec ["BIS_fnc_holdActionAdd",0,SDVLOCK];			// MP
//] call BIS_fnc_holdActionAdd;							// SP




*/