// SONAR Report - Passive (listening only)
//
if (VQI_FROGS_HINTS == 1) then { hint "sonar_passive.sqf"; };
sleep 1;



private ["_type0","_type1","_type2","_type3","_type4","_type5","_type6","_SONAR",
		"_passive0","_passive1","_passive2","_passive3","_passive4","_passive5","_passive6",
		"_dist0","_dist1","_dist2","_dist3","_dist4","_dist5","_dist6","_distC","_distN",
		"_dirT0","_dirT1","_dirT2","_dirT3","_dirT4","_dirT5","_dirT6","_typeD"];
		
hint "PASSIVE SONAR REPORT \n Stand By...";



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


// Passive SONAR -- center, classname, sonar range - 4km HMS Proteus
_passive0 = nearestObjects [HMSProteus, ["O_SDV_01_F"], 4000]; 	sleep 1;
_passive1 = nearestObjects [HMSProteus, ["VQI_SUB_Class1"], 4000]; 	sleep 1;
_passive2 = nearestObjects [HMSProteus, ["VQI_SUB_Class2"], 4000]; 	sleep 1;
_passive3 = nearestObjects [HMSProteus, ["VQI_SUB_Class3"], 4000]; 	sleep 1;
_passive4 = nearestObjects [HMSProteus, ["VQI_SUB_Class4"], 4000]; 	sleep 1;
_passive5 = nearestObjects [HMSProteus, ["VQI_SUB_Class5"], 4000]; 	sleep 1;
_passive6 = nearestObjects [HMSProteus, ["VQI_SUB_Class6"], 4000]; 	sleep 1;


// count & stealth (50% less effective than Active SONAR)
if (count _passive0 > 0) then {   if (random 100 <  5) then { _type0 = ceil(random(count _passive0)); _dist0 = round (HMSProteus distance2D (_passive0 select 0)); _dirT0 = HMSProteus getDir (_passive0 select 0); };   };	// SDV
if (count _passive1 > 0) then {   if (random 100 < 30) then { _type1 = ceil(random(count _passive1)); _dist1 = round (HMSProteus distance2D (_passive1 select 0)); _dirT1 = HMSProteus getDir (_passive1 select 0); };   };	// Type 1
if (count _passive2 > 0) then {   if (random 100 < 40) then { _type2 = ceil(random(count _passive2)); _dist2 = round (HMSProteus distance2D (_passive2 select 0)); _dirT2 = HMSProteus getDir (_passive2 select 0); };   };	// Crimson II
if (count _passive3 > 0) then {   if (random 100 < 50) then { _type3 = ceil(random(count _passive3)); _dist3 = round (HMSProteus distance2D (_passive3 select 0)); _dirT3 = HMSProteus getDir (_passive3 select 0); };   };	// Kraken
if (count _passive4 > 0) then {   if (random 100 < 30) then { _type4 = ceil(random(count _passive4)); _dist4 = round (HMSProteus distance2D (_passive4 select 0)); _dirT4 = HMSProteus getDir (_passive4 select 0); };   };	// U-Class
if (count _passive5 > 0) then {   if (random 100 < 25) then { _type5 = ceil(random(count _passive5)); _dist5 = round (HMSProteus distance2D (_passive5 select 0)); _dirT5 = HMSProteus getDir (_passive5 select 0); };   };	// Scimitar
if (count _passive6 > 0) then {   if (random 100 < 10) then { _type6 = ceil(random(count _passive6)); _dist6 = round (HMSProteus distance2D (_passive6 select 0)); _dirT6 = HMSProteus getDir (_passive6 select 0); };   };	// Djinn

// closest submarine in SONAR range
_distC = [_dist0,_dist1,_dist2,_dist3,_dist4,_dist5,_dist6] call BIS_fnc_lowestNum;

// random Hz (noise) 24.00 = 2400m
_distN = (random _distC) / 100;


// estimate direction (accurate if ONLY 1 sub) random 45*
_typeD = round((_dirT0 + _dirT1 + _dirT2 + _dirT3 + _dirT4 + _dirT5 + _dirT6) + ((random 45) + (random -45)));
if (_typeD > 360) then { _typeD = (360 - _typeD) * -1; }; // compass fix


// count all activity
_SONAR = round(_type0 + _type1 + _type2 + _type3 + _type4 + _type5 + _type6);


// Multi-Noise Distortion
if (_SONAR > 1) then { _typeD = "?"; };








//////////////////////////////////////////////////////////////////////////////////
// feedback
if (_SONAR == 0) then { 
	systemChat "SONAR ROOM - Nothing..."; 
	hint "nothing detected"; 
}; // file for ext noises

if (_SONAR >= 1) then { 
	systemChat "SONAR ROOM - Wait... I got something..."; 
	hint format ["-DETECTED- \n %1 \n \n -NOISE- \n %2 Hz \n \n -BEARING- \n %3°",_SONAR,_distN,_typeD]; 
};



	
	
	
	
	
	
sleep 1;
//hint "1.sqf -END-";