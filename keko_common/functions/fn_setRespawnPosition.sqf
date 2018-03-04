params ["_position"];

diag_log text format["[KEKO] (common) setting respawn position to %1", _position];

/*if(!("respawn" in allMapMarkers)) then 
{
    createMarker ["respawn", getPos _logic];
}*/

{
	_idx = _x find "respawn";
	if(_idx == 0) then {
		// marker name starts with respawn -> delete it
		deleteMarker _x;
	};
} forEach allMapMarkers;


_marker = createMarker ["respawn", _position];
_marker setMarkerAlpha 0;