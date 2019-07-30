#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;
if (GVAR(playersEnabled) == 0) exitWith{WARNING("saveAllPlayers: persistency for players is disabled, exiting!"); 0};

private _allHCs = entities "HeadlessClient_F";
private _allPlayers = allPlayers - _allHCs;

private _successfulSaves = 0;
{
    private _isBlacklisted = _x getVariable [QGVAR(isBlacklisted), false];
    private _selectivePersistencyEnabled = _x getVariable [QGVAR(persistencyEnabled), false];

    if(!_isBlacklisted && ( GVAR(playersEnabled) == PERSISTENCY_ENABLED || (GVAR(playersEnabled) == PERSISTENCY_SELECTIVE && _selectivePersistencyEnabled) ) ) then {
        private _retVal = _x call FUNC(savePlayerLoadout);
        if(_retVal) then {
            _successfulSaves = _successfulSaves + 1;
        };
    };
} forEach _allPlayers;

INFO_2("saveAllPlayers: saved %1/%2 crates successfully", _successfulSaves, count _allPlayers);

_successfulSaves
