//	Stingray - Re-Breather Diver System
//	DIVER    - 20m:2h (65'-120min)
if (VQI_FROGS_HINTS == 1) then { hint "stingray_system.sqf"; };
sleep 1;



private ["_tank","_deep","_rate","_ppo2"];


_tank = 7200;		// Tank/System Size
tankVol = _tank;
_deep = 0;		// Depth/Pressure
_rate = 0;		// Breathing Rate
_ppo2 = 0;		// Multiplier (MOD)


systemON = 2;		// 1 = Dragonfly   2 = Stingray   3 = F.R.O.G.S
gasmixON = 0;		// Bottle-Valve: ON/OFF


while {systemON == 2} do {

	// add OFF_Rebreather
	if (("VQI_BOTTLE_SR2_GAS" in vestItems player) && ("VQI_BOTTLE_SR2_DIL" in vestItems player)) then {
		player addVest "VQI_VEST_Stingray_OFF";
		player addItemToVest "VQI_BOTTLE_SR2_GAS";
		player addItemToVest "VQI_BOTTLE_SR2_DIL";
	} else {
		player addVest "VQI_VEST_Stingray_OFF";
	};


	waitUntil { sleep 5; gasmixON == 1; };
	// Wait until Gas ON, then add GAS_Rebreather
	if (("VQI_BOTTLE_SR2_GAS" in vestItems player) && ("VQI_BOTTLE_SR2_DIL" in vestItems player)) then {
		player addVest "VQI_VEST_Stingray_GAS";
		player addItemToVest "VQI_BOTTLE_SR2_GAS";
		player addItemToVest "VQI_BOTTLE_SR2_DIL";
	} else {
		player addVest "VQI_VEST_Stingray_GAS";
	};

	
	while { gasmixON == 1 && _tank > 0 } do {

		_deep = getPosASL player select 2;
		_rate = getFatigue player;
		
		// 20m Operational Depth Rating:  -0.20 = 1.0
		if (getPosASL player select 2 > -20) then { _ppo2 = -0.10; };	//  100% - 20m - calm/low breath - ( 120/X = min )
		if (getPosASL player select 2 < -20) then { _ppo2 = -0.20; };	//  2x /  ? min 
		if (getPosASL player select 2 < -30) then { _ppo2 = -0.40; };	//  4x /  ? min
		if (getPosASL player select 2 < -40) then { _ppo2 = -1.00; };	// 10x /  ? min
		
		// Check ASL and VEST ON/OFF
		if (getPosASL player select 2 > -1 ) then {
			_tank = _tank - 0.5;							// Out of Water (+0 ASL) - Drain Gases (default 4h)
		} else {
			_tank = _tank - (_deep * _ppo2) - (_rate * 3);	// System Formula Rate (fictional): Depth/Gas/Fatigue
		};												// 7200 = 7200 - (-10 * -0.10) - (x)		    x = rate
		
		//hintSilent format ["MODT: %1", [((_tank)/60) + 0.01,"HH:MM"] call BIS_fnc_timetostring];	// MODT: Mission Operation Depth Time
		
		
		if (_tank > 0) then { sleep 1; tankVOL = _tank; } else { hint "DRY!!!"; systemON = 0; };
	};
	
sleep 1;
};



gasmixON = 0;
tankVOL = 0;
sleep 1;

// Out of Gas!
// Replace ReBreather with OFF_Rebreather!
if (("VQI_BOTTLE_SR2_GAS" in vestItems player) && ("VQI_BOTTLE_SR2_DIL" in vestItems player)) then {
	player addVest "VQI_VEST_Stingray_OFF";
	player addItemToVest "VQI_BOTTLE_SR2_GAS";
	player addItemToVest "VQI_BOTTLE_SR2_DIL";
} else {
	player addVest "VQI_VEST_Stingray_OFF";
};








//////////////////
/* NOTES:


*/