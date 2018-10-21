// Submarine Transport with Wet Dock Capabilities;  Min:-30mASL 
// SHALLOW
if (VQI_FROGS_HINTS == 1) then { hint "nav_wpD.sqf"; };
sleep 1;



private ["_start1","_xX","_yY","_zZ","_locSUB","_mkrSUB"];


subNav = false;
MapClickTravel = true;
deployedSUBLOC = true;
openMap true;






_start1 = [111, 111, 0];
_logicC = createCenter sideLogic;
_logicG = createGroup _logicC;

objSUB = _logicG createUnit ["Logic", getMarkerPos "mkrD", [], 0, "NONE"];
objSUB setPosATL (objSUB modelToWorld [0,0,-1]);
objSUB setVectorUp [0,0,1];
publicVariable "objSUB";
sleep 1;

	
deleteMarker "mkr1";
deleteMarker "mkrD";
deleteMarker "mkrS";
deleteMarker "mkrT";
deleteMarker "mkrP";
deleteMarker "mkrP1";
deleteMarker "mkrP2";


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



deleteMarker "mkrD";



sleep 1;
systemChat "Aye, Aye Sir... Shut her down!"; sleep 2;
systemChat "Prepare the Lock-Out Chamber.";
sleep 5;
hint "SDV LoadOut Options Ready. \n \n Bravo Team on stand-by to setup the SDVs if needed.";



// Marker
_mkrSUB = createMarker["mkrSUB", getPos HMSProteus];
"mkrSUB" setMarkerShape "ICON";
"mkrSUB" setMarkerType "selector_selectedMission";
"mkrSUB" setMarkerColor "ColorBlack";
"mkrSUB" setMarkerText format [" HMS Proteus: %1'ft",_locSUB];
"mkrSUB" setMarkerAlpha 0.8;
sleep 1;


// SDV-1 & SDV-2 (back of HMS Proteus)
if (!isNil "VQISDV1") then { deleteVehicle VQISDV1; };
if (!isNil "VQISDV2") then { deleteVehicle VQISDV2; };
sleep 1;
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
execVM "vqi_frogs\VQI-CombatDiver\Navigation\deploy_loc_menusetup.sqf";
sleep 1;

// 
HMSProteusVal enableSimulation true;







[[LOCLAPTOP2, ["SDV L - Loadout: Standard", "execVM 'vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_l_gear_standard.sqf'; [LOCLAPTOP2, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["SDV R - Loadout: Standard", "execVM 'vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_r_gear_standard.sqf'; [LOCLAPTOP2, 4]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["-", "hint ' '; [LOCLAPTOP2, 5]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["SDV L - Loadout: Demolition", "execVM 'vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_l_gear_demo.sqf'; [LOCLAPTOP2, 6]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["SDV R - Loadout: Demolition", "execVM 'vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_r_gear_demo.sqf'; [LOCLAPTOP2, 7]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["-", "hint ' '; [LOCLAPTOP2, 8]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["SDV L - Loadout: Explosives", "execVM 'vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_l_gear_explosives.sqf'; [LOCLAPTOP2, 9]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["SDV R - Loadout: Explosives", "execVM 'vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_r_gear_explosives.sqf'; [LOCLAPTOP2, 10]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["-", "hint ' '; [LOCLAPTOP2, 11]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["SDV L - Loadout: Anti-Vehicle", "execVM 'vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_l_gear_antivehicle.sqf'; [LOCLAPTOP2, 12]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["SDV R - Loadout: Anti-Vehicle", "execVM 'vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_r_gear_antivehicle.sqf'; [LOCLAPTOP2, 13]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["-", "hint ' '; [LOCLAPTOP2, 14]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["SDV L - Loadout: Scout/Sniper", "execVM 'vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_l_gear_scoutsniper.sqf'; [LOCLAPTOP2, 15]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["SDV R - Loadout: Scout/Sniper", "execVM 'vqi_frogs\VQI-CombatDiver\SDV\vqi_sdv_r_gear_scoutsniper.sqf'; [LOCLAPTOP2, 16]"]], "addAction", true, true] call BIS_fnc_MP;
[[LOCLAPTOP2, ["--------------------", "hint ' '; [LOCLAPTOP2, 17]"]], "addAction", true, true] call BIS_fnc_MP;











deleteMarker "mkrSTART";

if (VQI_FROGS_MKR_DELETE == 1) then { sleep 1200; deleteMarker "mkrSUB"; };
	






/////////////////////
/* NOTES:



*/