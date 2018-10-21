// DiveMate System - Readout of Systems
// 
if (VQI_FROGS_HINTS == 1) then { hint "divemate.sqf"; };
//sleep 1;


private ["_sType","_rType","_tankL","_tankS","_tankG","_depth","_pGPSl","_pGPSo","_pGPSs","_clock","_tank","_pATM","_pPSI","_ppo2","_pDIR","_display","_pDirC"];


_sType = "SYS";
_rType = "OFF";

_tankL = 0;
_tankS = 0;
_tankG = 0;
_ppo2 = 0;

//if (systemON == 0) then { tankVOL = 0; DiveMate = 0; };	// System Check/Set
//if (systemON == 1) then { DiveMate = 1; };				// DiveMate Check/Set
//if (DiveMate == 0 ) exitWith { hint "-no data-"; };		// Exit - DiveMate OFF



while {"VQI_DiveMate_1" in assignedItems player} do {
//while {true} do {

	disableSerialization;
	if (gasmixON == 0) then { _tankG = "OFF"; };
	if (gasmixON == 1) then { _tankG = "GAS"; };

	if (systemON == 1) then { _tankS = 3600; };					// Tank Type/Size - Dragonfly
	if (systemON == 2) then { _tankS = 7200; };					// Tank Type/Size - Stingray
	if (systemON == 3) then { _tankS = 10800; };					// Tank Type/Size - F.R.O.G.S
	
	if (systemON > 0 ) then { _rType = "OK"; };					// System Readout  -WIP-	ON/OFF
	if (systemON == 0) then { _rType = "OFF"; };					// System Readout  -WIP-	ON/OFF
	
	_depth = round ((getPosASL player select 2) * 3.2808);		// Player Depth 'ft
	_pGPSl = mapGridposition player;							// GPS: location
	_pGPSo = round (overcast * 100); 							// GPS: cloud cover %
	_pGPSs = ((_depth * 10) * -1) + _pGPSo;						// GPS: signal-loss	Exp: (-10m * 10 = 100) + 0 == 100% signal-loss
	// modifier with equipment (signal booster)					// Equipment!


	if (systemON == 1) then { _sType = "DFLY"; };				// Type 1
	if (systemON == 2) then { _sType = "SRAY"; };				// Type 2
	if (systemON == 3) then { _sType = "FROG"; };				// Type 3
	
	if (tankVol > 0) then {
		_tankL = round ((tankVOL/_tankS) * 100);					// Tank %
	} else {
		_tankL = 0;
	};
	
	_clock = [daytime] call BIS_fnc_timeToString; 				// Clock

	if (_pGPSs < 150) then { _pGPSl = mapGridPosition player; } else { _pGPSl = "- NO SIGNAL -"; };	// GPS Signal-Loss X%

	_tank = round (tankVol);									// Tank Volume
	_pATM = (((_depth / 10) - 1) * -1);							// ATM
	_pPSI = (((_depth * 1.45) - 14.5) * -1);					// PSI
	
	// ppo2/readout (fictional)
	if (systemON == 0) then { 
		_ppo2 = "NO DIVE";
	} else {
		if (gasmixON == 0) then {									
			_ppo2 = "GAS NIL";
		} else {
			_ppo2 = 1.2 + (random 0.4 - random 0.4);		// ppo2 ATM
		};
	};
															// Mix/Gas
															// Water Ambient Temp
	_pDIR = round (getDir player);								// Compass
															// Battery
															
	if(_pDIR >= 00.000 && _pDIR <= 11.250) then {_pDirC = "N";};	// Heading Direction
	if(_pDIR >= 11.260 && _pDIR <= 33.750) then {_pDirC = "NNE";};
	if(_pDIR >= 33.760 && _pDIR <= 56.250) then {_pDirC = "NE";};
	if(_pDIR >= 56.260 && _pDIR <= 78.750) then {_pDirC = "ENE";};
	if(_pDIR >= 78.760 && _pDIR <= 101.25) then {_pDirC = "E";};
	if(_pDIR >= 101.26 && _pDIR <= 123.75) then {_pDirC = "ESE";};
	if(_pDIR >= 123.76 && _pDIR <= 146.25) then {_pDirC = "SE";};
	if(_pDIR >= 146.26 && _pDIR <= 168.75) then {_pDirC = "SSE";};
	if(_pDIR >= 168.76 && _pDIR <= 191.25) then {_pDirC = "S";};
	if(_pDIR >= 191.26 && _pDIR <= 213.75) then {_pDirC = "SSW";};
	if(_pDIR >= 213.76 && _pDIR <= 236.25) then {_pDirC = "SW";};
	if(_pDIR >= 236.26 && _pDIR <= 258.75) then {_pDirC = "WSW";};
	if(_pDIR >= 258.76 && _pDIR <= 281.25) then {_pDirC = "W";};
	if(_pDIR >= 281.26 && _pDIR <= 303.75) then {_pDirC = "WNW";};
	if(_pDIR >= 303.76 && _pDIR <= 326.25) then {_pDirC = "NW";};
	if(_pDIR >= 326.26 && _pDIR <= 348.75) then {_pDirC = "NNW";};
	if(_pDIR >= 348.76 && _pDIR <= 360.00) then {_pDirC = "N";};
	

	
			
	/////////////////////////////////////
	2 cutRsc ["VQI_DIVEMATE_1", "PLAIN"];								// Display GUI #
	
	_display = uiNamespace getVariable "VQI_DIVEMATE_1";  				// GUI Classname
	
	if (systemON == 1) then { (_display displayCtrl 1000) ctrlSetText format["%1",_sType]; };			// Dragonfly
	if (systemON == 2) then { (_display displayCtrl 1011) ctrlSetText format["%1",_sType]; };			// Stingray
	if (systemON == 3) then { (_display displayCtrl 1012) ctrlSetText format["%1",_sType]; };			// F.R.O.G.S
	if (systemON == 0) then { (_display displayCtrl 1013) ctrlSetText format["%1",_sType]; };			// OFF
	
	if (_depth > -1) then { _depth = 0;  };		// Not for use ASL
	if (_depth > -1) then { _pATM = 1.01;};		// Standard Default
	if (_depth > -1) then { _pPSI = 14.6;};		// Standard Default
	
	if (_tankL >= 30)then { (_display displayCtrl 1002) ctrlSetText (format["%1",_tankL]+"%"); };		// Tank %
	if (_tankL < 30) then { (_display displayCtrl 1015) ctrlSetText (format["%1",_tankL]+"%"); };		// Tank %
	if (_tankL < 10) then { (_display displayCtrl 1016) ctrlSetText (format["%1",_tankL]+"%"); };		// Tank %
	(_display displayCtrl 1003) ctrlSetText format["%1",_clock];			// 
	if (_pGPSs < 150) then { (_display displayCtrl 1004) ctrlSetText format["%1",_pGPSl];	 } else { (_display displayCtrl 1026) ctrlSetText format["%1",_pGPSl]; };		// 
	(_display displayCtrl 1005) ctrlSetText format["%1",_tank];			// Tank PSI
	(_display displayCtrl 1006) ctrlSetText format["%1",_pATM];			// 
	(_display displayCtrl 1007) ctrlSetText format["%1",_pPSI];			// 
	(_display displayCtrl 1008) ctrlSetText format["%1°",_pDIR];			// 
	if (gasmixON == 1) then { (_display displayCtrl 1009) ctrlSetText format["%1",_tankG]; };			//  GASMIX ON
	if (gasmixON == 0) then { (_display displayCtrl 1014) ctrlSetText format["%1",_tankG]; };			//  GASMIX OFF
	(_display displayCtrl 1010) ctrlSetText format["%1",_ppo2];			// 
	(_display displayCtrl 1017) ctrlSetText format["%1",_pDirC];			// 
	
	
	
	// depth warnings
	if (systemON == 0) then { 
		(_display displayCtrl 1018) ctrlSetText format["%1",_rType]; 
		(_display displayCtrl 1001) ctrlSetText format["%1'",_depth];
	};			// SYS OFF
	
	if (systemON == 1) then {  // Dragonfly
		if (_depth > -33) then { 
			(_display displayCtrl 1019) ctrlSetText format["%1",_rType];
			(_display displayCtrl 1001) ctrlSetText format["%1'",_depth];			// 
		};
		if ((_depth <= -33) && (_depth > -65)) then { 
			_rType = "10m"; 
			(_display displayCtrl 1020) ctrlSetText format["%1",_rType]; 
			(_display displayCtrl 1023) ctrlSetText format["%1'",_depth]; 
		};
		if ((_depth <= -65) && (_depth > -98)) then { 
			_rType = "*10m*"; 
			(_display displayCtrl 1021) ctrlSetText format["%1",_rType]; 
			(_display displayCtrl 1024) ctrlSetText format["%1'",_depth]; 
		};
		if (_depth <= -98) then { 
			_rType = "*10m*"; 
			(_display displayCtrl 1022) ctrlSetText format["%1",_rType]; 
			(_display displayCtrl 1025) ctrlSetText format["%1'",_depth]; 
		};
	};
	
	if (systemON == 2) then {  // Stingray
		if (_depth > -65) then { 
			(_display displayCtrl 1019) ctrlSetText format["%1",_rType];
			(_display displayCtrl 1001) ctrlSetText format["%1'",_depth];			// 
		};
		if ((_depth <= -65) && (_depth > -98)) then { 
			_rType = "20m"; 
			(_display displayCtrl 1020) ctrlSetText format["%1",_rType]; 
			(_display displayCtrl 1023) ctrlSetText format["%1'",_depth]; 
		};
		if ((_depth <= -98) && (_depth > -131)) then { 
			_rType = "*20m*"; 
			(_display displayCtrl 1021) ctrlSetText format["%1",_rType]; 
			(_display displayCtrl 1024) ctrlSetText format["%1'",_depth]; 
		};
		if (_depth <= -131) then { 
			_rType = "*20m*"; 
			(_display displayCtrl 1022) ctrlSetText format["%1",_rType]; 
			(_display displayCtrl 1025) ctrlSetText format["%1'",_depth]; 
		};
	};
	
	
	//switch (true) do {	// Main O2 Tanks Supply
		if (_tankL == 100) then { (_display displayCtrl 1027) ctrlSetText "\vqi_frogs\VQI-CombatDiver\Equipment\DiveMate\graphics\o2_100.paa"; };
		if ((_tankL < 100) && (_tankL >= 90)) then { (_display displayCtrl 1027) ctrlSetText "\vqi_frogs\VQI-CombatDiver\Equipment\DiveMate\graphics\o2_100.paa"; };
		if ((_tankL < 90 ) && (_tankL >= 80)) then { (_display displayCtrl 1027) ctrlSetText "\vqi_frogs\VQI-CombatDiver\Equipment\DiveMate\graphics\o2_90.paa"; };
		if ((_tankL < 80 ) && (_tankL >= 70)) then { (_display displayCtrl 1027) ctrlSetText "\vqi_frogs\VQI-CombatDiver\Equipment\DiveMate\graphics\o2_80.paa"; };
		if ((_tankL < 70 ) && (_tankL >= 60)) then { (_display displayCtrl 1027) ctrlSetText "\vqi_frogs\VQI-CombatDiver\Equipment\DiveMate\graphics\o2_70.paa"; };
		if ((_tankL < 60 ) && (_tankL >= 50)) then { (_display displayCtrl 1027) ctrlSetText "\vqi_frogs\VQI-CombatDiver\Equipment\DiveMate\graphics\o2_60.paa"; };
		if ((_tankL < 50 ) && (_tankL >= 40)) then { (_display displayCtrl 1027) ctrlSetText "\vqi_frogs\VQI-CombatDiver\Equipment\DiveMate\graphics\o2_50.paa"; };
		if ((_tankL < 40 ) && (_tankL >= 30)) then { (_display displayCtrl 1027) ctrlSetText "\vqi_frogs\VQI-CombatDiver\Equipment\DiveMate\graphics\o2_40.paa"; };
		if ((_tankL < 30 ) && (_tankL >= 20)) then { (_display displayCtrl 1027) ctrlSetText "\vqi_frogs\VQI-CombatDiver\Equipment\DiveMate\graphics\o2_30.paa"; };
		if ((_tankL < 20 ) && (_tankL >= 10)) then { (_display displayCtrl 1027) ctrlSetText "\vqi_frogs\VQI-CombatDiver\Equipment\DiveMate\graphics\o2_20.paa"; };
		if (_tankL < 10) then { (_display displayCtrl 1027) ctrlSetText "\vqi_frogs\VQI-CombatDiver\Equipment\DiveMate\graphics\o2_10.paa"; };
	//};
	
	/*
		if (_tankL == 100) then { 5 cutRsc ["TANK_100", "PLAIN"]; };
		if ((_tankL < 100)	&& (_tankL >= 90)) then { 5 cutRsc ["TANK_100", "PLAIN"]; };
		if ((_tankL < 90 )	&& (_tankL >= 80)) then { 5 cutRsc ["TANK_90", "PLAIN"]; };
		if ((_tankL < 80 )	&& (_tankL >= 0 )) then { 5 cutRsc ["TANK_100", "PLAIN"]; };
	*/
sleep 1;
};








////////////////////
/* NOTES:


	hint format ["
	Type: %1 \n 
	Depth: %2m \n 
	Tank: %3 \n 
	Clock: %4 \n
	GPS: %5 \n
	Vol: %6 PSI \n
	ATM: %7 atm \n
	PSI: %8 PSI \n
	Dir: %9 \n
	GAS: %10 \n
	ppO2: %11
	",_sType,_depth,_tankL,_clock,_pGPSl,_tank,_pATM,_pPSI,_pDIR,_tankG,_ppo2];
*/