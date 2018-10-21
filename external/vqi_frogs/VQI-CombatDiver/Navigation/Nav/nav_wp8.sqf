//
//



// Map-Click 8 ////////////////////////////////////////////////
subnav = true;

while {subnav} do {
	hint "L-Click for WP 8 \n \n HMS Proteus: . . . . . 1km / -30m";
	
	MapClickTravel = false;
	onMapSingleClick "posSUB8 = _pos; MapClickTravel = true; onMapSingleClick ''; true";
	waitUntil {MapClickTravel}; publicVariable "posSUB8"; sleep 1;

	
	// Max Speed
	_wp = posSUB8 distance2D posSUB7;
	
	if (_wp < 1000) then { 
		
		// Min Depth
		_depth = getTerrainHeightASL posSUB8;
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
_ping1 = nearestObjects [posSUB8, ["VQI_SUB_Class1"], 2000]; sleep 1;		// ENEMY SONAR RANGE - THEY PINGED US!
_ping2 = nearestObjects [posSUB8, ["VQI_SUB_Class2"], 3000]; sleep 1;		// ENEMY SONAR RANGE - THEY PINGED US!
_ping3 = nearestObjects [posSUB8, ["VQI_SUB_Class3"], 4000]; sleep 1;		// ENEMY SONAR RANGE - THEY PINGED US!
_ping4 = nearestObjects [posSUB8, ["VQI_SUB_Class4"], 3000]; sleep 1;		// ENEMY SONAR RANGE - THEY PINGED US!
_ping5 = nearestObjects [posSUB8, ["VQI_SUB_Class5"], 3000]; sleep 1;		// ENEMY SONAR RANGE - THEY PINGED US!
_ping6 = nearestObjects [posSUB8, ["VQI_SUB_Class6"], 7000]; sleep 1;		// ENEMY SONAR RANGE - THEY PINGED US!

// count all activity
_ENEMY = count (_ping1 + _ping2 + _ping3 + _ping4 + _ping5 + _ping6);
//hint format ["%1",_ENEMY];



deleteMarker "mkrD";
if (!isNil "HMSProteus") then { deleteVehicle HMSProteus; sleep 1; };
HMSProteus = "Submarine_01_F" createVehicle posSUB8;



if (_ENEMY == 0) then {
	_mkr8 = createMarker["mkr8", posSUB8];
	"mkr8" setMarkerShape "ICON";
	"mkr8" setMarkerType "mil_dot";
	"mkr8" setMarkerColor "ColorBLUFOR";
	"mkr8" setMarkerText "S8";
	"mkr8" setMarkerAlpha 1;
	
	_mkrD = createMarker["mkrD", posSUB8];
	"mkrD" setMarkerShape "ELLIPSE";			//
	"mkrD" setMarkerBrush "Border";
	"mkrD" setMarkerColor "ColorBLACK";
	"mkrD" setMarkerSize [1000,1000];
	"mkrD" setMarkerAlpha 0.5;
	
	[] execVM "vqi_frogs\VQI-CombatDiver\Navigation\Nav\nav_wp9.sqf";
};

if (_ENEMY > 0) then {
	_mkrP = createMarker["mkrP", posSUB8];
	"mkrP" setMarkerShape "ICON";
	"mkrP" setMarkerType "mil_dot";
	"mkrP" setMarkerColor "ColorOPFOR";
	"mkrP" setMarkerText "PING";
	"mkrP" setMarkerAlpha 1;
	
	[posSUB8] execVM "vqi_frogs\VQI-CombatDiver\Navigation\Pinged\pinged.sqf";
};




//////////////////////////////////
/* NOTES:


*/