#include "script_component.hpp"

if !(EGVAR(persistency_settings,vehiclesEnabled)) exitWith{WARNING("saveAllVehicles: persistency for vehicles is disabled, exiting!"); false};

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

TRACE_1("saveAllVehicles: saving vehicles", count _allPossibleVehicles);
private _successfulSaves = 0;
{
  private _retVal = _x call FUNC(saveVehicle);
  if(_retVal) then {
    _successfulSaves = _successfulSaves + 1;
  };
} forEach _allPossibleVehicles;
TRACE_2("saveAllVehicles: saved x/y vehicles successfully", _successfulSaves, count _allPossibleVehicles);
