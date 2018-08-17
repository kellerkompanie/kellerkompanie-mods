_allPlaneObjects = allMissionObjects "Plane";
_allHelicopterObjects = allMissionObjects "Helicopter";
_allShipObjects = allMissionObjects "Ship";
_allCarObjects = allMissionObjects "Car";
_allTankObjects = allMissionObjects "Tank";

_allPossibleVehicles = [];
_allPossibleVehicles = _allPossibleVehicles + _allPlaneObjects;
_allPossibleVehicles = _allPossibleVehicles + _allHelicopterObjects;
_allPossibleVehicles = _allPossibleVehicles + _allShipObjects;
_allPossibleVehicles = _allPossibleVehicles + _allCarObjects;
_allPossibleVehicles = _allPossibleVehicles + _allTankObjects;

diag_log text format ["[KEKO] (persistency) saveAllVehicles: saving %1 vehicles", count _allPossibleVehicles];
_successfulSaves = 0;
{
  _retVal = _x call keko_persistency_fnc_saveVehicle;
  if(_retVal) then {
    _successfulSaves = _successfulSaves + 1;
  };
} forEach _allPossibleVehicles;
diag_log text format ["[KEKO] (persistency) saveAllVehicles: saved %1/%2 vehicles successfully", _successfulSaves, count _allPossibleVehicles];
