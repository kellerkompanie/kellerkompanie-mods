#include "script_component.hpp"

params ["_player"];

if (EGVAR(persistency_settings,playersEnabled) > 0) then {
	"[KEKO] (Peristency) loading players from DB ..." remoteExec ["systemChat", _player];
	call FUNC(loadAllPlayers);
};

if (EGVAR(persistency_settings,vehiclesEnabled) > 0) then {
	"[KEKO] (Peristency) loading vehicles from DB ..." remoteExec ["systemChat", _player];
	call FUNC(loadAllVehicles);
};

if (EGVAR(persistency_settings,cratesEnabled) > 0) then {
	"[KEKO] (Peristency) loading crates from DB ..." remoteExec ["systemChat", _player];
	call FUNC(loadAllCrates);
};
