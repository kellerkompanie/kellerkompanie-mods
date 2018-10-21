// Submarine Transport with Wet Dock Capabilities;  Min:-30mASL 
// SHALLOW
if (VQI_FROGS_HINTS == 1) then { hint "deploy_sub_shallow.sqf"; };
sleep 1;



private ["_start1","_xX","_yY","_zZ","_locSUB","_mkrSUB"];



_start1 = [111, 111, 0];
_logicC = createCenter sideLogic;
_logicG = createGroup _logicC;

objSUB = _logicG createUnit ["Logic", posSUB10, [], 0, "NONE"];
objSUB setPosATL (objSUB modelToWorld [0,0,-1]);
objSUB setVectorUp [0,0,1];
publicVariable "objSUB";
sleep 1;

	



objSUB setPosASL [position objSUB select 0, position objSUB select 1, 0];

_xX = random 10 + (random -10);	// X
_yY = random 10 + (random -10); 	// Y
_zZ = -10 + (random -10); 			// Z   (10-20m below surface)


objSUB setVectorUp [0,0,1];
objSUB setDir (random 360);


// HMS Proteus Submarine
if (!isNil "HMSProteus") then { deleteVehicle HMSProteus; sleep 1; };

HMSProteus = "Submarine_01_F" createVehicle _start1;
HMSProteus allowDamage false;
publicVariable "HMSProteus";
HMSProteus attachTo [objSUB,[_xX,_yY,_zZ]];


// Mark Submarine w/ FT Depth
_locSUB = round (((getPosASL HMSProteus) select 2)*3.2808);







sleep 2;
hint "Aye, Aye Sir... Shut her down! \n Prepare the Lock-Out Chamber";
sleep 2;




// Marker
_mkrSUB = createMarker["mkrSUB", getPos HMSProteus];
"mkrSUB" setMarkerShape "ICON";
"mkrSUB" setMarkerType "selector_selectedMission";
"mkrSUB" setMarkerColor "ColorBlack";
"mkrSUB" setMarkerText format [" HMS Proteus: %1'ft",_locSUB];
"mkrSUB" setMarkerAlpha 0.8;
sleep 1;


// SDV-1 & SDV-2 (back of HMS Proteus)
VQISDV1 = "B_SDV_01_F" createVehicle _start1;
VQISDV2 = "B_SDV_01_F" createVehicle _start1;
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
VQISDV1 animate ["Door_1_1", 0]; VQISDV1 animate ["Door_2_1", 0]; // DF/CF
VQISDV1 animate ["Door_1_2", 0]; VQISDV1 animate ["Door_2_2", 0]; // DR/CR
VQISDV2 animate ["Door_1_1", 0]; VQISDV2 animate ["Door_2_1", 0]; // DF/CF
VQISDV2 animate ["Door_1_2", 0]; VQISDV2 animate ["Door_2_2", 0]; // DR/CR

execVM "vqi_frogs\VQI-CombatDiver\Navigation\deploy_sub_sdvs.sqf";
///////////////////////////////


SubPlotted = true;
publicVariable "SubPlotted";
sleep 1;


// Add Menus & Controls
execVM "vqi_frogs\VQI-CombatDiver\Navigation\deploy_sub_menusetup.sqf";
sleep 1;

// 
HMSProteusVal enableSimulation true;










if (VQI_FROGS_MKR_DELETE == 1) then {

	sleep 1200;
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
	
	deleteMarker "mkrSUB";
};
	






/////////////////////
/* NOTES:



*/