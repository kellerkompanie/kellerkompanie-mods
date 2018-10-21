/////////////////////////////////////////////////////////////////////////////
/*	ADDON: =VQI= F.R.O.G.S			BY: R.Von Quest  aka the "Goblin"
	------------------------------------------------------------------------
	DEPT.: Von Quest Industries		STATUS: WORK-IN-PROGRESS
	PROJECT: Combat Diver			SERIES: SPOOKWARCOM
	DEV VER: v0.2.2				LAUNCH: 01.JUNE.2016
	------------------------------------------------------------------------
	CREATOR: R. Von Quest - aka the "Goblin"
	CREDITS: n/a
	------------------------------------------------------------------------
	NOTES: 
	
	------------------------------------------------------------------------
	F.R.O.G.S - Frogmen, ReBreathers, Operations, Gear, and Submarines
*/
/////////////////////////////////////////////////////////////////////////////
sleep 20;


if (isServer) then  {
	
	// Start System
	//execVM "vqi_frogs\VQI-CombatDiver\SeaStart\vqi_frogs_seastart_hmsproteus.sqf";	// old
	execVM "vqi_frogs\VQI-CombatDiver\SeaStart\start_hms_proteus.sqf";				// new
	sleep 10;
	
	// AO
	execVM "vqi_frogs\VQI-CombatDiver\AO\vqi_frogs_ao.sqf";
};




//////////////////
/* NOTES:



*/