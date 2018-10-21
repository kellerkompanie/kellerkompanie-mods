// Transport Player INTERIOR LOC Submarine - Re-Enter Inside LockoutChamber
// 

private ["_lightLOC","_depthLOC"];

_depthLOC = ((getPosASL HMSProteusLOC) select 2);



if (_depthLOC <= -6) then {

	cutText ["", "BLACK FADED", 999];
	sleep 1;
	player attachTo [HMSProteusLOC,[-4,0,0]];
	
	sleep 1;  detach player;
	cutText ["", "BLACK IN", 20];
	playSound "VQI_SOUND_LOC_EnterExit";
	playSound "VQI_SOUND_SonarPingsAmb";
	
	//temp lighting for each player
	_lightLOC = "chemlight_red" createVehicle (position player);
	_lightLOC attachTo [LOCFLOOD,[0,0,0]];
	
	player action ["SwitchWeapon", player, player, 1];
	player allowDamage false;

} else {
	hint "ERROR - L.O.C. Not Ready: \n Flood Chamber First, Check Watch, then WAIT 60 seconds";
};

/////////////////
/* NOTES:

*/