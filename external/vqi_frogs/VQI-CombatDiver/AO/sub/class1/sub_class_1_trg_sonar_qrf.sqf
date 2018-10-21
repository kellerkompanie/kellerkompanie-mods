// Heli QRF Diver Team - Insertion and Search for Players
//
if (VQI_FROGS_HINTS == 1) then { hint "sub_class_1_trg_sonar_qrf.sqf"; };
sleep 1;


private ["_rDloc","_posA","_posB","_posP","_rDir","_heliBad","_wpH1","_targetP","_targetZ1","_targetZ2","_targetZP","_wpH2"];

/*
//Intel
if ("VQI_Notebook_Freq_QRF_HeliCargo" in (assignedItems player + Items player)) then {
	hint "Enemy Radio Chatter: \n QRF Heli Dispatched";
	sleep 60 + (random 300);
};
*/
sleep 5;



_posA = [getPos player, 3000, random 360] call BIS_fnc_relPos;
_posB = [getPos player, 3000, random 360] call BIS_fnc_relPos;
_posP = getPos player; 
_rDir = random 360;



//////////////////////////////////////////////////////////
//if (VQI_FROGS_SPAWN_ENEMY == 1) then { // RED - OPFOR - CSAT

	heliSUBCrew = createGroup EAST;
	
	if (true) then {
		_heliBad = [_posA, _rDir, "O_Heli_Transport_04_bench_F", heliSUBCrew] call BIS_fnc_spawnVehicle; // 1.Mi-290 Taru (transport)
		
		_rSquad = ["OI_diverTeam"] call BIS_fnc_selectRandom;	//
		heliSUBQRF = [_posA, EAST, (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "SpecOps" >> _rSquad)] call BIS_fnc_spawnGroup; 	//
		{_x assignAsCargo (_heliBad select 0); _x moveInCargo (_heliBad select 0);} forEach (units heliSUBQRF);
	};
//};



sleep 5;



//////////////////////////////////////////////////////////////////
// Patrols & Troop movement //////////////////////////////////////

_wpH1 = heliSUBCrew addWaypoint [getPos player, 0];
_wpH1 setWaypointType "TR UNLOAD";
_wpH1 setWaypointSpeed "NORMAL";
_wpH1 setWaypointBehaviour "CARELESS";
sleep 30;

// Insertion Height
_heliBad = _heliBad select 0;
_heliBad flyInHeight 5;
sleep 30;


// Go! Go! Go!
{ unassignVehicle _x; _x allowDamage false; moveOut _x; } forEach units heliSUBQRF;
sleep 5;

{ _x allowDamage true; } forEach units heliSUBQRF;
sleep 5;


// Player & Random Depths
_targetP = getPos player;

_targetZ1 = random 20;
_targetZ2 = random 20;
_targetZP = _targetZ1 - _targetZ2;

{ _x doMove _targetP; } forEach units heliSUBQRF; sleep (random 10);
{ _x swimInDepth (_targetP select 2) + (_targetZP); } forEach units heliSUBQRF;
sleep 5;



// Reset Height
_heliBad flyInHeight (5 + random 100);
sleep 10;



if (VQI_FROGS_HINTS == 1) then { hint "HELI Move Out... PATROL/SPOT"; };

_wpH2 = heliSUBCrew addWaypoint [getPos player, 1];
_wpH2 setWaypointType "MOVE";
_wpH2 setWaypointSpeed "FULL";
_wpH2 setWaypointStatements ["true","[group this, getPos this, 3000] call BIS_fnc_taskPatrol;"]; //getPos player?
sleep 5;




// Delete Unessessary Units
[heliSUBCrew] execVM "vqi_frogs\VQI-CombatDiver\vqi_frogs_x_despawn.sqf";

////////////////////
/* NOTES:



*/