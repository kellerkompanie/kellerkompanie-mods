#include "script_component.hpp"

if (EGVAR(persistency_settings,cratesEnabled) == 0) exitWith{WARNING("saveAllCrates: persistency for crates is disabled, exiting!"); false};

private _allPossibleCrates = allMissionObjects "ReammoBox_F";
TRACE_1("saveAllCrates: saving crates", count _allPossibleCrates);
private _successfulSaves = 0;
{
	private _isBlacklisted = _x getVariable [QEGVAR(persistency_settings,isBlacklisted), false];
	private _selectivePersistencyEnabled = _x getVariable [QEGVAR(persistency_settings,persistencyEnabled), false];

	if(!_isBlacklisted && ( EGVAR(persistency_settings,cratesEnabled) == 1 || (EGVAR(persistency_settings,cratesEnabled) == 2 && _selectivePersistencyEnabled) ) ) then {
		private _retVal = _x call FUNC(saveCrate);
		if(_retVal) then {
			_successfulSaves = _successfulSaves + 1;
		};
	};
} forEach _allPossibleCrates;
TRACE_2("saveAllCrates: saved x/y crates successfully", _successfulSaves, count _allPossibleCrates);

(format ["[KEKO] (persistency) saved %1 crates", _successfulSaves]) remoteExec ["systemChat", -2];
