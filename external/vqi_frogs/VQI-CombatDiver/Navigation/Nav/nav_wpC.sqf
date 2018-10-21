//
//
if (VQI_FROGS_HINTS == 1) then { hint "nav_wpC"; };


// Map-Click C ////////////////////////////////////////////////
subNav = true;
sonarA = 20;


private ["_wp","_depth","_ping1","_ping2","_ping3","_ping4","_ping5","_ping6","_ENEMY","_mkr1","_mkrD","_mkrP"];







while {subNav} do {
	hint "L-Click for next WP \n \n HMS Proteus: . . . . . 1km / -30m";
	
	MapClickTravel = false;
	onMapSingleClick "posSUBC = _pos; MapClickTravel = true; onMapSingleClick ''; true";
	waitUntil {MapClickTravel}; publicVariable "posSUBC"; sleep 1;

	if (deployedSUBLOC) then {breakOut "navExit"};
	
	
	
	// Max Speed
	_wp = posSUBC distance2D posSUBB;
	
	
	if (_wp < 1000) then { 
		
		// Min Depth
		_depth = getTerrainHeightASL posSUBC;
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

// 10 min
skipTime 0.1;




hint "Stand By...";
// Passive SONAR -- center, classname, sonar range
_ping1 = nearestObjects [posSUBC, ["VQI_SUB_Class1"], 2000]; sleep 1;		// ENEMY SONAR RANGE - THEY PINGED US!
_ping2 = nearestObjects [posSUBC, ["VQI_SUB_Class2"], 3000]; sleep 1;		// ENEMY SONAR RANGE - THEY PINGED US!
_ping3 = nearestObjects [posSUBC, ["VQI_SUB_Class3"], 4000]; sleep 1;		// ENEMY SONAR RANGE - THEY PINGED US!
_ping4 = nearestObjects [posSUBC, ["VQI_SUB_Class4"], 3000]; sleep 1;		// ENEMY SONAR RANGE - THEY PINGED US!
_ping5 = nearestObjects [posSUBC, ["VQI_SUB_Class5"], 3000]; sleep 1;		// ENEMY SONAR RANGE - THEY PINGED US!
_ping6 = nearestObjects [posSUBC, ["VQI_SUB_Class6"], 7000]; sleep 1;		// ENEMY SONAR RANGE - THEY PINGED US!

// count all activity
_ENEMY = count (_ping1 + _ping2 + _ping3 + _ping4 + _ping5 + _ping6);
//hint format ["%1",_ENEMY];




if (!isNil "HMSProteus") then { deleteVehicle HMSProteus; sleep 1; };
HMSProteus = "Submarine_01_F" createVehicle posSUBC;
publicVariable "HMSProteus";





deleteMarker "mkr1";
deleteMarker "mkrD";

if (_ENEMY == 0) then {
	_mkr1 = createMarker["mkr1", posSUBC];
	"mkr1" setMarkerShape "ICON";
	"mkr1" setMarkerType "mil_dot";
	"mkr1" setMarkerColor "ColorBLUFOR";
	"mkr1" setMarkerText "S131";
	"mkr1" setMarkerAlpha 1;
	
	_mkrD = createMarker["mkrD", posSUBC];
	"mkrD" setMarkerShape "ELLIPSE";			//
	"mkrD" setMarkerBrush "Border";
	"mkrD" setMarkerColor "ColorBLACK";
	"mkrD" setMarkerSize [1000,1000];
	"mkrD" setMarkerAlpha 0.5;
	
	subNavB = [] execVM "vqi_frogs\VQI-CombatDiver\Navigation\Nav\nav_wpB.sqf";
};

if (_ENEMY > 0) then {
	_mkrP = createMarker["mkrP", posSUBC];
	"mkrP" setMarkerShape "ICON";
	"mkrP" setMarkerType "mil_dot";
	"mkrP" setMarkerColor "ColorOPFOR";
	"mkrP" setMarkerText "";
	"mkrP" setMarkerAlpha 1;
	
	[posSUBC] execVM "vqi_frogs\VQI-CombatDiver\Navigation\Pinged\pinged.sqf";
};




//////////////////////////////////
/* NOTES:


*/