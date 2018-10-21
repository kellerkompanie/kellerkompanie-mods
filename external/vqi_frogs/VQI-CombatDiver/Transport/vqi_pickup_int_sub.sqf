// Transport Player INTERIOR Submarine - Inside LockoutChamber
// subTransport == true

private ["_lightLOC"];


if (true) then {
	999 cutRsc ["WORLD_MAP_SUB", "PLAIN"];
	playSound "VQI_Sound_SonarPingAtmo";
	
	
		// HotFix - Player Animation/Water issue
		//cutText ["", "BLACK FADED", 999];
		player allowDamage false;
		sleep 1;
		player attachTo [VQI_DIVER_HMSPROTEUS,[0,3,0]];
			
		sleep 1;  
		detach player;

		sleep 5;
		////////////////////////
	
	
	
	player attachTo [DDSLC,[3,-2,0.5]]; 
	//player allowDamage false;
	sleep 1;  detach player;
	cutText ["", "BLACK IN", 20];
	
	_lightLOC = "chemlight_red" createVehicle (position player);
	_lightLOC attachTo [DDSLC,[0,0,4]];
	//sound
	execVM "vqi_diver\VQI-DevilDiver\Sounds\vqi_sound_subint.sqf";
	
	
	
	
	// Delete Temp Pick-Up SUB
	sleep 600;
	/*
	//VQISUBpu setMass [350000,30];
	//sleep 60;
	//VQISUBpu setPosASL [position VQISUBpu select 0, position VQISUBpu select 1, -1];
	VQISUBpu setPos (VQISUBpu modelToWorld [0,0,-1]);
	sleep 1;
	*/
	VQISUBpu setPosASL [position VQISUBpu select 0, position VQISUBpu select 1, -10];
	sleep 2;
	VQISUBpu setPosASL [position VQISUBpu select 0, position VQISUBpu select 1, -11];
	sleep 2;
	VQISUBpu setPosASL [position VQISUBpu select 0, position VQISUBpu select 1, -12];
	sleep 2;
	VQISUBpu setPosASL [position VQISUBpu select 0, position VQISUBpu select 1, -13];
	sleep 2;
	VQISUBpu setPosASL [position VQISUBpu select 0, position VQISUBpu select 1, -14];
	sleep 2;
	VQISUBpu setPosASL [position VQISUBpu select 0, position VQISUBpu select 1, -15];
	sleep 2;
	VQISUBpu setPosASL [position VQISUBpu select 0, position VQISUBpu select 1, -16];
	sleep 2;
	VQISUBpu setPosASL [position VQISUBpu select 0, position VQISUBpu select 1, -17];
	sleep 90;
	deleteVehicle newClickSUBpu;
	deleteVehicle VQISUBpu;

} else {
	hint "HMS Proteus NOT in Position. Must Plot Approved Course!";
};





//test flood chamber