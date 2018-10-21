//
//



// Map-Click D ////////////////////////////////////////////////
subnav = true;

while {subnav} do {
	hint "L-Click for DEPLOYMENT \n \n HMS Proteus: . . . . . 1km / -30m";
	
	MapClickTravel = false;
	onMapSingleClick "posSUB10 = _pos; MapClickTravel = true; onMapSingleClick ''; true";
	waitUntil {MapClickTravel}; publicVariable "posSUB10"; sleep 1;

	
	// Max Speed
	_wp = posSUB10 distance2D posSUB9;
	
	if (_wp < 1000) then { 
		
		// Min Depth
		_depth = getTerrainHeightASL posSUB10;
		if (_depth < -30) then { 
			subnav = false; 
		} else { 
			hint "Too Shallow - Stay DEEPER than -30m \n TRY AGAIN";
			sleep 3;
		};
		
	} else {
		hint "Too Fast - Must be LESS than 1km \n TRY AGAIN";
		sleep 3;
	};
};


skipTime 0.1;

hint "Stand By...";
// Passive SONAR -- center, classname, sonar range
_ping1 = nearestObjects [posSUB10, ["VQI_SUB_Class1"], 2000]; sleep 1;		// ENEMY SONAR RANGE - THEY PINGED US!
_ping2 = nearestObjects [posSUB10, ["VQI_SUB_Class2"], 3000]; sleep 1;		// ENEMY SONAR RANGE - THEY PINGED US!
_ping3 = nearestObjects [posSUB10, ["VQI_SUB_Class3"], 4000]; sleep 1;		// ENEMY SONAR RANGE - THEY PINGED US!
_ping4 = nearestObjects [posSUB10, ["VQI_SUB_Class4"], 3000]; sleep 1;		// ENEMY SONAR RANGE - THEY PINGED US!
_ping5 = nearestObjects [posSUB10, ["VQI_SUB_Class5"], 3000]; sleep 1;		// ENEMY SONAR RANGE - THEY PINGED US!
_ping6 = nearestObjects [posSUB10, ["VQI_SUB_Class6"], 7000]; sleep 1;		// ENEMY SONAR RANGE - THEY PINGED US!

// count all activity
_ENEMY = count (_ping1 + _ping2 + _ping3 + _ping4 + _ping5 + _ping6);
//hint format ["%1",_ENEMY];

deleteMarker "mkrD";


/*
_mkr10 = createMarker["mkr10", posSUB10];
"mkr10" setMarkerShape "ICON";
"mkr10" setMarkerType "selector_selectedMission";
"mkr10" setMarkerColor "ColorBLUFOR";
"mkr10" setMarkerText " HMS Proteus";
"mkr10" setMarkerAlpha 1;
*/


// Place HMS Proteus
[] execVM "vqi_frogs\VQI-CombatDiver\Navigation\deploy_sub_shallow.sqf";
sleep 1;


// X. SONAR?
[[LOCLAPTOP2, ["-------------", "hint ''; [LOCLAPTOP2, 5]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["Request SONAR ROOM - Passive SONAR Report", "execVM 'vqi_frogs\VQI-CombatDiver\SONAR\sonar_passive.sqf'; [LOCLAPTOP2, 6]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["Request SONAR ROOM - Active SONAR Ping!", "execVM 'vqi_frogs\VQI-CombatDiver\SONAR\sonar_active.sqf'; [LOCLAPTOP2, 7]"]], "addAction", true, true] call BIS_fnc_MP;

//////////////////////////////////
/* NOTES:


*/