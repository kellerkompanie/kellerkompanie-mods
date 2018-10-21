//
//



// Stealth-Click 8 ////////////////////////////////////////////////
subnav = true;

while {subnav} do {
	hint "L-Click to MOVE - TIME: 1hr \n \n HMS Proteus: . . . . . 1kph / -30m \n - STEALTH MODE -";
	
	MapClickTravel = false;
	onMapSingleClick "posSUBstealth8 = _pos; MapClickTravel = true; onMapSingleClick ''; true";
	waitUntil {MapClickTravel}; publicVariable "posSUBstealth8"; sleep 1;

	
	// Max Speed
	_wp = posSUBstealth8 distance2D posSUBstealth7;
	
	if (_wp < 1000) then { 
		
		// Min Depth
		_depth = getTerrainHeightASL posSUBstealth8;
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


skipTime 1;


hint "Stand By...";
// Passive SONAR -- center, classname, sonar range
_ping1 = nearestObjects [posSUBstealth8, ["VQI_SUB_Class1"], 2000]; sleep 1;		// ENEMY SONAR RANGE - 2nd PING - TORP IN WATER!
_ping2 = nearestObjects [posSUBstealth8, ["VQI_SUB_Class2"], 3000]; sleep 1;		// ENEMY SONAR RANGE - 2nd PING - TORP IN WATER!
_ping3 = nearestObjects [posSUBstealth8, ["VQI_SUB_Class3"], 4000]; sleep 1;		// ENEMY SONAR RANGE - 2nd PING - TORP IN WATER!
_ping4 = nearestObjects [posSUBstealth8, ["VQI_SUB_Class4"], 3000]; sleep 1;		// ENEMY SONAR RANGE - 2nd PING - TORP IN WATER!
_ping5 = nearestObjects [posSUBstealth8, ["VQI_SUB_Class5"], 3000]; sleep 1;		// ENEMY SONAR RANGE - 2nd PING - TORP IN WATER!
_ping6 = nearestObjects [posSUBstealth8, ["VQI_SUB_Class6"], 7000]; sleep 1;		// ENEMY SONAR RANGE - 2nd PING - TORP IN WATER!

// count all activity
_ENEMY = count (_ping1 + _ping2 + _ping3 + _ping4 + _ping5 + _ping6);
//hint format ["%1",_ENEMY];



deleteMarker "mkrD";
if (!isNil "HMSProteus") then { deleteVehicle HMSProteus; sleep 1; };
HMSProteus = "Submarine_01_F" createVehicle posSUBstealth8;



if (_ENEMY == 0) then {
	_mkrS8 = createMarker["mkrS8", posSUBstealth8];
	"mkrS8" setMarkerShape "ICON";
	"mkrS8" setMarkerType "mil_dot";
	"mkrS8" setMarkerColor "ColorBLACK";
	"mkrS8" setMarkerText "S8";
	"mkrS8" setMarkerAlpha 0.5;
	
	_mkrD = createMarker["mkrD", posSUBstealth8];
	"mkrD" setMarkerShape "ELLIPSE";			//
	"mkrD" setMarkerBrush "FDiagonal";
	"mkrD" setMarkerColor "ColorBLACK";
	"mkrD" setMarkerSize [1000,1000];
	"mkrD" setMarkerAlpha 0.3;
	
	[] execVM "vqi_frogs\VQI-CombatDiver\Navigation\Stealth\stealth_wp9.sqf";
};

if (_ENEMY > 0) then {
	_mkrT8 = createMarker["mkrT8", posSUBstealth8];
	"mkrT8" setMarkerShape "ICON";
	"mkrT8" setMarkerType "hd_warning";
	"mkrT8" setMarkerColor "ColorOPFOR";
	"mkrT8" setMarkerText "TORP !";
	"mkrT8" setMarkerAlpha 1;
	
	[posSUBstealth8] execVM "vqi_frogs\VQI-CombatDiver\Navigation\Pinged\EnemyTorp\enemy_torp.sqf";
	[] execVM "vqi_frogs\VQI-CombatDiver\Navigation\Stealth\stealth_wp9.sqf";
};




//////////////////////////////////
/* NOTES:


*/