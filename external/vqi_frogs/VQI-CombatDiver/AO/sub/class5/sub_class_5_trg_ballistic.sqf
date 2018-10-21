// Ballistic Missile Submarine Strike --- Scimitar
// Strike ONLY Cities, Towns, etc
if (VQI_FROGS_HINTS == 1) then { hint "sub_class_5_trg_ballistic.sqf"; };
sleep 1;





private ["_location","_redK","_grnK","_aoKA","_bmLaunch","_bmStrike","_locStrike","_warhead","_pos","_n50","_red","_grn","_bad",
		"_nearestC","_nearestL","_nearestX","_nearestY","_nearestT"];



_location = _this select 0;
_bmLaunch = false; 	// default
_bmStrike = 6;		// tubes
trgSUB_BM = 0;


//Search for nearest X objects
_nearestC = ["NameCityCapital","NameCity","NameVillage"] call BIS_fnc_selectRandom;
_nearestL = nearestLocation [getPos player, _nearestC];

_nearestX = getPos _nearestL select 0;
_nearestY = getPos _nearestL select 1;
_nearestT = [_nearestX, _nearestY, 0];


// Enemy Intel modifier
_redK = EAST knowsAbout player;				// red is enemy
_grnK = INDEPENDENT knowsAbout player;		// grn is enemy

// red & grn has INTEL
_aoKA = round (_redK + _grnK);

// Loop Force modifier
if (_aoKA >= 4) then { _bmLaunch = true; };
sleep 1;



// Trident II Missiles
if (_bmLaunch) then {
	
	_dist = _nearestT distance2D _location;
	
	if (_dist < 10000) then {
	
		_pos = _nearestT;
		_n50 = _pos nearEntities 200;
		_grn = independent countSide _n50;
		_red = east countSide _n50;
		_bad = _grn + _red;
		

		if (_bad < 10) then {
		
			for "_i" from 1 to _bmStrike do {
			
				_locStrike = [_nearestT, random 200, random 360] call BIS_fnc_relPos;
				sleep 1;
				
				_warhead = createVehicle ["Sh_155mm_AMOS", [_locStrike select 0, _locStrike select 1, 200], [], 0, "NONE"];
				_warhead setVelocity [0, 0,-10];
				sleep 2;
			};
		};
	};
};




// reset trg
trgSUB_BM = 1;



sleep 1;
if (VQI_FROGS_HINTS == 1) then { hint "sub_class_5_trg_ballistic.sqf -END-"; };

///////////////
/* NOTES:



*/