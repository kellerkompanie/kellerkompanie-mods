#include "script_component.hpp"

if (EGVAR(persistency_settings,playersEnabled) == 0) exitWith{WARNING("loadAllPlayers: persistency for player is disabled, exiting!"); false};

private _allHCs = entities "HeadlessClient_F";
private _allHPs = allPlayers - _allHCs;

{
	_x call FUNC(loadPlayerLoadout);
} forEach _allHPs;

true
