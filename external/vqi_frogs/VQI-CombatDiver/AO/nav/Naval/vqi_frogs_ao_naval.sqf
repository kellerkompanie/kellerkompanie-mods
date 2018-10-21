//  Spawn Naval Units
//  
if (VQI_FROGS_HINTS == 1) then { hint "ao_naval.sqf"; };
sleep 1;


private ["_fSize","_aoLOC","_aoNAV","_redK","_grnK","_aoKA","_aoRG","_deploy","_rNum","_rDir","_pBIS","_nType","_rVehicle","_pVehicle","_eVehicle","_enemyNaval"];
		

		
_fSize = _this select 0;
_aoLOC = _this select 1;
_nType = 1; // default



// Force Size modifier
_aoNAV = _fSize / 1000;

// Enemy Intel modifier
_redK = EAST knowsAbout player;				// red is enemy
_grnK = INDEPENDENT knowsAbout player;		// grn is enemy

// red & grn has INTEL
_aoKA = round (_redK + _grnK);
_aoRG = 4; // limit

// Loop Force Modifier
_deploy = _aoNAV; 				// default
if (_aoKA > 0) then { _deploy = _aoNAV * ((random _aoKA) +1); };
if (_aoKA > 4) then { _deploy = _aoNAV * ((random _aoRG) +1); };

if (VQI_FROGS_HINTS == 1) then { 	// debug info
	hint format ["Force Index: %1 \n \n RED Intel: %2 \n GRN Intel: %3 \n INTEL: %4 \n \n Deploy Loop: %5",_aoNAV,_redK,_grnK,_aoKA,_deploy]; 
	sleep 5;
};






for "_i" from 1 to _deploy do {

	_rNum = random 100;
	_rDir = random 360;

	// [center, min, max, object, water-mode, gradient, shore, blacklist, default]
	_pBIS = [_aoLOC, 1, 500, 30, 2, 0, 0] call BIS_fnc_findSafePos;	// player or trg center?
	sleep 0.2;


	// Weighted Probability
	if ((_rNum > 0 ) && (_rNum < 45)) 	then { _nType = 1; };	// 45% Transports, Gunboats, etc
	if ((_rNum > 45) && (_rNum < 75)) 	then { _nType = 2; };	// 30% Gunboats, CRRCs, etc
	if ((_rNum > 75) && (_rNum < 85)) 	then { _nType = 3; };	// 10% CRRCs & Combat Divers
	if ((_rNum > 85) && (_rNum < 95)) 	then { _nType = 4; };	// 10% SDVs
	if ((_rNum > 95) && (_rNum < 99)) 	then { _nType = 5; };	//  5% APC (amphibious)


	// Standard Naval Ops - Gunboats & Divers
	/////////////////////////////////////////////////////////////
	if (VQI_FROGS_AO_NAV_SIDE == 1) then { // RED - OPFOR - CSAT

		_enemyNaval = createGroup EAST;
		
		if (_nType == 1) then { _rVehicle = "O_Boat_Armed_01_hmg_F";		VQI_FROGS_AO_NAV_SIDE_CARGO = 110; };	// Speedboat HMG
		if (_nType == 2) then { _rVehicle = "O_Boat_Armed_01_hmg_F";		VQI_FROGS_AO_NAV_SIDE_CARGO = 120; };	// Speedboat HMG
		if (_nType == 3) then { _rVehicle = "O_Boat_Transport_01_F";		VQI_FROGS_AO_NAV_SIDE_CARGO = 130; };  	// Assault Boat CRRC
		if (_nType == 4) then { _rVehicle = "O_SDV_01_F";				VQI_FROGS_AO_NAV_SIDE_CARGO = 130; };	// SDV
		if (_nType == 5) then { _rVehicle = "O_APC_Wheeled_02_rcws_F";		VQI_FROGS_AO_NAV_SIDE_CARGO = 110; };	// 1.MSE-3 Marid
	};
	
	
	//////////////////////////////////////////////////////////
	if (VQI_FROGS_AO_NAV_SIDE == 2) then { // GRN - IND - AAF

		_enemyNaval = createGroup RESISTANCE;
		
		if (_nType == 1) then { _rVehicle = "I_Boat_Armed_01_minigun_F";	VQI_FROGS_AO_NAV_SIDE_CARGO = 210; };	// Speedboat Minigun
		if (_nType == 2) then { _rVehicle = "I_Boat_Armed_01_miningun_F";	VQI_FROGS_AO_NAV_SIDE_CARGO = 220; };	// Speedboat Minigun
		if (_nType == 3) then { _rVehicle = "I_Boat_Transport_01_F";		VQI_FROGS_AO_NAV_SIDE_CARGO = 230; }; 	// Assualt Boat CRRC
		if (_nType == 4) then { _rVehicle = "I_SDV_01_F";				VQI_FROGS_AO_NAV_SIDE_CARGO = 230; };	// SDV
		if (_nType == 5) then { _rVehicle = "I_APC_Wheeled_03_cannon_F";	VQI_FROGS_AO_NAV_SIDE_CARGO = 210; };	// 1.AFV-4 Gorgon

	};
	
	
	///////////////////////////////////////////////////////////
	if (VQI_FROGS_AO_NAV_SIDE == 3) then { // BLU - BLU - NATO

		_enemyNaval = createGroup WEST;
		
		if (_nType == 1) then { _rVehicle = "B_Boat_Armed_01_minigun_F";	VQI_FROGS_AO_NAV_SIDE_CARGO = 310; };	// Speedboat Minigun
		if (_nType == 2) then { _rVehicle = "B_Boat_Armed_01_minigun_F";	VQI_FROGS_AO_NAV_SIDE_CARGO = 320; };	// Speedboat Minigun
		if (_nType == 3) then { _rVehicle = "B_Boat_Transport_01_F";		VQI_FROGS_AO_NAV_SIDE_CARGO = 330; };	// Assualt Boat CRRC
		if (_nType == 4) then { _rVehicle = "B_SDV_01_F";				VQI_FROGS_AO_NAV_SIDE_CARGO = 330; };	// SDV
		if (_nType == 5) then { _rVehicle = "B_APC_Wheeled_01_cannon_F"; 	VQI_FROGS_AO_NAV_SIDE_CARGO = 310; };	// AMV-7 Marshal
	};


	





	sleep 1;
	if (isNil "_rVehicle") exitWith { }; // TBD Exit efx?

	
	

	// Spawn Vehicle
	_pVehicle = _pBIS findEmptyPosition [0,200,_rVehicle];
	_eVehicle = [_pVehicle, _rDir, _rVehicle, _enemyNaval] call BIS_fnc_spawnVehicle;
	
	
	// 75 %Troops & Cargo
	if (random 100 < 99) then { 
		[_eVehicle] execVM "vqi_frogs\VQI-CombatDiver\AO\nav\Naval\vqi_frogs_ao_naval_cargo.sqf"; 
	};
	
	
	sleep 1;
	[_enemyNaval] execVM "vqi_frogs\VQI-CombatDiver\vqi_frogs_x_despawn.sqf";
	sleep 1;
	//[_enemyNaval] call VQI_SCAR_fnc_Xskill;

};

	






sleep 1;
if (VQI_FROGS_HINTS == 1) then { hint "ao_naval.sqf -END-"; };

////////////////////////
/*NOTES:





*/