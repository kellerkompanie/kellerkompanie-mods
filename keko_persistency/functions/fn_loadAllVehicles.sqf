if !(keko_settings_persistency_vehiclesEnabled) exitWith{diag_log text "[KEKO] (persistency) loadAllVehicles: persistency for vehicles is disabled, exiting!"; false};

_ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:getAllVehicles:%1", keko_settings_persistency_key]);

if ((_ret select 0) == 1) then {
	diag_log text format ["[KEKO] (persistency) loadAllVehicles: loading sucessful %1", _ret];

	// assume loading was sucess
  {
    _vehicleID = _x select 0;
    _vehicleID call keko_persistency_fnc_loadVehicle;
    diag_log text format ["[KEKO] (persistency) loadAllVehicles: loaded vehicle %1", _vehicleID];
  } forEach (_ret select 1);
	true
} else {
	diag_log text format ["[KEKO] (persistency) loadAllVehicles: loading unsucessful %1", _ret];
	false
};
