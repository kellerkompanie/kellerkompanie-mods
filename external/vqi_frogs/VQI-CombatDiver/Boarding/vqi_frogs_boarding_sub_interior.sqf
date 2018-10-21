// Transport _unit INTERIOR Submarine - Inside ReadyRoom
// SubPlotted == true



private ["_unit","_lightLOC","_submarineTravel"];

_unit = _this select 0;



if (true) then {	// SubPlotted

	_submarineTravel = 0;	// Submarine Travel Time
	if (VQI_FROGS_SUB_TravelTime == 1) then { _submarineTravel = 1; 				if (isServer) then {skipTime _submarineTravel}; };	// 1hr
	if (VQI_FROGS_SUB_TravelTime == 2) then { _submarineTravel = 1 + (random 2);	if (isServer) then {skipTime _submarineTravel}; };	// 1-3hrs
	if (VQI_FROGS_SUB_TravelTime == 3) then { _submarineTravel = 2 + (random 4);	if (isServer) then {skipTime _submarineTravel}; };	// 2-6hrs
	if (VQI_FROGS_SUB_TravelTime == 4) then { _submarineTravel = 3 + (random 6);	if (isServer) then {skipTime _submarineTravel}; };	// 3-9hrs
	if (VQI_FROGS_SUB_TravelTime == 5) then { _submarineTravel = 4 + (random 8);	if (isServer) then {skipTime _submarineTravel}; };	// 4-12hrs
	if (VQI_FROGS_SUB_TravelTime == 6) then { _submarineTravel = 3; 				if (isServer) then {skipTime _submarineTravel}; };	// 3hrs
	if (VQI_FROGS_SUB_TravelTime == 7) then { _submarineTravel = 6; 				if (isServer) then {skipTime _submarineTravel}; };	// 6hrs
	if (VQI_FROGS_SUB_TravelTime == 8) then { _submarineTravel = 12; 				if (isServer) then {skipTime _submarineTravel}; };	// 12hrs




	//999 cutRsc ["SUB_HMSPROTEUS_1", "PLAIN"];
	cutText ["", "BLACK IN", 10];
	playSound "VQI_Sound_SonarPingAtmo";
	
	// Camera
	execVM "vqi_frogs\VQI-CombatDiver\Boarding\vqi_frogs_boarding_sub_camera.sqf";
	
	// Text
	//execVM "vqi_frogs\VQI-CombatDiver\Boarding\vqi_frogs_boarding_sub_text.sqf";
	sleep 1;
	
	
	
	
	
	
	
	
	_unit attachTo [HMSProteusLOC,[3,-2, 0.5]];
	_unit allowDamage false;
	sleep 1; 
	detach _unit;
	//cutText ["", "BLACK IN", 10];
	
	_lightLOC = "Chemlight_red" createVehicle (position _unit);
	_lightLOC attachTo [HMSProteusLOC,[0, 0, 4]];
	
	//sound
	execVM "vqi_frogs\VQI-CombatDiver\Sounds\vqi_sound_subint.sqf";
	sleep 30;
	
	
	
	
	systemChat "Welcome aboard, Frogman!"; sleep 2;
	systemChat "We are approching the final cordinates..."; sleep 10;
	
	
	systemChat "At your discretion, select the last WayPoints."; sleep 2;
	systemChat "If we get Pinged, we will shut her down."; sleep 2;
	systemChat "More instructions may follow later if needed."; sleep 5;
	
	systemChat "Battle Stations! Approach Speed set to 6 kph..."; sleep 2;
	systemChat "You now have Navigational Command. Good Luck!"; sleep 5;
	
	hint "Log into the Laptop \n \n 
		 Select: PLOT COURSE \n \n \n \n
		 - WARNING - \n
		 You should run Intel Reports before plotting a course into Enemy Waters. Naval AOs are okay, but we need to AVOID Enemy Submarines at all costs!
	"; sleep 10;

} else {
	hint "HMS Proteus NOT in Position. \n Must Plot Approved Course.";
};





//////////////////////
/* NOTES:



*/