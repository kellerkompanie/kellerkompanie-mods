#include "script_component.hpp"

INFO("postInit");

// if logistics is set to custom warn in case no custom crates module was placed
if ( GVAR(customLogistics) == 2 ) then {
	private _allCustomCrateModules = allMissionObjects QGVAR(moduleCustomLogistics3den);
	if (count _allCustomCrateModules == 0) then {
		systemChat "[KEKO] (Logistics) WARNING: Logistics set to custom but no custom crates module placed!";
	};
};

if (GVAR(virtualLogistics)) then {
	call FUNC(addVirtualLogisticActions);
};

if(isServer && isDedicated) exitWith {WARNING("postInit: exiting because isServer && isDedicated");};

if(hasInterface && !isDedicated) then {
	// run on players and player host
	call FUNC(addFuelConsumptionHandler);
};
