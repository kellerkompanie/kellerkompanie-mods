// Request Submarine Transport with Wet Dock Capabilities;  Min:-30mASL 
// DEEPEST - Ocean Floor
if (VQI_FROGS_HINTS == 1) then { hint "sub_deepest.sqf"; };
sleep 1;


private ["_sdvStart","_depthCheck","_xX","_yY","_zZ","_locSUB","_mkrSUB"];

_sdvStart = [11, 11, 11];

openMap true;
hint "L-Click to Plot Course";


// Map Click Option ///////////////------------------------------------------------
MapClickedSUB = false;
onMapSingleClick "posSUBPLAN = _pos; MapClickedSUB = true; onMapSingleClick ''; true";
waitUntil {MapClickedSUB}; publicVariable "posFLIGHTPLAN"; sleep 1;

_logicC = createCenter sideLogic;
_logicG = createGroup _logicC;
objSUB = _logicG createUnit ["Logic", posSUBPLAN, [], 0, "NONE"];
//objSUB = createUnit ["Logic", posFLIGHTPLAN, [], 0, "NONE"];
objSUB setPos (objSUB modelToWorld [0,0,-1]);
objSUB setVectorUp [0,0,1]; publicVariable "objSUB"; // Sign_Sphere25cm_F
///////////////////////////////////------------------------------------------------

hint "Stand by...";
sleep 1;

	
_depthCheck = ((getPosASL objSUB) select 2);





if (_depthCheck < -30) then { // Minimum Depth BELOW SEA LEVEL

	// find sea surface (shallow option)
	objSUB setPosATL [position objSUB select 0, position objSUB select 1, 0];	// ATL

	_xX = random 11; 		// random area
	_yY = random 11; 		// x+y=area
	_zZ = 20 + random 20; // z is your height   (20-40m off floor)

	
	objSUB setVectorUp [0,0,1];
	objSUB setDir (random 360);
	
	HMSProteus attachTo [objSUB,[_xX,_yY,_zZ]];

	// Mark Submarine w/ FT Depth
	_locSUB = round (((getPosASL HMSProteus) select 2)*3.2808);

	deleteMarker "mkrSUB";
	deleteMarker "mkrSUBr";
	removeAllActions HMSProteus;

	sleep 2;
	hint "Aye, Aye Sir! \n Setting Course...";
	sleep 2;
	
	// Marker
	_mkrSUB = createMarker["mkrSUB", getPos HMSProteus];
	"mkrSUB" setMarkerShape "ICON";
	"mkrSUB" setMarkerType "selector_selectedMission";
	"mkrSUB" setMarkerColor "ColorBlack";
	"mkrSUB" setMarkerText format [" HMS Proteus: %1'ft",_locSUB];
	"mkrSUB" setMarkerAlpha 1;
	
	
// SDV-1 & SDV-2 (back of HMS Proteus)
deleteVehicle VQISDV1;
deleteVehicle VQISDV2;
sleep 2;
VQISDV1 = "B_SDV_01_F" createVehicle _sdvStart;
VQISDV2 = "B_SDV_01_F" createVehicle _sdvStart;
publicVariable "VQISDV1";
publicVariable "VQISDV2";
VQISDV1 allowDamage false;
VQISDV2 allowDamage false;
VQISDV1 attachTo [HMSProteus,[ 1.21,-2, 5]];
VQISDV2 attachTo [HMSProteus,[-1.22,-2, 5]];
VQISDV1 setDir 180; 
VQISDV2 setDir 180; 
VQISDV1 setVectorUp [0,-0.06, 1];
VQISDV2 setVectorUp [0,-0.06, 1];
VQISDV1 animate ["Periscope", 3];
VQISDV2 animate ["Periscope", 3];
VQISDV1 animate ["Antenna", 3];
VQISDV2 animate ["Antenna", 3];
///////////////////////////////

	
	SubPlotted = true;
	publicVariable "SubPlotted";
	
	
	
	if (VQI_FROGS_LOC == 1) then {
		// Inside LOC (top hatch)
		[[LOCLOCK, ["Open Hatch: Disembark", "execVM 'vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_disembark_sub.sqf'; [LOCLOCK, 1]"]], "addAction", true, true] call BIS_fnc_MP;

		// Inside LOC (controls)
		[[LOCFLOOD, ["LOC System Valves: Flood Chamber", "execVM 'vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_flood.sqf'; [LOCFLOOD, 1]"]], "addAction", true, true] call BIS_fnc_MP;
		[[LOCFLOOD, ["LOC System Valves: Drain Chamber", "execVM 'vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_drain.sqf'; [LOCFLOOD,2]"]], "addAction", true, true] call BIS_fnc_MP;
		[[LOCFLOOD, ["Lighting: Ext.RED - LOW VIS", "execVM 'vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_red.sqf'; [LOCFLOOD, 3]"]], "addAction", true, true] call BIS_fnc_MP;
		[[LOCFLOOD, ["Lighting: Ext.GRN - MED VIS", "execVM 'vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_grn.sqf'; [LOCFLOOD, 4]"]], "addAction", true, true] call BIS_fnc_MP;
		[[LOCFLOOD, ["Lighting: Ext.BLU - HIGH VIS", "execVM 'vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_blu.sqf'; [LOCFLOOD, 5]"]], "addAction", true, true] call BIS_fnc_MP;
		[[LOCFLOOD, ["Lighting: Ext.OFF - BLACKOUT", "execVM 'vqi_frogs\VQI-CombatDiver\Lighting\vqi_sub_extlight_off.sqf'; [LOCFLOOD, 6]"]], "addAction", true, true] call BIS_fnc_MP;
		sleep 1;

		// Exterior of Sub (Hatch)
		[[LOCENTER, ["LOC: Enter Submarine", "execVM 'vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_enter.sqf'; [LOCENTER, 1]"]], "addAction", true, true] call BIS_fnc_MP;
		[[LOCENTER, ["LOC System Valves: Flood Chamber", "execVM 'vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_flood.sqf'; [LOCENTER, 2]"]], "addAction", true, true] call BIS_fnc_MP;
	};

	if (VQI_FROGS_MKR_DELETE == 1) then { sleep 1200; deleteMarker "mkrSUB"; };
	
} else {
	sleep 2;
	hint "Sorry Sir, We need a MINIMUM Operational Combat Depth of least -30 Meters Below Sea Level";
};





/////////////////////
/* NOTES:



*/