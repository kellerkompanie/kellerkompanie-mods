// Player gets PINGED by - Ballistic Submarine --- Scimitar
//
if (VQI_FROGS_HINTS == 1) then { hint "sub_class_5_trg_sonar.sqf"; };
sleep 1;

//trgAO_SUB2 = 0;



private ["_subDepth","_oDivers","_opDiver","_heliQRF","_targetP","_targetZ1","_targetZ2","_targetZP"];



_subDepth = _this select 0;


// Operating Depth
if (VQI_FROGS_HINTS == 1) then { hint format ["Starting Operating Depth: %1",_subDepth]; sleep 3; hint "- Pinged by CLASS 5 - \n \n Scimitar \n Ballistic Submarine"; };
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


/*
// QRF Call for Help/Investigate - ??%
if (random 100 < 60) then { 

	if (VQI_FROGS_HINTS == 1) then { hint "QRF Divers Dispatched"; sleep 2; };
	execVM "vqi_frogs\VQI-CombatDiver\AO\sub\class1\sub_class_1_trg_sonar_qrf.sqf"; 
	
} else {
	if (VQI_FROGS_HINTS == 1) then { hint "-no heli divers call-"; sleep 2; };
};
sleep 1;
*/














// reset Sonar
sleep 30;
//trgAO_SUB2 = 1;

sleep 1;
if (VQI_FROGS_HINTS == 1) then { hint "sub_class_5_trg_sonar.sqf -END-"; };

///////////////
/* NOTES:



*/