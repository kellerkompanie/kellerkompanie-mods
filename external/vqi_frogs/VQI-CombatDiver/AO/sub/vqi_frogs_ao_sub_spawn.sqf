// Spawn Submarines
//
if (VQI_FROGS_HINTS == 1) then { hint "ao_sub_spawn.sqf"; };


private ["_location","_subClass","_subDepth"];

_location = _this select 0;
_subClass = _this select 1;
_subDepth = _this select 2;


hint format ["Sub: %1 \n Depth: %2",_subClass,_subDepth];
sleep 2;



if (_subClass == 0001) then { [_location,_subDepth] execVM "vqi_frogs\VQI-CombatDiver\AO\sub\class0\sub_class_0.sqf"; };	// SDV: G2 ----- (upgraded w/ sonar)
if (_subClass == 1000) then { [_location,_subDepth] execVM "vqi_frogs\VQI-CombatDiver\AO\sub\class1\sub_class_1.sqf"; };	// Type 1 ------ General (older tech)
if (_subClass == 2000) then { [_location,_subDepth] execVM "vqi_frogs\VQI-CombatDiver\AO\sub\class2\sub_class_2.sqf"; };	// Crimson II -- (newer tech) ...w/ LOC
if (_subClass == 3000) then { [_location,_subDepth] execVM "vqi_frogs\VQI-CombatDiver\AO\sub\class3\sub_class_3.sqf"; };	// Kraken ------ Hunter-Killer!!!
if (_subClass == 4000) then { [_location,_subDepth] execVM "vqi_frogs\VQI-CombatDiver\AO\sub\class4\sub_class_4.sqf"; };	// U-Class ----- Attack Submarine
if (_subClass == 5000) then { [_location,_subDepth] execVM "vqi_frogs\VQI-CombatDiver\AO\sub\class5\sub_class_5.sqf"; };	// Scimitar ---- Ballistic/Cruise
if (_subClass == 6000) then { [_location,_subDepth] execVM "vqi_frogs\VQI-CombatDiver\AO\sub\class6\sub_class_6.sqf"; };	// Djinn ------- Surveillence Platform


///////////////
/* NOTES:



*/