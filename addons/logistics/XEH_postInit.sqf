#include "script_component.hpp"

INFO("postInit");

if(isServer && isDedicated) exitWith {WARNING("postInit: exiting because isServer && isDedicated");};

if(hasInterface && !isDedicated) then {
	// run on players and player host
	call FUNC(addFuelConsumptionHandler);
};
