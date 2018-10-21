// Fish in the water!!! Enemy launches Torpedoes...
//
//sleep 5;

//_location = _this select 0;

//if (!isNil "HMSProteus") then { deleteVehicle HMSProteus; sleep 1; };
//HMSProteus = "Submarine_01_F" createVehicle _location;
//sleep 1;




// Pinged
[HMSProteusLOC,"VQI_Sound_PingedByEnemy"] call CBA_fnc_globalSay3d;
sleep 1;
hint "- ALERT ALERT ALERT -";

deleteMarker "mkrS1"; sleep 5;
systemChat "SONAR ROOM - ENEMY TORPEDO TUBES OPENED!.........."; sleep 5;



if (random 100 < 90) then {

	systemChat "SONAR ROOM - FISH IN THE WATER!!..."; sleep 2;
	systemChat "SONAR ROOM - TORPEDO LAUNCHED!!!";


	// find Class & Torpedo Range
	_class1 = nearestObjects [HMSProteus, ["VQI_SUB_Class1"], 1000]; 	sleep 0.25;		// Type 1
	_class2 = nearestObjects [HMSProteus, ["VQI_SUB_Class2"], 2000]; 	sleep 0.25;		// Crimson II
	_class3 = nearestObjects [HMSProteus, ["VQI_SUB_Class3"], 3000]; 	sleep 0.25;		// Kraken
	_class4 = nearestObjects [HMSProteus, ["VQI_SUB_Class4"], 2000]; 	sleep 0.25;		// U-Class
	_class5 = nearestObjects [HMSProteus, ["VQI_SUB_Class5"], 1000]; 	sleep 0.25;		// Scimitar
	_class6 = nearestObjects [HMSProteus, ["VQI_SUB_Class6"], 1000]; 	sleep 0.25;		// Djinn


	_loop = 0;
	_torp = 2 + sonarA;	// 2-12% if OUT OF RANGE
	if (count _class1 > 0) then { _torp = 10 + sonarA; };	// Torp Tech
	if (count _class2 > 0) then { _torp = 20 + sonarA; };	// Torp Tech
	if (count _class3 > 0) then { _torp = 30 + sonarA; };	// Torp Tech
	if (count _class4 > 0) then { _torp = 20 + sonarA; };	// Torp Tech
	if (count _class5 > 0) then { _torp = 10 + sonarA; };	// Torp Tech
	if (count _class6 > 0) then { _torp = 10 + sonarA; };	// Torp Tech



	//_loop = count (_class1 + _class2 + _class3);
	//hint (format ["Torp Tech: %1",_torp]+"%"); sleep 3;



	if (random 100 < _torp) then { 

		[HMSProteusLOC,"VQI_Sound_EnemyTorpHit"] call CBA_fnc_globalSay3d;
		sleep 12.6;
		openMap false;
		
		33 cutText ["", "BLACK IN", 2];
		addCamShake [30, 5, 5]; // p,d,f
		
		"dynamicBlur" ppEffectEnable true;   
		"dynamicBlur" ppEffectAdjust [6];   
		"dynamicBlur" ppEffectCommit 0;     
		"dynamicBlur" ppEffectAdjust [0];  
		"dynamicBlur" ppEffectCommit 15;
		sleep 3;
		
		
		999 cutRsc ["EXPLOSION_SEA_SURFACE", "PLAIN"];
		sleep 4;
		
		["EveryoneLost", false, 10] call BIS_fnc_endMissionServer; 
		
	} else {
		//hint "Torpedo Miss....";
		[HMSProteusLOC,"VQI_Sound_EnemyTorpMiss"] call CBA_fnc_globalSay3d; 
		sleep 17;
		systemChat "SONAR ROOM - .....Miss..... All clear...";
	};
	
} else {
	
	sleep 5;
	systemChat "SONAR ROOM - Nothing detected........."; sleep 2;
	systemChat "SONAR ROOM - They're adjusting their angle..."; sleep 2;
	systemChat "SONAR ROOM - Full Rudder indicated...";
};













////////////////////
/* NOTES:


*/