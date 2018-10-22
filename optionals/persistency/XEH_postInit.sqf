#include "script_component.hpp"

if !(EGVAR(persistency_settings,enabled)) exitWith{WARNING("preInit: persistency disabled, exiting!"); false};
if (EGVAR(persistency_settings,key) == "") exitWith{WARNING("preInit: persistency key not set, exiting!"); false};

INFO("running XEH_postInit");

if(EGVAR(persistency_settings,autosaveInterval) > 0) then {
	[] spawn {
		[
			{
				if (EGVAR(persistency_settings,playersEnabled) > 0) then {
					"[KEKO] (Peristency) saving players to DB ..." remoteExec ["systemChat", -2];
					call FUNC(saveAllPlayers);
				};

				if (EGVAR(persistency_settings,vehiclesEnabled) > 0) then {
					"[KEKO] (Peristency) saving vehicles to DB ..." remoteExec ["systemChat", -2];
					call FUNC(saveAllVehicles);
				};

				if (EGVAR(persistency_settings,cratesEnabled) > 0) then {
					"[KEKO] (Peristency) saving crates to DB ..." remoteExec ["systemChat", -2];
					call FUNC(saveAllCrates);
				};

			}, [], EGVAR(persistency_settings,autosaveInterval)] call CBA_fnc_waitAndExecute;
	};
};

if !(isServer) then {
	if !(GVAR(loadout,loadoutOnSpawn) then {
		player call FUNC(loadPlayerLoadout);
	};
};
