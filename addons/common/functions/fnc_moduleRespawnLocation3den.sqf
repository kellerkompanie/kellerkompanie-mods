#include "script_component.hpp"
/*
 * Author: Schwaggot
 * 3den module callback for setting the respawn position.
 *
 * Arguments:
 * 0: Placed module <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _logic call keko_common_fnc_moduleRespawnLocation3den
 *
 */

params ["_logic"];

if(isServer) then {
    createMarker ["respawn", getPos _logic];
    deletevehicle _logic;
};
