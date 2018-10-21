//
//
if (VQI_FROGS_HINTS == 1) then { hint "nav_start.sqf"; };
sleep 1;


subNavB = 0;
subNavC = 0;
subNavBs = 0;
subNavCs = 0;
deployedSUBLOC = false;

deleteMarker "mkrSTART";
deleteMarker "mkr1";
deleteMarker "mkr2";
deleteMarker "mkr3";
deleteMarker "mkr4";
deleteMarker "mkr5";
deleteMarker "mkr6";
deleteMarker "mkr7";
deleteMarker "mkr8";
deleteMarker "mkr9";
deleteMarker "mkr10";

deleteMarker "mkrD";

deleteMarker "mkrP";
deleteMarker "mkrP1";
deleteMarker "mkrP2";

deleteMarker "mkrS1";
deleteMarker "mkrS2";
deleteMarker "mkrS3";
deleteMarker "mkrS4";
deleteMarker "mkrS5";
deleteMarker "mkrS6";
deleteMarker "mkrS7";
deleteMarker "mkrS8";
deleteMarker "mkrS9";
deleteMarker "mkrS10";

deleteMarker "mkrT1";
deleteMarker "mkrT2";
deleteMarker "mkrT3";
deleteMarker "mkrT4";
deleteMarker "mkrT5";
deleteMarker "mkrT6";
deleteMarker "mkrT7";
deleteMarker "mkrT8";
deleteMarker "mkrT9";


_mapSize = worldSize;
_mapHalf = _mapSize / 2;
_mapCent = [_mapHalf, _mapHalf, 0];

openMap true;
systemChat "You have Nav Cammand. Select starting approach position...";






// Map-Click START
hint "START OUTSIDE MAP \n \n L-Click to PLOT SUB Course \n Min Depth: -30m";
MapClickTravel = false;
onMapSingleClick "posSUBstart = _pos; MapClickTravel = true; onMapSingleClick ''; true";
waitUntil {MapClickTravel}; publicVariable "posSUBstart"; sleep 1;

// Map Radius
_startDist = posSUBstart distance2D _mapCent;
if (_startDist < _mapHalf) exitWith { hint "FAIL - Too Close \n START OVER \n \n Start OUTSIDE of the Map \n (in the black)"; openMap false; };

// WP Depth
_depthS = getTerrainHeightASL posSUBstart;
if (_depthS > -30) exitWith { hint "Too Shallow - Start DEEPER than -30m \n START OVER"; openMap false; };









// Marker
_mkrSTART = createMarker["mkrSTART", posSUBstart];
"mkrSTART" setMarkerShape "ICON";
"mkrSTART" setMarkerType "hd_objective";
"mkrSTART" setMarkerColor "ColorBLUFOR";
"mkrSTART" setMarkerText " SUB S131 ON-SITE";
"mkrSTART" setMarkerAlpha 1;

_mkrD = createMarker["mkrD", posSUBstart];
"mkrD" setMarkerShape "ELLIPSE";			//
"mkrD" setMarkerBrush "Border";
"mkrD" setMarkerColor "ColorBLACK";
"mkrD" setMarkerSize [1000,1000];
"mkrD" setMarkerAlpha 0.5;





// WP A
subNavA = [] execVM "vqi_frogs\VQI-CombatDiver\Navigation\Nav\nav_wpA.sqf";












///////////////////////////
/* NOTES:


*/