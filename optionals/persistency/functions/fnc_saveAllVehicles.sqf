#include "script_component.hpp"

if !(keko_settings_persistency_vehiclesEnabled) exitWith{diag_log text "[KEKO] (persistency) saveAllVehicles: persistency for vehicles is disabled, exiting!"; false};

private _allPlaneObjects = allMissionObjects "Plane";
private _allHelicopterObjects = allMissionObjects "Helicopter";
private _allShipObjects = allMissionObjects "Ship";
private _allCarObjects = allMissionObjects "Car";
private _allTankObjects = allMissionObjects "Tank";

private _allPossibleVehicles = [];
_allPossibleVehicles = _allPossibleVehicles + _allPlaneObjects;
_allPossibleVehicles = _allPossibleVehicles + _allHelicopterObjects;
_allPossibleVehicles = _allPossibleVehicles + _allShipObjects;
_allPossibleVehicles = _allPossibleVehicles + _allCarObjects;
_allPossibleVehicles = _allPossibleVehicles + _allTankObjects;

diag_log text format ["[KEKO] (persistency) saveAllVehicles: saving %1 vehicles", count _allPossibleVehicles];
private _successfulSaves = 0;
{
  private _retVal = _x call keko_persistency_fnc_saveVehicle;
  if(_retVal) then {
    _successfulSaves = _successfulSaves + 1;
  };
} forEach _allPossibleVehicles;
diag_log text format ["[KEKO] (persistency) saveAllVehicles: saved %1/%2 vehicles successfully", _successfulSaves, count _allPossibleVehicles];
