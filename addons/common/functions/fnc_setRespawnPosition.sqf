#include "script_component.hpp"

params ["_position", "_respawnSide"];

diag_log text format["[KEKO] (common) setting respawn position to %1 for side %2", _position, _respawnSide];

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
//_marker setMarkerPos _position;

diag_log text format["[KEKO] (common) %1 setMarkerPos %2", _marker, _position];
