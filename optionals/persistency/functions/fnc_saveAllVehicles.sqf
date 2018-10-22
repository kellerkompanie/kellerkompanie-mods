#include "script_component.hpp"

if (EGVAR(persistency_settings,vehiclesEnabled) == 0) exitWith{WARNING("saveAllVehicles: persistency for vehicles is disabled, exiting!"); false};

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
	private _isBlacklisted = _x getVariable [QEGVAR(persistency_settings,isBlacklisted), false];
	private _selectivePersistencyEnabled = _x getVariable [QEGVAR(persistency_settings,persistencyEnabled), false];

	if(!_isBlacklisted && ( EGVAR(persistency_settings,cratesEnabled) == 1 || (EGVAR(persistency_settings,cratesEnabled) == 2 && _selectivePersistencyEnabled) ) ) then {
		private _retVal = _x call FUNC(saveVehicle);
		if(_retVal) then {
			_successfulSaves = _successfulSaves + 1;
		};
	};
} forEach _allPossibleVehicles;
TRACE_2("saveAllVehicles: saved x/y vehicles successfully", _successfulSaves, count _allPossibleVehicles);

(format ["[KEKO] (persistency) saved %1 vehicles", _successfulSaves]) remoteExec ["systemChat", -2];
