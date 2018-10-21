// All-In-One MENU Setup...Only 1 Key to memorize!
// https://resources.bisimulations.com/w/index.php?title=DIK_KeyCodes



private ["_menu0","_menu1","_menu2","_menu3","_menu4",
		"_menuS"];

_menu0 = player addAction ["----------------"," "];
_menu1 = player addAction ["INTEL - AO: SUBMARINES","vqi_frogs\VQI-CombatDiver\AO\sub\vqi_frogs_ao_sub_mkrs_intel.sqf"];
_menu2 = player addAction ["INTEL - AO: NAVAL OPs","vqi_frogs\VQI-CombatDiver\AO\nav\vqi_frogs_ao_nav_mkrs_intel.sqf"];
_menuS = player addAction ["----------------"," "];

// Stingray
if ("VQI_VEST_Stingray" == Vest player) then {
_menu3 = player addAction ["Stingray ReBreather - SYSTEM ON","vqi_frogs\VQI-CombatDiver\Equipment\Oxygen\Stingray\vqi_frogs_stingray_system.sqf"]; sleep 5; player removeAction _menu3; };
_menu4 = player addAction ["Stingray ReBreather - Dive/Surface Valve: DSV","vqi_frogs\VQI-CombatDiver\Equipment\Oxygen\Stingray\vqi_frogs_stingray_gasmix.sqf"];


sleep 10;


player removeAction _menu0;
player removeAction _menu1;
player removeAction _menu2;
player removeAction _menuS;
player removeAction _menu4;



//////////////////////////
/* NOTES:

removeAllActions player;    ???

//if (player distance LOCLOCK < 3) then { _menu0 = player addAction ["Open Hatch: Disembark","vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_disembark_sub.sqf"]; sleep 10; player removeAction _menu0; };

*/