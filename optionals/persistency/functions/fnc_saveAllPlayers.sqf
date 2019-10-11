#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;
if (GVAR(playersEnabled) == 0) exitWith{0};

params [
    ["_forceSave", false]
];

private _allHCs = entities "HeadlessClient_F";
private _allPlayers = allPlayers - _allHCs;

private _successfulSaves = 0;
{
    private _isBlacklisted = _x getVariable [QGVAR(isBlacklisted), false];
    private _selectivePersistencyEnabled = _x getVariable [QGVAR(persistencyEnabled), false];

    if(!_isBlacklisted && ( GVAR(playersEnabled) == PERSISTENCY_ENABLED || (GVAR(playersEnabled) == PERSISTENCY_SELECTIVE && _selectivePersistencyEnabled) ) ) then {
        private _retVal = [_x, _forceSave, getPlayerUID _x] call FUNC(savePlayerLoadout);
        if(_retVal) then {
            _successfulSaves = _successfulSaves + 1;
        };
    };
} forEach _allPlayers;

_successfulSaves
