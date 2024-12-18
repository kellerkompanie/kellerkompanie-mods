//
//
if (VQI_FROGS_HINTS == 1) then { hint "stealth_wpB"; };


// Stealth-Click B ////////////////////////////////////////////////
subNav = true;
sonarA = 1;


private ["_wp","_depth","_ping1","_ping2","_ping3","_ping4","_ping5","_ping6","_ENEMY","_mkrS","_mkrD","_mkrP1","_mkrP2","_mkrT"];







while {subNav} do {
	hint "L-Click to MOVE - TIME: 1hr \n \n HMS Proteus: . . . . . 1kph / -30m \n - STEALTH MODE -";
	
	MapClickTravel = false;
	onMapSingleClick "posSUBBs = _pos; MapClickTravel = true; onMapSingleClick ''; true";
	waitUntil {MapClickTravel}; publicVariable "posSUBBs"; sleep 1;
	
	if (deployedSUBLOC) then {breakOut "navExit"};

	
	
	// Max Speed: B-C
	if (subSTART) then { _wp = posSUBBs distance2D posSUBAs; } else { _wp = posSUBBs distance2D posSUBCs; };
	
	
	if (_wp < 1000) then { 
		
		// Min Depth
		_depth = getTerrainHeightASL posSUBBs;
		if (_depth < -30) then { 
			subNav = false; 
		} else { 
			hint "Too Shallow - Stay DEEPER than -30m \n TRY AGAIN";
			sleep 3;
		};
		
	} else {
		hint "Too Fast - Must be LESS than 1km \n TRY AGAIN";
		sleep 3;
	};
};
scopeName "navExit";
if (deployedSUBLOC) exitWith {};

// 1hr
skipTime 1;





hint "Stand By...";
// Passive SONAR -- center, classname, sonar range
_ping1 = nearestObjects [posSUBBs, ["VQI_SUB_Class1"], 2000]; sleep 1;		// ENEMY SONAR RANGE - 2nd PING - TORP IN WATER!
_ping2 = nearestObjects [posSUBBs, ["VQI_SUB_Class2"], 3000]; sleep 1;		// ENEMY SONAR RANGE - 2nd PING - TORP IN WATER!
_ping3 = nearestObjects [posSUBBs, ["VQI_SUB_Class3"], 4000]; sleep 1;		// ENEMY SONAR RANGE - 2nd PING - TORP IN WATER!
_ping4 = nearestObjects [posSUBBs, ["VQI_SUB_Class4"], 3000]; sleep 1;		// ENEMY SONAR RANGE - 2nd PING - TORP IN WATER!
_ping5 = nearestObjects [posSUBBs, ["VQI_SUB_Class5"], 3000]; sleep 1;		// ENEMY SONAR RANGE - 2nd PING - TORP IN WATER!
_ping6 = nearestObjects [posSUBBs, ["VQI_SUB_Class6"], 7000]; sleep 1;		// ENEMY SONAR RANGE - 2nd PING - TORP IN WATER!

// count all activity
_ENEMY = count (_ping1 + _ping2 + _ping3 + _ping4 + _ping5 + _ping6);
//hint format ["%1",_ENEMY];




if (!isNil "HMSProteus") then { deleteVehicle HMSProteus; sleep 1; };
HMSProteus = "Submarine_01_F" createVehicle posSUBBs;
publicVariable "HMSProteus";





deleteMarker "mkrS";
deleteMarker "mkrT";
deleteMarker "mkrD";
deleteMarker "mkrP";
deleteMarker "mkrP1";
deleteMarker "mkrP2";



if (_ENEMY == 0) then {
	_mkrS = createMarker["mkrS", posSUBBs];
	"mkrS" setMarkerShape "ICON";
	"mkrS" setMarkerType "mil_dot";
	"mkrS" setMarkerColor "ColorBLACK";
	"mkrS" setMarkerText "S131";
	"mkrS" setMarkerAlpha 1;
	
	_mkrD = createMarker["mkrD", posSUBBs];
	"mkrD" setMarkerShape "ELLIPSE";			//
	"mkrD" setMarkerBrush "FDiagonal";
	"mkrD" setMarkerColor "ColorBLACK";
	"mkrD" setMarkerSize [1000,1000];
	"mkrD" setMarkerAlpha 0.3;
	
	subSTART = false;
	subNavCs = [] execVM "vqi_frogs\VQI-CombatDiver\Navigation\Stealth\stealth_wpC.sqf";
};

if (_ENEMY > 0) then {
	_mkrP1 = createMarker["mkrP1", posSUBBs];
	"mkrP1" setMarkerShape "ELLIPSE";			//
	"mkrP1" setMarkerBrush "Border";
	"mkrP1" setMarkerColor "ColorOPFOR";
	"mkrP1" setMarkerSize [1000,1000];
	"mkrP1" setMarkerAlpha 0.5;

	_mkrP2 = createMarker["mkrP2", posSUBBs];
	"mkrP2" setMarkerShape "ELLIPSE";			//
	"mkrP2" setMarkerBrush "Border";
	"mkrP2" setMarkerColor "ColorOPFOR";
	"mkrP2" setMarkerSize [500,500];
	"mkrP2" setMarkerAlpha 0.5;
	
	_mkrT = createMarker["mkrT", posSUBBs];
	"mkrT" setMarkerShape "ICON";
	"mkrT" setMarkerType "hd_warning";
	"mkrT" setMarkerColor "ColorOPFOR";
	"mkrT" setMarkerText " ";
	"mkrT" setMarkerAlpha 1;
	
	subSTART = false;
	[posSUBBs] execVM "vqi_frogs\VQI-CombatDiver\Navigation\Pinged\EnemyTorp\enemy_torp.sqf";
	subNavCs = [] execVM "vqi_frogs\VQI-CombatDiver\Navigation\Stealth\stealth_wpC.sqf";
};




//////////////////////////////////
/* NOTES:


*/