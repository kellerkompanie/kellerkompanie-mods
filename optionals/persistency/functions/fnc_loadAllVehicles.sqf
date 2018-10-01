#include "script_component.hpp"

if !(EGVAR(persistency_settings,vehiclesEnabled)) exitWith{WARNING("loadAllVehicles: persistency for vehicles is disabled, exiting!"); false};

private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:getAllVehicles:%1", EGVAR(persistency_settings,key)]);

if ((_ret select 0) == 1) then {
	TRACE_1("loadAllVehicles: loading sucessful", _ret);

	// assume loading was sucess
  {
    private _vehicleID = _x select 0;
    _vehicleID call FUNC(loadVehicle);
    TRACE_1("loadAllVehicles: loaded vehicle %1", _vehicleID);
  } forEach (_ret select 1);
	true
} else {
	ERROR("loadAllVehicles: loading unsucessful %1", _ret);
	false
};
