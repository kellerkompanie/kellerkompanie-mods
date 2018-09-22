#include "script_component.hpp"

if !(keko_settings_persistency_cratesEnabled) exitWith{diag_log text "[KEKO] (persistency) loadAllCrates: persistency for crates is disabled, exiting!"; false};

private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:getAllCrates:%1", keko_settings_persistency_key]);

if ((_ret select 0) == 1) then {
	diag_log text format ["[KEKO] (persistency) loadAllCrates: loading sucessful %1", _ret];

	// assume loading was sucess
  {
    private _crateID = _x select 0;
    _crateID call keko_persistency_fnc_loadCrate;
    diag_log text format ["[KEKO] (persistency) loadAllCrates: loaded crate %1", _crateID];
  } forEach (_ret select 1);
	true
} else {
	diag_log text format ["[KEKO] (persistency) loadAllCrates: loading unsucessful %1", _ret];
	false
};
