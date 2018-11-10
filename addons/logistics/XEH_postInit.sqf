#include "script_component.hpp"

// if logistics is set to custom warn in case no custom crates module was placed
if ( GVAR(customLogistics) == 2 ) then {
	private _allCustomCrateModules = allMissionObjects QGVAR(moduleCustomLogistics3den);
	if (count _allCustomCrateModules == 0) then {
		systemChat "[KEKO] (Logistics) WARNING: Logistics set to custom but no custom crates module placed!";
	};
};

if(hasInterface) then {
	if ([player,GVAR(virtualHeliLogistics)] call FUNC(hasAccess)) then {
		call FUNC(addVirtualHeliLogisticActions);
	};

	if ([player,GVAR(virtualHeliLogistics)] call FUNC(hasAccess)) then {
		if (isNil QGVAR(uavSupplyBase)) then {
			systemChat "[KEKO] (Logistics) WARNING: Virtual UAV Logistics enabled but no supply base set! UAV supply not available.";
		} else {
			call FUNC(addVirtualUAVLogisticActions);
		};
	};
};

if(hasInterface && !isDedicated) then {
	// run on players and player host
	call FUNC(addFuelConsumptionHandler);
};
