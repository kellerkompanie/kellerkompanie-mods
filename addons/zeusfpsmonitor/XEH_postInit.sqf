#include "script_component.hpp"

if (!GVAR(enabled)) exitWith { };
if (!hasInterface)  exitWith { };

// let each client update their FPS into a public variable based on a fixed update interval
[{
    player setVariable [QGVAR(PlayerFPS), floor diag_fps, true];
}, GVAR(updateInterval)] call CBA_fnc_addPerFrameHandler;

call FUNC(initalizeUI);
