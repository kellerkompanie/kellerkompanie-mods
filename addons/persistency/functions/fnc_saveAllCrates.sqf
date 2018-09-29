#include "script_component.hpp"

if !(EGVAR(persistency_settings,cratesEnabled)) exitWith{WARNING("saveAllCrates: persistency for crates is disabled, exiting!"); false};

private _allPossibleCrates = allMissionObjects "ReammoBox_F";
TRACE_1("saveAllCrates: saving crates", count _allPossibleCrates);
private _successfulSaves = 0;
{
  private _retVal = _x call FUNC(saveCrate);
  if(_retVal) then {
    _successfulSaves = _successfulSaves + 1;
  };
} forEach _allPossibleCrates;
TRACE_2("saveAllCrates: saved x/y crates successfully", _successfulSaves, count _allPossibleCrates);
