// Turn ON/OFF GASMIX
//
if (VQI_FROGS_HINTS == 1) then { hint "stingray_gasmix.sqf"; };
sleep 1;




// Toggle Switch - GasType? - MA-2 Bottle
if (("VQI_BOTTLE_SR2_GAS" in vestItems player) && ("VQI_BOTTLE_SR2_DIL" in vestItems player)) then {
	if (gasmixON == 0) exitWith { gasmixON = 1; hint "DSV VALVE: OPEN"; };		// ON
	if (gasmixON == 1) exitWith { gasmixON = 0; hint "DSV VALVE: CLOSED"; };	// OFF
} else {
	hint "Bottle Error";
};













////////////////////
/* NOTES:





*/