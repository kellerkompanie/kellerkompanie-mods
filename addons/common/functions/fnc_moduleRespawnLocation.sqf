#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Zeus module callback for setting the respawn position.
 *
 * Arguments:
 * 0: Placed module <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _logic call keko_common_fnc_moduleRespawnLocation
 *
 */

params["_logic","","_activated"];

if !(_activated) exitWith {};
if !(local _logic) exitWith {};

if(!("respawn" in allMapMarkers)) then
{
    createMarker ["respawn", getPos _logic];
}
else
{
    "respawn" setMarkerPos getPos _logic;
};

deletevehicle _logic;
