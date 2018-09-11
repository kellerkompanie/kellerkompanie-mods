if !(keko_settings_persistency_playersEnabled) exitWith{diag_log text "[KEKO] (persistency) loadAllPlayers: persistency for player is disabled, exiting!"; false};

_allHCs = entities "HeadlessClient_F";
_allHPs = allPlayers - _allHCs;

{
	_x call keko_persistency_fnc_loadPlayerLoadout;
} forEach _allHPs;

true
