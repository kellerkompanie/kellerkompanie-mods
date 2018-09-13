if !(keko_settings_persistency_cratesEnabled) exitWith{diag_log text "[KEKO] (persistency) saveAllCrates: persistency for crates is disabled, exiting!"; false};

_allPossibleCrates = allMissionObjects "ReammoBox_F";
diag_log text format ["[KEKO] (persistency) saveAllCrates: saving %1 crates", count _allPossibleCrates];
_successfulSaves = 0;
{
  _retVal = _x call keko_persistency_fnc_saveCrate;
  if(_retVal) then {
    _successfulSaves = _successfulSaves + 1;
  };
} forEach _allPossibleCrates;
diag_log text format ["[KEKO] (persistency) saveAllCrates: saved %1/%2 crates successfully", _successfulSaves, count _allPossibleCrates];