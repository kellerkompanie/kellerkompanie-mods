// Hunter-Killer --- Kraken
// Scale DEPTH by Sub Type
if (VQI_FROGS_HINTS == 1) then { hint "sub_class_3.sqf"; };
sleep 1;




private ["_location","_subIntel","_rngSONAR","_rngTHAWK","_trgGuided","_subDepth","_subC2bad","_sub","_trgAO","_trgAO1"];

_location = _this select 0;
_subIntel = _this select 1;

// Kraken
_rngSONAR = 4000;		// 4km
_rngTHAWK = 4000;		// Tamahawk Missile
_subDepth = 0;		// surface
_subC2bad = "EAST D";	// Detected by EAST
trgSUB_GM = 1;		// Set Trigger


_sub = "VQI_SUB_Class3" createVehicle _location;

// Dive Dive Dive!!!			scale 1:2
if (_subIntel == 90) then { _subDepth =   -5; };	// -15'ft (shallow periscope depth)
if (_subIntel == 80) then { _subDepth =  -10; };
if (_subIntel == 70) then { _subDepth =  -40; };
if (_subIntel == 60) then { _subDepth =  -60; };
if (_subIntel == 50) then { _subDepth =  -80; };
if (_subIntel == 40) then { _subDepth = -100; };
if (_subIntel == 30) then { _subDepth = -120; };
if (_subIntel == 20) then { _subDepth = -140; };
if (_subIntel == 10) then { _subDepth = -160; };	// -524'ft (max operating depth)
sleep 1;











// SONAR Trigger
_trgAO = createTrigger ["EmptyDetector", _location];						// type, location 										// Location
_trgAO setTriggerArea [_rngSONAR, _rngSONAR, 0, false, 1000];				// x, y, angle, rectangle, Z 								// SONAR Range
_trgAO setTriggerActivation ["ANY", "PRESENT", true];						// who, how, repeat on/off 									// Detect
_trgAO setTriggerTimeout [30, 60, 120, true];							// min, ave, max, interupt 									// SONAR Tech or CREW Speed
_trgAO setTriggerStatements ["({_x in thisList} count (playableUnits + switchableUnits) > 0) && ((getPosASL Player select 2) < -3)",		// SONAR Tech (below water)
						format["[%1] execVM ""vqi_frogs\VQI-CombatDiver\AO\sub\class3\sub_class_3_trg_sonar.sqf""",_subDepth],			// Response Trigger File
						""]; 																								// Exit Trigger Area
sleep 2;


// Guided Missiles Trigger
_trgAO1 = createTrigger ["EmptyDetector", _location];						// type, location 										// Location
_trgAO1 setTriggerArea [_rngTHAWK, _rngTHAWK, 0, false, 1000];				// x, y, angle, rectangle, Z 								// Guided Missile Range
_trgAO1 setTriggerActivation ["ANY", _subC2bad, true];					// who, how, repeat on/off 									// Detect
_trgAO1 setTriggerTimeout [60, 300, 600, true];							// min, ave, max, interupt 									// Strike Response Timing
_trgAO1 setTriggerStatements ["({_x in thisList} count (playableUnits + switchableUnits) > 0) && ((getPosASL Player select 2) > 2) && (trgSUB_GM == 1)",	// trg Reset ???
						format["[%1] execVM ""vqi_frogs\VQI-CombatDiver\AO\sub\class3\sub_class_3_trg_guided.sqf""",_location],			// Response Trigger File
						""]; 																								// Exit Trigger Area





///////////////
/* NOTES:




*/