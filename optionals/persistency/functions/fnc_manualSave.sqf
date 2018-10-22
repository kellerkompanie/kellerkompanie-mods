#include "script_component.hpp"

params ["_player"];

if (EGVAR(persistency_settings,playersEnabled) > 0) then {
	"[KEKO] (Peristency) saving players to DB ..." remoteExec ["systemChat", _player];
	call FUNC(saveAllPlayers);
};

if (EGVAR(persistency_settings,vehiclesEnabled) > 0) then {
	"[KEKO] (Peristency) saving vehicles to DB ..." remoteExec ["systemChat", _player];
	call FUNC(saveAllVehicles);
};

if (EGVAR(persistency_settings,cratesEnabled) > 0) then {
	"[KEKO] (Peristency) saving crates to DB ..." remoteExec ["systemChat", _player];
	call FUNC(saveAllCrates);
};
