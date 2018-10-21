// General (older tech) --- Type 1
// Scale DEPTH by Sub Type
if (VQI_FROGS_HINTS == 1) then { hint "sub_class_1.sqf"; };
sleep 1;




private ["_location","_subIntel","_trgSONAR","_subDepth","_sub","_trgAO"];

_location = _this select 0;
_subIntel = _this select 1;

// Type 1
_trgSONAR = 2000;		// 2km
_subDepth = 0;		// surface


_sub = "VQI_SUB_Class1" createVehicle _location;

// Dive Dive Dive!!!			scale 1:1
if (_subIntel == 90) then { _subDepth =  -5; };	// -15'ft (shallow periscope depth)
if (_subIntel == 80) then { _subDepth = -10; };
if (_subIntel == 70) then { _subDepth = -20; };
if (_subIntel == 60) then { _subDepth = -30; };
if (_subIntel == 50) then { _subDepth = -40; };
if (_subIntel == 40) then { _subDepth = -50; };
if (_subIntel == 30) then { _subDepth = -60; };
if (_subIntel == 20) then { _subDepth = -70; };
if (_subIntel == 10) then { _subDepth = -80; };	// -262'ft (max operating depth)
sleep 1;









//trgAO_SUB2 = 1; // trg setup

// SONAR Trigger
_trgAO = createTrigger ["EmptyDetector", _location];						// type, location 										// Location
_trgAO setTriggerArea [_trgSONAR, _trgSONAR, 0, false, 1000];				// x, y, angle, rectangle, Z 								// SONAR Range
_trgAO setTriggerActivation ["ANY", "PRESENT", true];						// who, how, repeat on/off 									// Detect
_trgAO setTriggerTimeout [30, 60, 120, true];							// min, ave, max, interupt 									// SONAR Tech or CREW Speed
_trgAO setTriggerStatements ["({_x in thisList} count (playableUnits + switchableUnits) > 0) && ((getPosASL Player select 2) < -3)",		// SONAR Tech (below water)
						format["[%1] execVM ""vqi_frogs\VQI-CombatDiver\AO\sub\class1\sub_class_1_trg_sonar.sqf""",_subDepth],			// Response Trigger File
						""]; 																								// Exit Trigger Area








///////////////
/* NOTES:




*/