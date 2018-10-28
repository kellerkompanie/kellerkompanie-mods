#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;

params ["_player"];

if (GVAR(playersEnabled) > 0) then {
	private _savedPlayers = call FUNC(saveAllPlayers);
	(format ["[KEKO] (Peristency) saved %1 players", _savedPlayers]) remoteExec ["systemChat", _player];
};

if (GVAR(vehiclesEnabled) > 0) then {
	private _savedVehicles = call FUNC(saveAllVehicles);
	(format ["[KEKO] (Peristency) saved %1 vehicles", _savedVehicles]) remoteExec ["systemChat", _player];
};

if (GVAR(cratesEnabled) > 0) then {
	private _savedCrates = call FUNC(saveAllCrates);
	(format ["[KEKO] (Peristency) saved %1 crates", _savedCrates]) remoteExec ["systemChat", _player];
};
