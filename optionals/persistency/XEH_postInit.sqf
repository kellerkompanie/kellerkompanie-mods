#include "script_component.hpp"

if !(GVAR(enabled)) exitWith{};
if (GVAR(key) == "") exitWith{};

if(GVAR(autosaveInterval) > 0) then {
    [] spawn {
        [
            {
                if ( GVAR(playersEnabled) > 0 ) then {
                    call FUNC(saveAllPlayers);
                };

                if ( GVAR(vehiclesEnabled) > 0 ) then {
                    call FUNC(saveAllVehicles);
                };

                if ( GVAR(cratesEnabled) > 0 ) then {
                    call FUNC(saveAllCrates);
                };
            },
            [],
            GVAR(autosaveInterval)
        ] call CBA_fnc_waitAndExecute;
    };
};

// TODO optimize: do only if enabled or only on selective
// initalize crates
{
    private _objectVariable = _x call FUNC(initObject);
    if (_objectVariable call FUNC(dbCrateExists)) then {
        _x call FUNC(loadCrateObject);
    };
} forEach allMissionObjects "ReammoBox_F";

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

// TODO optimize: do only if enabled or only on selective
{
    private _objectVariable = _x call FUNC(initObject);
    if (_objectVariable call FUNC(dbCrateExists)) then {
        _x call FUNC(loadVehicleObject);
    };
} forEach _allPossibleVehicles;


if (GVAR(loadCratesOnStart)) then {
    call FUNC(loadAllCrates);
};

if (GVAR(loadVehiclesOnStart)) then {
    call FUNC(loadAllVehicles);
};
