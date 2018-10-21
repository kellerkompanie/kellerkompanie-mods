// Transport Player EXT Submarine - Outside LockoutChamber
//


if (SubPlotted) then {

	cutText ["", "BLACK FADED", 999];
	
	
	sleep 1;
	execVM "vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_bubbles_ext.sqf";
	execVM "vqi_frogs\VQI-CombatDiver\Sounds\vqi_sound_subext.sqf";
	

	playSound "VQI_SOUND_LOC_EnterExit";
	sleep 3;
	playSound "VQI_SOUND_SonarPingsAmb";

	// Front by SDVs
	SDVLIGHT1 = "chemlight_red" createVehicle (position HMSProteus);
	SDVLIGHT1 attachTo [HMSProteus,[0.05,-3.7, 3.19]];
	//SDVLIGHT1 attachTo [HMSProteus,[0.05,-4.35,3.14]];


	sleep 1;
	player attachTo [HMSProteus,[0, 17, 5]];
	player setDir 180; sleep 1;

	detach player;


	cutText ["", "BLACK IN", 10];


	sleep 1; // A.I. ///////////////////////////////////////////////
	{ _x attachTo [player,[0,-3,0.5]]; } forEach units group player;
	sleep 1;
	{ detach _x; } forEach units group player;
	sleep 5;
	{ _x switchMove ""; } forEach units group player;
	////////////////////////////////////////////////////////////////






	sleep 10;
	player allowDamage true;

} else {
	hint "HMS Proteus NOT in Position. \n Must Plot Approved Course.";
};




/////////////////////////
/* NOTES:



*/