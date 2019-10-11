#include "script_component.hpp"

params ["_logic"];

if (!isServer) exitWith {};

private _syncedObjects = synchronizedObjects _logic;

if(count _syncedObjects == 1) then {
    private _syncedObject = _syncedObjects select 0;

    if(_syncedObject isKindOf QGVAR(modulePOI3den)) then {
        private _poi_id = format ["%1", _syncedObject];
        private _markerName = _poi_id + "_store";
        private _marker = createMarker [_markerName, getPos _logic];
        _marker setMarkerAlpha 0;
    }
    else {
        systemChat "ERROR: Store Point Module needs to be synchronized with POI module";
    };
} else {
        systemChat "ERROR: Store Point Module cannot be synchronized with more than 1 object";
};
