#include "script_component.hpp"

params["_logic"];

INFO("running moduleRespawn3den");

private _respawnSide = _logic getVariable [QGVAR(RespawnSide), 0];

private _objects = synchronizedObjects _logic;
if ((count _objects) > 0) then {
    {
        private _objectPosAGL = ASLToAGL getPosASL _x;
        TRACE_2("setting respawn to position of: %1 @ %2", _x, _objectPosAGL);

        [_objectPosAGL, _respawnSide] call FUNC(setRespawnPosition);
    } forEach _objects;
} else {
    [getPos _logic, _respawnSide] call FUNC(setRespawnPosition);
};
