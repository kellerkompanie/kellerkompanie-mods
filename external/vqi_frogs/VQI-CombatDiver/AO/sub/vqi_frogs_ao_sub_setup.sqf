// Area-of-Operation:  ENEMY SUBMARINES
//
if (VQI_FROGS_HINTS == 1) then { hint "ao_sub_setup.sqf"; };
sleep 1;



private ["_mapSize","_mapHalf","_mapCent","_aoCount","_mkrSUB","_rNum","_aoIntel","_subClass","_aoForce","_subID","_subStealth",
		"_marker","_markerA","_markerB","_markerC","_markerD","_markerE","_markerF",
		"_namAO","_namAO1","_namAO2","_namAO3","_namAO4","_namAO5","_namAO6",
		"_posXYZ","_posBIS","_subType","_subSONAR","_subTorp","_subSSGM","_subSSBN","_subSAMs","_newPos","_shallow"];

_mapSize = worldSize;
_mapHalf = _mapSize / 2;
_mapCent = [_mapHalf, _mapHalf, 0];

// defaults
_mkrSUB = "selector_selectedMission";		// ?
_newPos = 0;



// How many AO's on Map - Set or Scale
if (VQI_FROGS_AO_SUB_NUM >= 0) then { 
	_aoCount = VQI_FROGS_AO_SUB_NUM; 
} else { 
	VQI_FROGS_AO_SUB_NUM = (VQI_FROGS_AO_SUB_NUM * -1);	// convert to positive
	_aoCount = round (random (VQI_FROGS_AO_SUB_NUM)); 	// randomize upTo -X
};


if (VQI_FROGS_HINTS == 1) then { hint format ["MapSize: %1 \n SUB Count -- %2",_mapSize,_aoCount]; sleep 5; };

hint "- INTEL REPORT -";



