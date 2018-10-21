// Start HMS Proteus & LOC Systems
//
if (VQI_FROGS_HINTS == 1) then { hint "start_hms_proteus.sqf"; };
sleep 1;


private ["_start","_logicC","_logicS","_start3"];


_start3 = [333,333,0];


// protoType x valve 
HMSProteusVal = "B_SDV_01_F" createVehicle _start3;
HMSProteusVal allowDamage false;
HMSProteusVal setPosASL [position HMSProteusVal select 0, position HMSProteusVal select 1, -5];
sleep 1;

// Lockout Chamber - test (placeholder)
HMSProteusLOC = "VQI_DDS_LockoutChamber" createVehicle _start3;
HMSProteusLOC allowDamage false;
HMSProteusLOC attachTo [HMSProteusVal,[0,0,5]]; 
HMSProteusLOC setVectorUp [0,0,1];
publicVariable "HMSProteusLOC";



sleep 30; // delay for CORE Ops Centre (hotfix)


// MENU Object
VQI_FROGS_MENUOBJECT = missionNamespace getVariable [VQI_FROGS_MAPOBJECT, objNull];
sleep 1;

// Object Menu (player placed)
[[VQI_FROGS_MENUOBJECT, ["--------------------", "hint ''; [VQI_FROGS_MENUOBJECT, 0]"]], "addAction", true, true] call BIS_fnc_MP;
[[VQI_FROGS_MENUOBJECT, ["HMS Proteus: Board Submarine", "[player] execVM 'vqi_frogs\VQI-CombatDiver\Boarding\vqi_frogs_boarding.sqf'; [VQI_FROGS_MENUOBJECT, 1]"]], "addAction", true, true] call BIS_fnc_MP;
[[VQI_FROGS_MENUOBJECT, ["--------------------", "hint ' '; [VQI_FROGS_MENUOBJECT, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[VQI_FROGS_MENUOBJECT, ["INTEL - AO: SUBMARINES", "execVM 'vqi_frogs\VQI-CombatDiver\AO\Sub\vqi_frogs_ao_sub_mkrs_intel.sqf'; [VQI_FROGS_MENUOBJECT, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[VQI_FROGS_MENUOBJECT, ["INTEL - AO: NAVAL OPs", "execVM 'vqi_frogs\VQI-CombatDiver\AO\Nav\vqi_frogs_ao_nav_mkrs_intel.sqf'; [VQI_FROGS_MENUOBJECT, 4]"]], "addAction", true, true] call BIS_fnc_MP;
[[VQI_FROGS_MENUOBJECT, ["INTEL - AO: WATER MINES", "execVM 'vqi_fuse\VQI-EOD\AO\watermines\vqi_fuse_ao_watermine_mkrs_intel.sqf'; [VQI_FROGS_MENUOBJECT, 5]"]], "addAction", true, true] call BIS_fnc_MP;
[[VQI_FROGS_MENUOBJECT, ["INTEL - AO: SURF MINES", "execVM 'vqi_fuse\VQI-EOD\AO\surfzones\vqi_fuse_ao_surfzone_mkrs_intel.sqf'; [VQI_FROGS_MENUOBJECT, 6]"]], "addAction", true, true] call BIS_fnc_MP;
[[VQI_FROGS_MENUOBJECT, ["--------------------", "hint ' '; [VQI_FROGS_MENUOBJECT, 7]"]], "addAction", true, true] call BIS_fnc_MP;

// Build "Gear-Up" Room
execVM "vqi_frogs\VQI-CombatDiver\ReadyRoom\vqi_frogs_hmsproteus_readyroom.sqf";
sleep 1;

HMSProteusVal enableSimulation false;








//////////////////////////////////////////////////////////////
// HMS Proteus Submarine - needed for Camera EFX
_start = [0,0,0];
_logicC = createCenter sideLogic;
_logicS = createGroup _logicC;

objCAM = _logicS createUnit ["Logic", _start, [], 0, "NONE"];
objCAM setPosASL [position objCAM select 0, position objCAM select 1, 0];
objCAM setVectorUp [0,0,1];
publicVariable "objCAM";
sleep 1;

HMSProteusS = "Submarine_01_F" createVehicle _start;
HMSProteusS allowDamage false;
publicVariable "HMSProteus";
HMSProteusS attachTo [objCAM,[0,0,-15]];

///////////////////////////////////////////////////////////////









sleep 1;
if (VQI_FROGS_HINTS == 1) then { hint "start_hms_proteus.sqf -END-"; };

///////////////////
/* NOTES:




*/