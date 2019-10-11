#include "script_component.hpp"

params["_logic"];

if !(isServer) exitWith {};

private _syncedObjects = synchronizedObjects _logic;

if (count _syncedObjects == 0) exitWith {systemChat "ERROR: Shipping path module is not synced with anything!";};

private _shippingDirection = _logic getVariable ["shippingDirection", 0];
private _checkpoints = [];
private _industrial = objNull;

{
    if(_x isKindOf QGVAR(moduleLocation3den)) then {
        private _location = _x;
        private _locationType = _location getVariable ["loc_type", 0];

        switch (_locationType) do {
                case 1: {
                    /* Checkpoint */
                    private _locationVariable = format ["%1", _location];
                    _checkpoints pushBack _locationVariable;
                };
                case 5: {
                    /* Industrial Complex */
                    _industrial = _location;
                };
        };
    };
} forEach _syncedObjects;

if (count _checkpoints == 0) exitWith {systemChat format ["ERROR: Shipping path module %1 must be synced to at least one checkpoint location!", _logic];};
if (isNull _industrial) exitWith {systemChat format ["ERROR: Shipping path module %1 must be synced to a industrial location!", _logic];};

switch (_shippingDirection) do {
    case 0: {
        /* SW */
        _industrial setVariable [QGVAR(checkpointsSW), _checkpoints];
    };
    case 1: {
        /* NW */
        _industrial setVariable [QGVAR(checkpointsNW), _checkpoints];
    };
    case 2: {
        /* NE */
        _industrial setVariable [QGVAR(checkpointsNE), _checkpoints];
    };
    case 3: {
        /* SE */
        _industrial setVariable [QGVAR(checkpointsSE), _checkpoints];
    };
};

deleteVehicle _logic;
