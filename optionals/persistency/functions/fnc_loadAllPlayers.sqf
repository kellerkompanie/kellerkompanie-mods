#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;

if (GVAR(playersEnabled) == 0) exitWith{WARNING("loadAllPlayers: persistency for player is disabled, exiting!"); 0};

private _allHCs = entities "HeadlessClient_F";
private _allHPs = allPlayers - _allHCs;

private _count = 0;
{
	_x call FUNC(loadPlayerLoadout);
	_count = _count + 1;
} forEach _allHPs;

_count
