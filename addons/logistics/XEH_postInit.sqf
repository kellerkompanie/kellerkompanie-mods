#include "script_component.hpp"

diag_log text "[KEKO] (logistics) postInit";

if(isServer && isDedicated) exitWith {diag_log text "[KEKO] (logistics) postInit: exiting because isServer && isDedicated";};

if(hasInterface && !isDedicated) then {
	// run on players and player host
	call FUNC(addFuelConsumptionHandler);
};
