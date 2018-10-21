// Player gets PINGED by - Attack Submarine --- U-Class
//
if (VQI_FROGS_HINTS == 1) then { hint "sub_class_4_trg_sonar.sqf"; };
sleep 1;

//trgAO_SUB2 = 0;



private ["_location","_subDepth","_oDivers","_opDiver","_heliQRF","_targetP","_targetZ1","_targetZ2","_targetZP",
		"_subCrew1","_subCrew2","_subGuy1","_subGuy2","_subGuy3","_subGuy4","_subGuy5","_subGuy6","_subType","_driverX"];

_location = _this select 0;
_subDepth = _this select 1;


// Operating Depth
if (VQI_FROGS_HINTS == 1) then { hint format ["Starting Operating Depth: %1",_subDepth]; sleep 3; hint "- Pinged by CLASS 4 - \n \n U-Class \n Attack"; };
sleep 3;




// Player & Random Depths
_targetP = getPos player;
_opDiver = 0;
_heliQRF = 0;

_targetZ1 = random 20;
_targetZ2 = random 20;
_targetZP = _targetZ1 - _targetZ2;

// Call Nearest Diver (if any)
_oDivers = nearestObjects [player, ["O_Diver_F"], 3000];

// Diver Intercept Player
if (count _oDivers > 0) then {
	_opDiver = _oDivers select 0; 
	_opDiver doMove _targetP;
	_opDiver swimInDepth (_targetP select 2) + (_targetZP);
};
sleep 1;

if (VQI_FROGS_HINTS == 1) then { 

	hint format ["Diver: %1",_opDiver]; sleep 2;
	hint format ["Player Depth: %1",(_targetP select 2)];
	sleep 5;
};
sleep 5;





////////////////////////////////////////////
// Deploy Divers & SDV

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




// Spawn & Set Sub
_subType = "O_SDV_01_F" createVehicle _location; sleep 2;
_subType setPos (_subType modelToWorld [0,0,_subDepth]);

// Sub Crew
_subGuy1 assignAsDriver _subType;
_subGuy2 assignAsGunner _subType;

[_subGuy1] orderGetIn true;
[_subGuy2] orderGetIn true;
sleep 10;


// SDV Intercept Player
_driverX = _subType select 0;

_subType doMove _targetP;
_driverX swimInDepth (_targetP select 2) + (_targetZP);
sleep 5;




// Call Nearest Diver (if any) - 2nd call
_oDivers = nearestObjects [player, ["O_Diver_F"], 2000];

// Diver Intercept Player
if (count _oDivers > 0) then {
	_opDiver = _oDivers select 0; 
	_opDiver doMove _targetP;
	_opDiver swimInDepth (_targetP select 2) + (_targetZP);
};






// reset Sonar
sleep 30;
//trgAO_SUB2 = 1;

sleep 1;
if (VQI_FROGS_HINTS == 1) then { hint "sub_class_4_trg_sonar.sqf -END-"; };

///////////////
/* NOTES:



*/