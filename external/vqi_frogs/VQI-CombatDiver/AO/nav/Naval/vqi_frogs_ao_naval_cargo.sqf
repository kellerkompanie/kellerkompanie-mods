// Spawn random Crew/Cargo Troops for Naval - AO
//
if (VQI_FROGS_HINTS == 1) then { hint "ao_naval_cargo.sqf"; };
sleep 1;

// No Cargo - Exit if ID# 0 assigned
if (VQI_FROGS_AO_NAV_SIDE_CARGO == 0) exitWith { };




private ["_xVehicle","_eVehicle","_cVehicle","_gVehicle","_rDir","_rHeadgear1","_rHeadgear2","_rHeadgear3","_rSquad1","_nGroup1","_nCargo1"];



_xVehicle = _this select 0;
_eVehicle = _xVehicle select 0; // vehicle
_cVehicle = _xVehicle select 1; // crew
_gVehicle = _xVehicle select 2; // group

_rSquad1 = "OI_DiverTeam";
_nGroup1 = "Infantry";

_rDir = random 360;



// Random Headgear
_rHeadgear1 = ["H_MilCap_ocamo","H_ShemagOpen_tan","H_Cap_brn_SPECOPS","H_Cap_tan","H_Cap_blk","H_MilCap_gry",
			 "H_Bandanna_sand","H_Bandanna_gry","H_Beret_blk","H_MilCap_ocamo","H_MilCap_ocamo"] call BIS_fnc_selectRandom;
				
_rHeadgear2 = ["H_MilCap_ocamo","H_Cap_brn_SPECOPS","H_Cap_tan","H_Cap_blk","H_MilCap_gry",
			 "H_Bandanna_sand","H_Bandanna_gry","H_Beret_blk","H_MilCap_ocamo","H_MilCap_ocamo"] call BIS_fnc_selectRandom;

_rHeadgear3 = ["H_MilCap_mcamo","H_Cap_brn_SPECOPS","H_Cap_tan","H_Cap_blk","H_MilCap_gry",
			 "H_Bandanna_sand","H_Bandanna_gry","H_Beret_blk","H_MilCap_mcamo","H_MilCap_mcamo"] call BIS_fnc_selectRandom;
sleep 1;



	// RED - OPFOR - CSAT
if (VQI_FROGS_AO_NAV_SIDE == 1) then { 

	if (VQI_FROGS_AO_NAV_SIDE_CARGO == 110) then { _rSquad1 = ["OI_reconPatrol","OI_reconSentry","OI_reconTeam","OIA_InfSentry","OIA_InfSquad","OIA_InfSquad_Weapons","OIA_InfTeam"] call BIS_fnc_selectRandom; };
	if (VQI_FROGS_AO_NAV_SIDE_CARGO == 120) then { _rSquad1 = ["OI_reconSentry","OI_reconPatrol","OI_SniperTeam"] call BIS_fnc_selectRandom; };
	if (VQI_FROGS_AO_NAV_SIDE_CARGO == 130) then { _rSquad1 = "OI_DiverTeam"; _nGroup1 = "SpecOps"; };

	_nCargo1 = [position _eVehicle, EAST, (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> _nGroup1 >> _rSquad1),[],[],[],[],[1,0.7],_rDir] call BIS_fnc_spawnGroup; sleep 1;
	{ _x assignAsCargo _eVehicle; _x moveInCargo _eVehicle; _x addHeadgear _rHeadgear1; _x unlinkItem "NVGoggles_OPFOR"; } forEach (units _nCargo1);
};


	// GREEN - INDEP - AAF
if (VQI_FROGS_AO_NAV_SIDE == 2) then { 
	
	if (VQI_FROGS_AO_NAV_SIDE_CARGO == 210) then { _rSquad1 = ["HAF_reconPatrol","HAF_reconSentry","HAF_reconTeam","HAF_InfSentry","HAF_InfSquad","HAF_InfSquad_Weapons","HAF_InfTeam"] call BIS_fnc_selectRandom; };
	if (VQI_FROGS_AO_NAV_SIDE_CARGO == 220) then { _rSquad1 = ["HAF_reconSentry","HAF_reconPatrol","HAF_reconTeam"] call BIS_fnc_selectRandom; };
	if (VQI_FROGS_AO_NAV_SIDE_CARGO == 230) then { _rSquad1 = "HAF_DiverTeam"; _nGroup1 = "SpecOps"; };
	
	_nCargo1 = [position _eVehicle, RESISTANCE, (configFile >> "CfgGroups" >> "INDEP" >> "IND_F" >> _nGroup1 >> _rSquad1),[],[],[],[],[1,0.7],_rDir] call BIS_fnc_spawnGroup; sleep 1;
	{ _x assignAsCargo _eVehicle; _x moveInCargo _eVehicle; _x addHeadgear _rHeadgear2; _x unlinkItem "NVGoggles_INDEP"; } forEach (units _nCargo1);
};


	// BLUE- BLUFOR - NATO
if (VQI_FROGS_AO_NAV_SIDE == 3) then { 
	
	if (VQI_FROGS_AO_NAV_SIDE_CARGO == 310) then { _rSquad1 = ["BUS_InfSentry","BUS_InfSquad","BUS_InfSquad_Weapons","BUS_InfTeam"] call BIS_fnc_selectRandom; };
	if (VQI_FROGS_AO_NAV_SIDE_CARGO == 320) then { _rSquad1 = ["BUS_reconSentry","BUS_reconPatrol"] call BIS_fnc_selectRandom; };
	if (VQI_FROGS_AO_NAV_SIDE_CARGO == 330) then { _rSquad1 = "BUS_DiverTeam"; _nGroup1 = "SpecOps"; };
	
	_nCargo1 = [position _eVehicle, WEST, (configFile >> "CfgGroups" >> "WEST" >> "BLU_F" >> _nGroup1 >> _rSquad1),[],[],[],[],[1,0.7],_rDir] call BIS_fnc_spawnGroup; sleep 1;
	{ _x assignAsCargo _eVehicle; _x moveInCargo _eVehicle; _x addHeadgear _rHeadgear3; _x unlinkItem "NVGoggles"; } forEach (units _nCargo1);
};











sleep 3; // Despawn
if (!isNil "_nCargo1") then { [_nCargo1] execVM "vqi_frogs\VQI-CombatDiver\vqi_frogs_x_despawn.sqf"; sleep 1; };
if (!isNil "_nCargo2") then { [_nCargo2] execVM "vqi_frogs\VQI-CombatDiver\vqi_frogs_x_despawn.sqf"; sleep 1; };
if (!isNil "_nCargo3") then { [_nCargo3] execVM "vqi_frogs\VQI-CombatDiver\vqi_frogs_x_despawn.sqf"; sleep 1; };


sleep 1; // custom skills & items?
//if (!isNil "_nCargo1") then { [_nCargo1] call VQI_SCAR_fnc_Xskill; sleep 1; };
//if (!isNil "_nCargo2") then { [_nCargo2] call VQI_SCAR_fnc_Xskill; sleep 1; };
//if (!isNil "_nCargo3") then { [_nCargo3] call VQI_SCAR_fnc_Xskill; sleep 1; };








sleep 1;
if (VQI_FROGS_HINTS == 1) then { hint "ao_naval_cargo.sqf -END-"; };

/////////////////////////
/* NOTES:





*/