// Loop
for "_i" from 1 to _aoCount do {


	_rNum = random 100;
	if ((_rNum > 0)  && (_rNum < 10)) then { _subClass = 0001; _mkrSUB = "selector_selectedMission"; }; 		// 10% - Gen II SDV
	if ((_rNum > 10) && (_rNum < 40)) then { _subClass = 1000; _mkrSUB = "selector_selectedMission"; }; 		// 30% - General (older tech)
	if ((_rNum > 40) && (_rNum < 65)) then { _subClass = 2000; _mkrSUB = "selector_selectedMission"; }; 		// 25% - General (newer tech)
	if ((_rNum > 65) && (_rNum < 80)) then { _subClass = 3000; _mkrSUB = "selector_selectedMission"; }; 		// 15% - Hunter-Killer
	if ((_rNum > 80) && (_rNum < 90)) then { _subClass = 4000; _mkrSUB = "selector_selectedMission"; }; 		// 10% - Attack Submarine
	if ((_rNum > 90) && (_rNum < 95)) then { _subClass = 5000; _mkrSUB = "selector_selectedMission"; }; 		//  5% - Ballistic Platform
	if ((_rNum > 95) && (_rNum < 99)) then { _subClass = 6000; _mkrSUB = "selector_selectedMission"; };		//  5% - Surrveilence Platform
	sleep 0.1;
	

	
	_aoIntel = ([1,10] call BIS_fnc_randomInt) * 10;	// Intel = Submarine Depth
	//_posXYZ = [_mapCent, (random(_mapHalf*0.99)), random 360] call BIS_fnc_relPos;
	sleep 0.1;
	
	
	// depth check ///////
	_shallow = true;
	
	while {_shallow} do {
	
		// [position, minDist, maxDist, objDist, waterMode, maxGrad, shoreMode, blacklistPos, defaultPos]
		_posBIS = [_mapCent, 1, _mapHalf, 50, 2, 0, 0] call BIS_fnc_findSafePos;
		sleep 0.1;
		
		_newPos = getTerrainHeightASL _posBIS;			// get Z value
		if (_newPos < -30) then { _shallow = false; }; 	// min sub depth
		sleep 0.1;
		
		if (VQI_FROGS_HINTS == 1) then { hint format ["Position: %1 \n Depth: %2",_posBIS,_newPos]; sleep 1; };
	};
	//////////////////////
	
	

	


	// Place Submarine
	[_posBIS,_subClass,_aoIntel] execVM "vqi_frogs\VQI-CombatDiver\AO\sub\vqi_frogs_ao_sub_spawn.sqf";
	sleep 1;
	
	// 			Submarine				DepthScale 	(est max m/ft)		Notes
	// SDV (upgraded w/ sonar)..SDV/Divers		1:0.5	 -40/-130'ft
	// General (older tech).....QRF/Divers		1:1		 -80/-262'ft
	// General (newer tech) ....LOC/Divers		1:2		-160/-524'ft
	// Hunter-Killer............DEADLY!			1:2		-160/-524'ft
	// Attack Submarine.........LOC/Divers		1:2		-160/-524'ft
	// Ballistic/Cruise.........Missles			1:2		-160/-524'ft
	// Surveillance Platform....Stealthy			1:3		-240/-787'ft

	
	// Sub INTEL Rating Scale System
	if (VQI_FROGS_AO_SUB_INTEL == 0) then { _subID = 101; _subStealth = 1.0; };		// NONE
	if (VQI_FROGS_AO_SUB_INTEL == 1) then { _subID = 101; _subStealth = 0.8; };		// SIGINT - NSA Radio Intercept
	if (VQI_FROGS_AO_SUB_INTEL == 2) then { _subID =  90; _subStealth = 0.8; };		// NATO Fleet & Surface Ships
	if (VQI_FROGS_AO_SUB_INTEL == 3) then { _subID = 101; _subStealth = 0.0; };		// NATO Subs OR SONAR Bouy Intel
	if (VQI_FROGS_AO_SUB_INTEL == 4) then { _subID =  80; _subStealth = 0.5; };		// Satellite GEN-1
	if (VQI_FROGS_AO_SUB_INTEL == 5) then { _subID =  50; _subStealth = 0.3; };		// Satellite GEN-2
	if (VQI_FROGS_AO_SUB_INTEL == 6) then { _subID =  20; _subStealth = 0.0; };		// Satellite GEN-3

	
	// Submarine Type/Notes/ID																	
	if (_aoIntel >= _subID) then {	// X % and higher (good intel)				SONAR				Torpedos			Missiles			SAMs				Ballistic
		if (_subClass == 0001) then { _subType = "SDV: G2"; 			_subSONAR = 1000;		_subTorp = 0;	   	_subSSGM = 0; 	_subSAMs = 0; 	_subSSBN = 0; };
		if (_subClass == 1000) then { _subType = "SSK: TYPE 1"; 		_subSONAR = 2000;		_subTorp = 1000; 	_subSSGM = 0; 	_subSAMs = 0; 	_subSSBN = 0; };
		if (_subClass == 2000) then { _subType = "SSN: CRIMSON II"; 	_subSONAR = 3000;		_subTorp = 2000; 	_subSSGM = 4000; 	_subSAMs = 0; 	_subSSBN = 0; };
		if (_subClass == 3000) then { _subType = "SSN: KRAKEN"; 		_subSONAR = 4000;		_subTorp = 3000; 	_subSSGM = 4000; 	_subSAMs = 4000; 	_subSSBN = 0; };
		if (_subClass == 4000) then { _subType = "SSK: U-CLASS"; 		_subSONAR = 3000;		_subTorp = 2000; 	_subSSGM = 0; 	_subSAMs = 0; 	_subSSBN = 0; };
		if (_subClass == 5000) then { _subType = "SSBN: SCIMITAR"; 	_subSONAR = 3000;		_subTorp = 1000; 	_subSSGM = 0; 	_subSAMs = 0; 	_subSSBN = 10000; };
		if (_subClass == 6000) then { _subType = "SSI: DJINN"; 		_subSONAR = 7000;		_subTorp = 1000; 	_subSSGM = 0; 	_subSAMs = 0; 	_subSSBN = 0; };
	} else {
		_subType = " -?-";
	};
	
	
	
	
	if (VQI_FROGS_AO_SUB_INTEL > 0) then {
		// Primary Marker --------------------
		_nameAO = "markerSUB0" + str _i;
		_marker = createMarker [_nameAO,_posBIS]; 	//
		_marker setMarkerType _mkrSUB; 				//
		_marker setMarkerColor "ColorBLACK";		//
		if (_subClass == 0001) then { _marker setMarkerSize [0.5,0.5]; };	// SDV
		_marker setMarkertext _subType;
		
		// Sub Stealth Factor - if below X depth then INVISIBLE (50% Intel = 10% alpha)
		if (_aoIntel == 100) then { _marker setMarkerAlpha (_aoIntel / 100) - 0.1; };			// sub on surface
		if (_aoIntel ==  90) then { _marker setMarkerAlpha (_aoIntel / 100) - 0.2; };			// tower depth
		if (_aoIntel <=  80) then { _marker setMarkerAlpha (_aoIntel / 100) - _subStealth; };	// submerged (INVISIBLE at X)

		
		
		
		// SONAR Range Marker -----------------
		if (_aoIntel >= _subID) then {
			_nameAO1 = "markerSUB1" + str _i;
			_markerA = createMarker [_nameAO1,_posBIS]; 	//
			_markerA setMarkerShape "ELLIPSE";			//
			_markerA setMarkerBrush "FDiagonal"; 		//
			_markerA setMarkerSize [_subSONAR,_subSONAR];
			_markerA setMarkerColor "ColorBLUFOR";
			_markerA setMarkerAlpha (_aoIntel / 100) - _subStealth;
		};
		
		// TORPEDO Range Marker -----------------
		if (_aoIntel >= _subID) then {
			_nameAO2 = "markerSUB2" + str _i;
			_markerB = createMarker [_nameAO2,_posBIS]; 	//
			_markerB setMarkerShape "ELLIPSE";			//
			_markerB setMarkerBrush "Border"; 			//
			_markerB setMarkerSize [_subTorp,_subTorp];
			_markerB setMarkerColor "ColorRED";
			_markerB setMarkerAlpha (_aoIntel / 100) - _subStealth;
		};
		
		// Guided Missile Range Marker ----------
		if (_aoIntel >= _subID) then {
			_nameAO3 = "markerSUB3" + str _i;
			_markerC = createMarker [_nameAO3,_posBIS]; 	//
			_markerC setMarkerShape "ELLIPSE";			//
			_markerC setMarkerBrush "Border"; 			//
			_markerC setMarkerSize [_subSSGM,_subSSGM];
			_markerC setMarkerColor "ColorBLUE";
			_markerC setMarkerAlpha (_aoIntel / 100) - _subStealth;
		};
		
		// Anti-Air Range Marker ----------
		if (_aoIntel >= _subID) then {
			if (_subClass == 3000) then {
				_nameAO4 = "markerSUB4" + str _i;
				_markerD = createMarker [_nameAO4,_posBIS]; 			//
				_markerD setMarkerType "mil_triangle"; 	//
				_markerD setMarkerSize [0.5,0.5];
				_markerD setMarkerColor "ColorRED";
				_markerD setMarkerAlpha (_aoIntel / 100) - _subStealth;
			};
		};
		
		// Ballistic Missile Range Marker ----------
		if (_aoIntel >= _subID) then {
			_nameAO5 = "markerSUB5" + str _i;
			_markerE = createMarker [_nameAO5,_posBIS]; 	//
			_markerE setMarkerShape "ELLIPSE";			//
			_markerE setMarkerBrush "Border"; 			//
			_markerE setMarkerSize [_subSSBN,_subSSBN];
			_markerE setMarkerColor "ColorGREEN";
			_markerE setMarkerAlpha (_aoIntel / 100) - _subStealth;

			_nameAO6 = "markerSUB6" + str _i;
			_markerF = createMarker [_nameAO6,_posBIS]; 	//
			_markerF setMarkerShape "ELLIPSE";			//
			_markerF setMarkerBrush "Border"; 			//
			_markerF setMarkerSize [(_subSSBN - 100),(_subSSBN - 100)];
			_markerF setMarkerColor "ColorGREEN";
			_markerF setMarkerAlpha (_aoIntel / 100) - _subStealth;
		};
	};

	
if (VQI_FROGS_HINTS == 1) then { hint (format ["AO INTEL REPORT \n SUBMARINE \n \n %1 \n Intel: %2",_subType,_aoIntel]+"%"); };

sleep 1;
};



sleep 1;
hint "- END OF REPORT -";

sleep 1;
execVM "vqi_frogs\VQI-CombatDiver\AO\sub\vqi_frogs_ao_sub_mkrs_data.sqf";













sleep 5;
ao_sub_done = true;

sleep 1;
if (VQI_FROGS_HINTS == 1) then { hint "ao_sub_setup.sqf -END-"; };

///////////////////
/* NOTES:



*/