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
 * _logic call keko_common_fnc_moduleRespawnPosition3den
 *
 */

params["_logic"];

INFO("running moduleRespawn3den");

private _respawnSide = _logic getVariable [QGVAR(RespawnSide), 0];

private _objects = synchronizedObjects _logic;
if ((count _objects) > 0) then {
    {
        private _objectPosAGL = ASLToAGL getPosASL _x;

        // add some extra height to avoid spawning, e.g., in the floor of the carrier
        _objectPosAGL = [_objectPosAGL select 0, _objectPosAGL select 1, (_objectPosAGL select 2) + 0.001];
        INFO_2("setting respawn to position of: %1 @ %2", _x, _objectPosAGL);

        [_objectPosAGL, _respawnSide] call FUNC(setRespawnPosition);
    } forEach _objects;
} else {
    [getPos _logic, _respawnSide] call FUNC(setRespawnPosition);
};
