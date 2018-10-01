#include "script_component.hpp"

if !(EGVAR(persistency_settings,cratesEnabled)) exitWith{WARNING("loadAllCrates: persistency for crates is disabled, exiting!"); false};

private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:getAllCrates:%1", EGVAR(persistency_settings,key)]);

if ((_ret select 0) == 1) then {
	TRACE_1("loadAllCrates: loading sucessful %1", _ret);

	// assume loading was sucess
  {
    private _crateID = _x select 0;
    _crateID call FUNC(loadCrate);
    TRACE_1("loadAllCrates: loaded crate %1", _crateID);
  } forEach (_ret select 1);
	true
} else {
	TRACE_1("loadAllCrates: loading unsucessful %1", _ret);
	false
};
