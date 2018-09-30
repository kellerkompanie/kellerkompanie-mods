#include "script_component.hpp"

if !(EGVAR(persistency_settings,enabled)) exitWith{WARNING("preInit: persistency disabled, exiting!"); false};
if (EGVAR(persistency_settings,key) == "") exitWith{WARNING("preInit: persistency key not set, exiting!"); false};

INFO("running XEH_postInit");

if(EGVAR(persistency_settings,autosaveInterval) > 0) then {
	[] spawn {
		sleep EGVAR(persistency_settings,autosaveInterval);

		if(EGVAR(persistency_settings,playersEnabled)) then {
			call FUNC(saveAllPlayers);
		};

		if(EGVAR(persistency_settings,vehiclesEnabled)) then {
			call FUNC(saveAllVehicles);
		};

		if(EGVAR(persistency_settings,cratesEnabled)) then {
			call FUNC(saveAllCrates);
		};
	};
};
