#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;

params ["_objectVariable"];

private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:containsVehicle:%1:%2", GVAR(key), _objectVariable]);
private _vehicleExists = false;
if ((_ret select 0) == 1) then {
    INFO_1("dbVehicleExists: loading sucessful %1", _ret);
    if (count (_ret select 1) == 1) then {
        _vehicleExists = true;
    };
} else {
    ERROR_1("dbVehicleExists: loading unsucessful %1", _ret);
};

_vehicleExists
