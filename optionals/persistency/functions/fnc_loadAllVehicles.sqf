#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;

if (GVAR(vehiclesEnabled) == 0) exitWith{WARNING("loadAllVehicles: persistency for vehicles is disabled, exiting!"); 0};

private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:getAllVehicles:%1", GVAR(key)]);

private _count = 0;
if ((_ret select 0) == 1) then {
    TRACE_1("loadAllVehicles: loading sucessful", _ret);

    // assume loading was sucess
    {
        private _objectVariable = _x select 0;
        _objectVariable call FUNC(loadVehicleByVariable);
        INFO_1("loadAllVehicles: loaded vehicle %1", _objectVariable);
        _count = _count + 1;
    } forEach (_ret select 1);
} else {
    ERROR_1("loadAllVehicles: loading unsucessful %1", _ret);
};

_count
