// Guided Missile Submarine Strike --- Kraken
//
if (VQI_FROGS_HINTS == 1) then { hint "sub_class_3_trg_guided.sqf"; };
sleep 1;





private ["_location","_rngTHAWK","_redK","_grnK","_aoKA","_gmLaunch","_gmStrike","_locStrike","_warhead",
		"_pos","_n50","_red","_grn","_bad"];



_location = _this select 0;
_gmLaunch = false; 	// default
_gmStrike = random 14;	// tubes
trgSUB_GM = 0;



// Enemy Intel modifier
_redK = EAST knowsAbout player;				// red is enemy
_grnK = INDEPENDENT knowsAbout player;		// grn is enemy

// red & grn has INTEL
_aoKA = round (_redK + _grnK);

// Loop Force modifier
if (_aoKA >= 4) then { _gmLaunch = true; };
sleep 1;



// Tamahawk Launch
if (_gmLaunch) then {

	_pos = getPos player;
	_n50 = _pos nearEntities 100;
	_grn = independent countSide _n50;
	_red = east countSide _n50;
	_bad = _grn + _red;
	

	if (_bad < 10) then {
	
		for "_i" from 0 to _gmStrike do {
		
			_locStrike = [getPos player, random 100, random 360] call BIS_fnc_relPos;
			sleep 1;
			
			_warhead = createVehicle ["Sh_82mm_AMOS", [_locStrike select 0, _locStrike select 1, 200], [], 0, "NONE"];
			_warhead setVelocity [0, 0,-10];
			sleep 2;
		};
	};
};




// reset trg
trgSUB_GM = 1;



sleep 1;
if (VQI_FROGS_HINTS == 1) then { hint "sub_class_3_trg_guided.sqf -END-"; };

///////////////
/* NOTES:



*/