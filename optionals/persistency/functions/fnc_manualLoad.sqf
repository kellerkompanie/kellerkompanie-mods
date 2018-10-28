#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;

params ["_player"];

if (GVAR(playersEnabled) > 0) then {
	private _loadedPlayers = call FUNC(loadAllPlayers);
	(format ["[KEKO] (Peristency) loaded %1 players", _loadedPlayers]) remoteExec ["systemChat", _player];
};

if (GVAR(vehiclesEnabled) > 0) then {
	private _loadedVehicles = call FUNC(loadAllVehicles);
	(format ["[KEKO] (Peristency) loaded %1 vehicles", _loadedVehicles]) remoteExec ["systemChat", _player];
};

if (GVAR(cratesEnabled) > 0) then {
	private _loadedCrates = call FUNC(loadAllCrates);
	(format ["[KEKO] (Peristency) loaded %1 crates", _loadedCrates]) remoteExec ["systemChat", _player];
};
