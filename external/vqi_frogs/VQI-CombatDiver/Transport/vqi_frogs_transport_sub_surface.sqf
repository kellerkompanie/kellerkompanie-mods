// Request Submarine Transport with Wet Dock Capabilities;  Min:-20mASL 
// SURFACE - Must be CLEAR of Enemy
if (VQI_FROGS_HINTS == 1) then { hint "sub_surface.sqf"; };
sleep 1;


private ["_depthCheck","_dxx","_pos","_n50","_grn","_red","_bad","_xX","_yY","_zZ","_locSUB","_mkrSUB"];


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
	
	
_dxx = 2000;	// 2km buffer SafeZone	
_pos = getPos objSUB;
_n50 = _pos nearEntities _dxx;
_grn = resistance countSide _n50;
_red = east countSide _n50;
_bad = _grn + _red;	

//_obj = nearestObjects [objSUB, [], 5000];
//_loc	= newClickSUBpu distance _obj;
	
sleep 1;


	
	
if (_depthCheck < -20) then { // Minimum Depth BELOW SEA LEVEL

	if (_bad == 0) then {
		
		// find sea surface (shallow option)
		objSUB setPosASL [position objSUB select 0, position objSUB select 1, 0];

		_xX = random 11; 			// random area
		_yY = random 11; 			// x+y=area
		_zZ = -10 + random -5; 	// z is your height   (on surface)

		
		objSUB setVectorUp [0,0,1];
		objSUB setDir (random 360);
		
		HMSProteus attachTo [objSUB,[_xX,_yY,-3.5]];	// 0

		// Mark Submarine w/ FT Depth
		//_locSUB = round (((getPosASL HMSProteus) select 2)*3.2808);
		_locSub = "(surface)";

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
		"mkrSUB" setMarkerText format [" HMS Proteus: %1",_locSUB];
		"mkrSUB" setMarkerAlpha 1;
		
		_mkrSUBr = createMarker ["mkrSUBr", getPos HMSProteus]; //
		"mkrSUBr" setMarkerShape "ELLIPSE";
		"mkrSUBr" setMarkerBrush "Border";
		"mkrSUBr" setMarkerColor "ColorBLUFOR";
		"mkrSUBr" setMarkerSize [500,500];
		//"mkrSUBr" setMarkerText " SUB";
		"mkrSUBr" setMarkerAlpha 1;
		
		
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
		
		// Add Boarding if On-Surface
		[[HMSProteus, ["HMS Proteus: Board Submarine", "execVM 'vqi_frogs\VQI-CombatDiver\Boarding\vqi_frogs_boarding_sub_interior.sqf'; [HMSPROTEUS, 1]"]], "addAction", true, true] call BIS_fnc_MP;

		
		
		
		if (VQI_FROGS_MKR_DELETE == 1) then { sleep 1200; deleteMarker "mkrSUB"; deleteMarker "mkrSUBr"; };
		
	
	} else {
		sleep 2;
		hint "NOTICE: Intel reports Enemy nearby... \n We need a minimum of 2km Buffer Zone";
	};
	
} else {
	sleep 2;
	hint "Too shallow. Sorry Sir, We need a MINIMUM Operational Depth of least -20 Meters.";
};






/////////////////////
/* NOTES:



*/