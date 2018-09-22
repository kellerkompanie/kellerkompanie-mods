#include "script_component.hpp"

if !(keko_settings_persistency_playersEnabled) exitWith{diag_log text "[KEKO] (persistency) saveAllPlayers: persistency for players is disabled, exiting!"; false};

private _allHCs = entities "HeadlessClient_F";
private _allHPs = allPlayers - _allHCs;

{
	_x call keko_persistency_fnc_savePlayerLoadout;
} forEach _allHPs;

true
