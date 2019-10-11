#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Sets the respawn position for a specific side.
 *
 * Arguments:
 * 0: New respawn position <ARRAY>
 * 1: Side of respawn 1 = WEST, 2 = INDEPENDENT, 3 = EAST, 4 = CIVILIAN <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [[0,0,0], 1] call keko_common_fnc_setRespawnPosition
 *
 */

params ["_position", "_respawnSide"];

private _respawnSuffix = "";

switch(_respawnSide) do {
    case 1: {
        _respawnSuffix = "_west";
    };
    case 2: {
        _respawnSuffix = "_guerilla";
    };
    case 3: {
        _respawnSuffix = "_east";
    };
    case 4: {
        _respawnSuffix = "_civilian";
    };
    default {
        _respawnSuffix = "";
    };
};

/*if(!("respawn" in allMapMarkers)) then
{
    createMarker ["respawn", getPos _logic];
}*/

private _searchString = "respawn" + _respawnSuffix;

{
    private _idx = _x find _searchString;
    if(_idx == 0) then {
        // marker name starts with respawn -> delete it
        deleteMarker _x;
    };
} forEach allMapMarkers;

private _marker = createMarker [_searchString, _position];
_marker setMarkerAlpha 0;

[_searchString, _position] remoteExec ["setMarkerPosLocal", [0, -2] select isDedicated, true];
