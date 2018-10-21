//Flood the Lockout-Chamber!
//



hint "Stand By...";
sleep 1;

if ((HMSProteusLOC animationPhase 'AnimateLOCdoor1') == 0) then {
	sleep 1;
	
	
	HMSProteusVal enableSimulation true;
	HMSProteusVal setMass [3500,30];
	
	LIGHTLOC2 = "chemlight_red" createVehicle (position player);
	LIGHTLOC2 attachTo [LOCFLOOD,[0,0,0]];
	
	[LOCFLOOD,"VQI_Sound_Ahoooga"] call CBA_fnc_globalSay3d;
	[LOCFLOOD,"VQI_Sound_LOC_Flood"] call CBA_fnc_globalSay3d; 
	sleep 20;
	
	
	//execVM "vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_bubbles_int.sqf";
	{ execVM "vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_bubbles_int.sqf"; } remoteExec ["bis_fnc_call", 0]; // MP?
	
	
	[LOCFLOOD,"VQI_Sound_LOC_System_Creek"] call CBA_fnc_globalSay3d;
	//hint "* * * ears popping * * *";
	"* * * ears popping * * *" remoteExec ["hint"];
	
	sleep 20;
	HMSProteusVal enableSimulation false;
	//{ LOCFLOOD addAction ["Open Hatch: Disembark","vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_disembark_sub.sqf"]; } remoteExec ["bis_fnc_call",0];
	[[LOCFLOOD, ["Open Hatch: Disembark", "execVM 'vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_disembark_sub.sqf'; [LOCLAPTOP2, 4]"]], "addAction", true, true] call BIS_fnc_MP;
	[[LOCFLOOD, ["--------------------", "hint ' '; [LOCLAPTOP2, 5]"]], "addAction", true, true] call BIS_fnc_MP;
	
	
	
	
	removeAllActions LOCLAPTOP2; sleep 1;
	[[LOCLAPTOP2, ["--------------------", "hint ' '; [LOCLAPTOP2, 0]"]], "addAction", true, true] call BIS_fnc_MP;
	[[LOCLAPTOP2, ["PLOT COURSE -- HMS PROTEUS", "execVM 'vqi_frogs\VQI-CombatDiver\Navigation\Nav\nav_start.sqf'; [LOCLAPTOP2, 1]"]], "addAction", true, true] call BIS_fnc_MP;
	[[LOCLAPTOP2, ["--------------------", "hint ' '; [LOCLAPTOP2, 2]"]], "addAction", true, true] call BIS_fnc_MP;
	//[[LOCLAPTOP2, ["Sub/Ops Desk: Disembark", "execVM 'vqi_frogs\VQI-CombatDiver\Transport\vqi_frogs_opsdesk_return.sqf'; [LOCLAPTOP2, 2]"]], "addAction", true, true] call BIS_fnc_MP;


	[[LOCLAPTOP2, ["INTEL - AO: SUBMARINES", "execVM 'vqi_frogs\VQI-CombatDiver\AO\Sub\vqi_frogs_ao_sub_mkrs_intel.sqf'; [LOCLAPTOP2, 3]"]], "addAction", true, true] call BIS_fnc_MP;
	[[LOCLAPTOP2, ["INTEL - AO: NAVAL OPs", "execVM 'vqi_frogs\VQI-CombatDiver\AO\Nav\vqi_frogs_ao_nav_mkrs_intel.sqf'; [LOCLAPTOP2, 4]"]], "addAction", true, true] call BIS_fnc_MP;
	[[LOCLAPTOP2, ["INTEL - AO: WATER MINES", "execVM 'vqi_fuse\VQI-EOD\AO\watermines\vqi_fuse_ao_watermine_mkrs_intel.sqf'; [LOCLAPTOP2, 5]"]], "addAction", true, true] call BIS_fnc_MP;
	[[LOCLAPTOP2, ["INTEL - AO: SURF MINES", "execVM 'vqi_fuse\VQI-EOD\AO\surfzones\vqi_fuse_ao_surfzone_mkrs_intel.sqf'; [LOCLAPTOP2, 6]"]], "addAction", true, true] call BIS_fnc_MP;
	[[LOCLAPTOP2, ["--------------------", "hint ' '; [LOCLAPTOP2, 7]"]], "addAction", true, true] call BIS_fnc_MP;

} else {
	hint "ERROR: LOC Door Unsecured";
};



///////////////
/* NOTES:




*/