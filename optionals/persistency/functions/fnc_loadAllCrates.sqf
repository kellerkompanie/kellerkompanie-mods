#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;

if (GVAR(cratesEnabled) == 0) exitWith{WARNING("loadAllCrates: persistency for crates is disabled, exiting!"); 0};

private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:getAllCrates:%1", GVAR(key)]);

private _count = 0;
if ((_ret select 0) == 1) then {
    INFO_1("loadAllCrates: loading sucessful %1", _ret);

    // assume loading was sucess
    {
        private _objectVariable = _x select 0;
        _objectVariable call FUNC(loadCrateByVariable);
        INFO_1("loadAllCrates: loading crate %1", _objectVariable);
        _count = _count + 1;
    } forEach (_ret select 1);
} else {
    ERROR_1("loadAllCrates: loading unsucessful %1", _ret);
};

_count
