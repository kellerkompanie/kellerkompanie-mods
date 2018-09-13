#include "script_component.hpp"

params["_logic","_units","_activated"];

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
