#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;
if (GVAR(vehiclesEnabled) == 0) exitWith{WARNING("saveAllVehicles: persistency for vehicles is disabled, exiting!"); 0};

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

INFO_1("saveAllVehicles: saving vehicles", count _allPossibleVehicles);

private _successfulSaves = 0;
{
	private _isBlacklisted = _x getVariable [QGVAR(isBlacklisted), false];
	private _selectivePersistencyEnabled = _x getVariable [QGVAR(persistencyEnabled), false];

	if( (!_isBlacklisted) && ( (GVAR(vehiclesEnabled) == PERSISTENCY_ENABLED) || ( (GVAR(vehiclesEnabled) == PERSISTENCY_SELECTIVE) && _selectivePersistencyEnabled ) ) ) then {
		private _retVal = _x call FUNC(saveVehicle);
		if(_retVal) then {
			_successfulSaves = _successfulSaves + 1;
		};
	};
} forEach _allPossibleVehicles;

INFO_2("saveAllVehicles: saved %1/%2 vehicles successfully", _successfulSaves, count _allPossibleVehicles);

_successfulSaves
