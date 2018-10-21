// Surveillence Platform --- Djinn
// Scale DEPTH by Sub Type
if (VQI_FROGS_HINTS == 1) then { hint "sub_class_6.sqf"; };
sleep 1;




private ["_location","_subIntel","_rngSONAR","_trgGuided","_subDepth","_subC2bad","_sub""_trgAO","_trgAO1"];

_location = _this select 0;
_subIntel = _this select 1;


// Djinn
_rngSONAR = 7000;		// 7km
_subDepth = 0;		// surface
_subC2bad = "EAST D";	// Detected by EAST


_sub = "VQI_SUB_Class6" createVehicle _location;

// Dive Dive Dive!!!			scale 1:3
if (_subIntel == 90) then { _subDepth =   -5; };	// -15'ft (shallow periscope depth)
if (_subIntel == 80) then { _subDepth =  -10; };
if (_subIntel == 70) then { _subDepth =  -40; };
if (_subIntel == 60) then { _subDepth =  -70; };
if (_subIntel == 50) then { _subDepth = -100; };
if (_subIntel == 40) then { _subDepth = -130; };
if (_subIntel == 30) then { _subDepth = -160; };
if (_subIntel == 20) then { _subDepth = -190; };
if (_subIntel == 10) then { _subDepth = -240; };	// -787'ft (max operating depth)
sleep 1;











// SONAR Trigger
_trgAO = createTrigger ["EmptyDetector", _location];						// type, location 										// Location
_trgAO setTriggerArea [_rngSONAR, _rngSONAR, 0, false, 1000];				// x, y, angle, rectangle, Z 								// SONAR Range
_trgAO setTriggerActivation ["ANY", "PRESENT", true];						// who, how, repeat on/off 									// Detect
_trgAO setTriggerTimeout [30, 60, 120, true];							// min, ave, max, interupt 									// SONAR Tech or CREW Speed
_trgAO setTriggerStatements ["({_x in thisList} count (playableUnits + switchableUnits) > 0) && ((getPosASL Player select 2) < -3)",		// SONAR Tech (below water)
						format["[%1] execVM ""vqi_frogs\VQI-CombatDiver\AO\sub\class6\sub_class_6_trg_sonar.sqf""",_subDepth],			// Response Trigger File
						""]; 																								// Exit Trigger Area
sleep 2;






///////////////
/* NOTES:




*/