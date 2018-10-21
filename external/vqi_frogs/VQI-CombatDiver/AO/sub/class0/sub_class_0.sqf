// Gen II SDV (upgraded w/ sonar)
// Scale DEPTH by Sub Type
if (VQI_FROGS_HINTS == 1) then { hint "sub_class_0.sqf"; };
sleep 1;




private ["_location","_subIntel","_trgSONAR","_subDepth","_subCrew1","_subCrew2","_subType","_subGuy1","_subGuy2","_subGuy3","_subGuy4","_subGuy5","_subGuy6","_subHull","_trgAO"];

_location = _this select 0;
_subIntel = _this select 1;

// SDV: G2
_trgSONAR = 1000;		// 1km
_subDepth = 0;		// surface


// Group X
_subCrew1 = createGroup EAST;
_subCrew2 = createGroup EAST;

//_subType = [_location, _rDirSub, "O_SDV_01_F", _subCrew1] call BIS_fnc_spawnVehicle;

// Spawn Sub Crew & Combat Divers (BIS default NOT work well)
"O_Diver_F" createUnit [_location, _subCrew1, "_subGuy1 = this", 0.3];
"O_Diver_F" createUnit [_location, _subCrew1, "_subGuy2 = this", 0.3];

// Set Combat Divers
if (random 100 < 90) then { "O_Diver_F" createUnit [_location, _subCrew2, "_subGuy3 = this", 0.1]; _subGuy3 setPos (_subGuy3 modelToWorld [0,0,(random -45)]); };
if (random 100 < 70) then { "O_Diver_F" createUnit [_location, _subCrew2, "_subGuy4 = this", 0.1]; _subGuy4 setPos (_subGuy4 modelToWorld [0,0,(random -45)]); };
if (random 100 < 50) then { "O_Diver_F" createUnit [_location, _subCrew2, "_subGuy5 = this", 0.1]; _subGuy5 setPos (_subGuy5 modelToWorld [0,0,(random -45)]); };
if (random 100 < 20) then { "O_Diver_F" createUnit [_location, _subCrew2, "_subGuy6 = this", 0.1]; _subGuy6 setPos (_subGuy6 modelToWorld [0,0,(random -45)]); };
sleep 1;

// Dive Dive Dive!!!			scale 1:0.5
if (_subIntel == 90) then { _subDepth =  -2; };	// -7'ft (shallow periscope depth)
if (_subIntel == 80) then { _subDepth =  -5; };
if (_subIntel == 70) then { _subDepth = -10; };
if (_subIntel == 60) then { _subDepth = -15; };
if (_subIntel == 50) then { _subDepth = -20; };
if (_subIntel == 40) then { _subDepth = -25; };
if (_subIntel == 30) then { _subDepth = -30; };
if (_subIntel == 20) then { _subDepth = -35; };
if (_subIntel == 10) then { _subDepth = -40; };	// -130'ft (max operating depth)
sleep 1;


// Spawn & Set Sub
_subType = "O_SDV_01_F" createVehicle _location; sleep 2;
_subType setPos (_subType modelToWorld [0,0,_subDepth]);

// Sub Crew
_subGuy1 assignAsDriver _subType;
_subGuy2 assignAsGunner _subType;

[_subGuy1] orderGetIn true;
[_subGuy2] orderGetIn true;
sleep 1;







// SONAR Trigger
_trgAO = createTrigger ["EmptyDetector", _location];				// type, location 											// Location
_trgAO setTriggerArea [_trgSONAR, _trgSONAR, 0, false, 1000];		// x, y, angle, rectangle, Z 									// SONAR Range
_trgAO setTriggerActivation ["ANY", "PRESENT", true];				// who, how, repeat on/off 										// Detect
_trgAO setTriggerTimeout [15, 30, 60, true];						// min, ave, max, interupt 										// SONAR Tech or CREW Speed
_trgAO setTriggerStatements ["({_x in thisList} count (playableUnits + switchableUnits) > 0) && ((getPosASL Player select 2) < -3)",	// SONAR Tech (below water)
					format["[%1] execVM ""vqi_frogs\VQI-CombatDiver\AO\sub\class0\sub_class_0_trg_sonar.sqf""",_subDepth],			// Response Trigger File
					""]; 																								// Exit Trigger Area
					
					
					
					
					
					
					
///////////////
/* NOTES:

//_subType = [_location, _rDirSub, "O_SDV_01_F", _subCrew] call BIS_fnc_spawnVehicle;		-- NOT WORK, Missing Gear and ONLY 2 Units?
//_subHull setPos (_subHull modelToWorld [0,0,_subDepth]);

*/