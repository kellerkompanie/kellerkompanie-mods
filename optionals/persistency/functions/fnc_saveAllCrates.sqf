#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;
if (GVAR(cratesEnabled) == 0) exitWith{0};

private _allPossibleCrates = allMissionObjects "ReammoBox_F";

private _successfulSaves = 0;
{
    private _isBlacklisted = _x getVariable [QGVAR(isBlacklisted), false];
    private _selectivePersistencyEnabled = _x getVariable [QGVAR(persistencyEnabled), false];

    if(!_isBlacklisted && ( GVAR(cratesEnabled) == PERSISTENCY_ENABLED || (GVAR(cratesEnabled) == PERSISTENCY_SELECTIVE && _selectivePersistencyEnabled) ) ) then {
        private _retVal = _x call FUNC(saveCrate);
        if(_retVal) then {
            _successfulSaves = _successfulSaves + 1;
        };
    };
} forEach _allPossibleCrates;

_successfulSaves
