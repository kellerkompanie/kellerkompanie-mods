// DiveMate - On/Off - SetUp and execVM in Module (fn_module.sqf)
// SetUp Battery and Setting File System???


private ["_unit"];

_unit = _this select 0;


while {true} do { 

	if ((inputAction "Watch" > 0) && ("VQI_DiveMate_1" in (assignedItems _unit))) then {
	//if (inputAction "Watch" > 0) then {
	
		VQIDIVEMATE = [_unit] execVM "vqi_frogs\VQI-CombatDiver\Equipment\DiveMate\vqi_frogs_divemate.sqf"; 
		
		if (VQI_FROGS_DB1WATCH == 1) then { sleep 2;  terminate VQIDIVEMATE; 2 cutText ["","PLAIN"]; 5 cutText ["","PLAIN"]; };
		if (VQI_FROGS_DB1WATCH == 2) then { sleep 10; terminate VQIDIVEMATE; 2 cutText ["","PLAIN"]; 5 cutText ["","PLAIN"]; };
		if (VQI_FROGS_DB1WATCH == 3) then { sleep 20; terminate VQIDIVEMATE; 2 cutText ["","PLAIN"]; 5 cutText ["","PLAIN"]; };
		if (VQI_FROGS_DB1WATCH == 4) then { sleep 30; terminate VQIDIVEMATE; 2 cutText ["","PLAIN"]; 5 cutText ["","PLAIN"]; };
		if (VQI_FROGS_DB1WATCH == 5) then { sleep 60; terminate VQIDIVEMATE; 2 cutText ["","PLAIN"]; 5 cutText ["","PLAIN"]; };
		if (VQI_FROGS_DB1WATCH == 6) then { sleep 90; terminate VQIDIVEMATE; 2 cutText ["","PLAIN"]; 5 cutText ["","PLAIN"]; };
	};
	
sleep .02;
};



/////////////////////
/* NOTES:



*/