#include "script_component.hpp"

if (EGVAR(persistency_settings,playersEnabled) == 0) exitWith{WARNING("saveAllPlayers: persistency for players is disabled, exiting!"); false};

private _allHCs = entities "HeadlessClient_F";
private _allHPs = allPlayers - _allHCs;

private _successfulSaves = 0;
{
	private _isBlacklisted = _x getVariable [QEGVAR(persistency_settings,isBlacklisted), false];
	private _selectivePersistencyEnabled = _x getVariable [QEGVAR(persistency_settings,persistencyEnabled), false];

	if(!_isBlacklisted && ( EGVAR(persistency_settings,cratesEnabled) == 1 || (EGVAR(persistency_settings,cratesEnabled) == 2 && _selectivePersistencyEnabled) ) ) then {
		private _retVal = _x call FUNC(savePlayerLoadout);
		if(_retVal) then {
			_successfulSaves = _successfulSaves + 1;
		};
	};
} forEach _allHPs;

(format ["[KEKO] (persistency) saved %1 players", _successfulSaves]) remoteExec ["systemChat", -2];

true
