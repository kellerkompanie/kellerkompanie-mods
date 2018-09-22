#include "script_component.hpp"

if !(keko_settings_persistency_enabled) exitWith{diag_log text "[KEKO] (persistency) preInit: persistency disabled, exiting!"; false};
if (keko_settings_persistency_key == "") exitWith{diag_log text "[KEKO] (persistency) preInit: persistency key not set, exiting!"; false};

diag_log text "[KEKO] (persistency) running XEH_postInit";

if(keko_settings_persistency_autosave_interval > 0) then {
	[] spawn {
		sleep keko_settings_persistency_autosave_interval;

		if(keko_settings_persistency_vehiclesEnabled) then {
			call keko_persistency_fnc_saveAllVehicles;
		};

		if(keko_settings_persistency_cratesEnabled) then {
			call keko_persistency_fnc_saveAllCrates;
		};

		if(keko_settings_persistency_playersEnabled) then {
			call keko_persistency_fnc_saveAllPlayers;
		};
	};
};
