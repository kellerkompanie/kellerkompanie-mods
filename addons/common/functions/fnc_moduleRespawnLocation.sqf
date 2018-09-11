_logic     = _this select 0;
_units     = _this select 1;
_activated = _this select 2;

if !(_activated && local _logic) exitWith {};

if(!("respawn" in allMapMarkers)) then 
{
    createMarker ["respawn", getPos _logic];
}
else
{
    "respawn" setMarkerPos getPos _logic;
};

deletevehicle _logic;