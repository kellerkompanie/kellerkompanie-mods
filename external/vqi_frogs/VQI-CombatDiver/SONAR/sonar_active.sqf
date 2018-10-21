// SONAR Report - ACTIVE - Ping!!!!
//
if (VQI_FROGS_HINTS == 1) then { hint "sonar_active.sqf"; };
sleep 1;



private ["_active","_pinged","_classX","_classS","_timedP","_rangeP","_tubesL"];

hint "ACTIVE SONAR - SINGLE PING \n Stand By...";
sleep 1;

// sub list to ping - arranged by 'Active Ping' Signature if MORE THAN ONE are detected (WIP)
_active = nearestObjects [HMSProteus, ["VQI_SUB_Class3","VQI_SUB_Class2","VQI_SUB_Class4","VQI_SUB_Class1","VQI_SUB_Class5","VQI_SUB_Class6","O_SDV_01_F"], 4000];	// 4km SONAR Range - HMS Proteus
sleep 1;

// Ping
[HMSProteusLOC,"VQI_Sound_PingSingle"] call CBA_fnc_globalSay3d;	// fix to single-ping
sleep 5;




// if ping returned
if (count _active > 0) then { 

	_pinged = _active select 0; 
	_classX = typeOf _pinged;


	
	_classS = "unknown";	// Sub Class ID with Active-SONAR stealth check
	_tubesL = 0;			// Count Torp Tubes				-WIP-
	if (_classX == "O_SDV_01_F") 		then { if (random 100 < 10) then { _classS = "SDV"; 		 _tubesL = 0; }; };	// 10%
	if (_classX == "VQI_SUB_Class1") 	then { if (random 100 < 60) then { _classS = "Type 1"; 	 _tubesL = 1; }; };	// 60%
	if (_classX == "VQI_SUB_Class2") 	then { if (random 100 < 80) then { _classS = "Crimson II"; _tubesL = 1; }; };	// 80%
	if (_classX == "VQI_SUB_Class3") 	then { if (random 100 < 95) then { _classS = "Kraken"; 	 _tubesL = 1; }; };	// 95%
	if (_classX == "VQI_SUB_Class4") 	then { if (random 100 < 60) then { _classS = "U-Class"; 	 _tubesL = 1; }; };	// 60%
	if (_classX == "VQI_SUB_Class5") 	then { if (random 100 < 50) then { _classS = "Scimitar"; 	 _tubesL = 1; }; };	// 50%
	if (_classX == "VQI_SUB_Class6") 	then { if (random 100 < 20) then { _classS = "Djinn"; 	 _tubesL = 1; }; };	// 20%



	// target range
	_timedP = round(HMSProteus distance _pinged);


	// target direction
	_rangeP = round(HMSProteus getDir _pinged);
};


// feedback
if (count _active == 0) then { 
	hint "nothing detected";
	systemChat "SONAR ROOM - Nothing detected, Sir. All Sensors clear...";
}; // file for ext noises

if (count _active >= 1) then { 
	hint format ["-DETECTED- \n %1 \n \n -RANGE- \n %2m \n \n -BEARING- \n %3°",_classS,_timedP,_rangeP];
	systemChat "SONAR ROOM - WE GOT ONE!";
	
	
	// 20%
	if (random 100 < 20) then {
	
		if (_tubesL > 0) then {
			sonarA = 10; // 10x modifier if Active Ping
			[HMSProteus] execVM "vqi_frogs\VQI-CombatDiver\Navigation\Pinged\EnemyTorp\enemy_torp.sqf";
		};
	};
};






	



	
sleep 1;
//hint "1.sqf -END-";