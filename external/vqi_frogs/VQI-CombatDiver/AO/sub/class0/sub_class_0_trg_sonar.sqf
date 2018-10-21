// Player gets PINGED by Gen II SDV
//
if (VQI_FROGS_HINTS == 1) then { hint "sub_class_0_trg_sonar.sqf"; };
sleep 3;

//trgAO_SUB1 = 0;



private ["_subDepth","_gen2SDV","_oDivers","_opDiver","_driverX","_targetP","_targetZ1","_targetZ2","_targetZP"];

_subDepth = _this select 0;


// Operating Depth
if (VQI_FROGS_HINTS == 1) then { hint format ["Starting Operating Depth: %1",_subDepth]; sleep 3; hint "- Pinged by CLASS 0 - \n \n SDV: G2 \n Midget"; };
sleep 3;




// Player & Random Depths
_targetP = getPos player;
_opDiver = 0;

_targetZ1 = random 20;
_targetZ2 = random 20;
_targetZP = _targetZ1 - _targetZ2;



// Find Nearest SDV & Diver
_gen2SDV = nearestObjects [player, ["O_SDV_01_F"], 1000];
_oDivers = nearestObjects [player, ["O_Diver_F"], 1000];

// SDV Intercept Player
_driverX = _gen2SDV select 0;

_gen2SDV doMove _targetP;
_driverX swimInDepth (_targetP select 2) + (_targetZP);


// Diver Intercept Player
if (count _oDivers > 0) then {
	_opDiver = _oDivers select 0; 
	_opDiver doMove _targetP;
	_opDiver swimInDepth (_targetP select 2) + (_targetZP);
};







if (VQI_FROGS_HINTS == 1) then { 

	hint format ["SDV: %1 \n Diver: %2",_driverX,_opDiver]; sleep 2;
	hint format ["Player Depth: %1",(_targetP select 2)];
};
sleep 30;




// reset Sonar
//trgAO_SUB1 = 1;

sleep 1;
if (VQI_FROGS_HINTS == 1) then { hint "sub_class_0_trg_sonar.sqf -END-"; };

///////////////
/* NOTES:



*/