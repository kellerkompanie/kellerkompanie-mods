// SONAR Report - ACTIVE - Ping!!!!
//
if (VQI_FROGS_HINTS == 1) then { hint "sonar_active.sqf"; };
sleep 1;



private ["_type0","_type1","_type2","_type3","_type4","_type5","_type6","_SONAR",
		"_active0","_active1","_active2","_active3","_active4","_active5","_active6",
		"_dist0","_dist1","_dist2","_dist3","_dist4","_dist5","_dist6","_distC","_distN",
		"_dirT0","_dirT1","_dirT2","_dirT3","_dirT4","_dirT5","_dirT6","_typeD",
		"_active","_pinged","_classX","_classS","_timedP","_rangeP"];


hint "ACTIVE SONAR REPORT \n Stand By...";
sleep 2;

// Ping
[HMSProteusLOC,"VQI_Sound_PingedByEnemy"] call CBA_fnc_globalSay3d;	// fix to single-ping
sleep 5;

_type0 = 0;
_type1 = 0;
_type2 = 0;
_type3 = 0;
_type4 = 0;
_type5 = 0;
_type6 = 0;
_SONAR = 0;

_dist0 = 4000;
_dist1 = 4000;
_dist2 = 4000;
_dist3 = 4000;
_dist4 = 4000;
_dist5 = 4000;
_dist6 = 4000;
_distC = 0;
_distN = "";

_dirT0 = 0;
_dirT1 = 0;
_dirT2 = 0;
_dirT3 = 0;
_dirT4 = 0;
_dirT5 = 0;
_dirT6 = 0;
_typeD = 0;



// sub list to ping - arranged by 'Active Ping' Signature if MORE THAN ONE are detected (WIP)
// Active SONAR -- center, classname, sonar range - 4km HMS Proteus
_active0 = nearestObjects [HMSProteus, ["O_SDV_01_F"], 4000]; 		sleep 0.25;
_active1 = nearestObjects [HMSProteus, ["VQI_SUB_Class1"], 4000]; 	sleep 0.25;
_active2 = nearestObjects [HMSProteus, ["VQI_SUB_Class2"], 4000]; 	sleep 0.25;
_active3 = nearestObjects [HMSProteus, ["VQI_SUB_Class3"], 4000]; 	sleep 0.25;
_active4 = nearestObjects [HMSProteus, ["VQI_SUB_Class4"], 4000]; 	sleep 0.25;
_active5 = nearestObjects [HMSProteus, ["VQI_SUB_Class5"], 4000]; 	sleep 0.25;
_active6 = nearestObjects [HMSProteus, ["VQI_SUB_Class6"], 4000]; 	sleep 0.25;


// count & stealth
if (count _active0 > 0) then {   if (random 100 < 10) then { _type0 = ceil(random(count _active0)); _dist0 = round (HMSProteus distance2D (_active0 select 0)); _dirT0 = HMSProteus getDir (_active0 select 0); };   };	// SDV
if (count _active1 > 0) then {   if (random 100 < 60) then { _type1 = ceil(random(count _active1)); _dist1 = round (HMSProteus distance2D (_active1 select 0)); _dirT1 = HMSProteus getDir (_active1 select 0); };   };	// Type 1
if (count _active2 > 0) then {   if (random 100 < 80) then { _type2 = ceil(random(count _active2)); _dist2 = round (HMSProteus distance2D (_active2 select 0)); _dirT2 = HMSProteus getDir (_active2 select 0); };   };	// Crimson II
if (count _active3 > 0) then {   if (random 100 < 95) then { _type3 = ceil(random(count _active3)); _dist3 = round (HMSProteus distance2D (_active3 select 0)); _dirT3 = HMSProteus getDir (_active3 select 0); };   };	// Kraken
if (count _active4 > 0) then {   if (random 100 < 60) then { _type4 = ceil(random(count _active4)); _dist4 = round (HMSProteus distance2D (_active4 select 0)); _dirT4 = HMSProteus getDir (_active4 select 0); };   };	// U-Class
if (count _active5 > 0) then {   if (random 100 < 50) then { _type5 = ceil(random(count _active5)); _dist5 = round (HMSProteus distance2D (_active5 select 0)); _dirT5 = HMSProteus getDir (_active5 select 0); };   };	// Scimitar
if (count _active6 > 0) then {   if (random 100 < 20) then { _type6 = ceil(random(count _active6)); _dist6 = round (HMSProteus distance2D (_active6 select 0)); _dirT6 = HMSProteus getDir (_active6 select 0); };   };	// Djinn

// closest submarine in SONAR range
_distC = [_dist0,_dist1,_dist2,_dist3,_dist4,_dist5,_dist6] call BIS_fnc_lowestNum;	// 4km SONAR Range - HMS Proteus
sleep 1;






_active = [
	[_active0 select 0],
	[_active1 select 0],
	[_active2 select 0],
	[_active3 select 0],
	[_active4 select 0],
	[_active5 select 0],
	[_active6 select 0],
];


// if ping returned
if (count _active > 0) then { 

	_pinged = _active select 0; 
	_classX = typeOf _pinged;


	
	_classS = "unknown";	// Sub Class ID with Active-SONAR stealth check
	if (_classX == "O_SDV_01_F") 		then { if (random 100 < 10) then { _classS = "SDV"; }; };			// 10%
	if (_classX == "VQI_SUB_Class1") 	then { if (random 100 < 60) then { _classS = "Type 1"; }; };		// 60%
	if (_classX == "VQI_SUB_Class2") 	then { if (random 100 < 80) then { _classS = "Crimson II"; }; };	// 80%
	if (_classX == "VQI_SUB_Class3") 	then { if (random 100 < 95) then { _classS = "Kraken"; }; };		// 95%
	if (_classX == "VQI_SUB_Class4") 	then { if (random 100 < 60) then { _classS = "U-Class"; }; };		// 60%
	if (_classX == "VQI_SUB_Class5") 	then { if (random 100 < 50) then { _classS = "Scimitar"; }; };	// 50%
	if (_classX == "VQI_SUB_Class6") 	then { if (random 100 < 20) then { _classS = "Djinn"; }; };		// 20%



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
	
	
	
	if (random 100 < 20) then {
	
		sonarA = 10; // 10x modifier if Active Ping
		[HMSProteus] execVM "vqi_frogs\VQI-CombatDiver\Navigation\Pinged\EnemyTorp\enemy_torp.sqf";
	};
};






	



	
sleep 1;
//hint "1.sqf -END-";