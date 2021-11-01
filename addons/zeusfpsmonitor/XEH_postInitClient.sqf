#include "script_component.hpp"

if (!GVAR(enabled)) exitWith { };
if (!hasInterface)  exitWith { };

// let each client send their FPS to the server at a fixed update interval
[{
    [QGVAR(FPS), [getPlayerUID player, floor diag_fps]] call CBA_fnc_serverEvent;
}, GVAR(updateInterval)] call CBA_fnc_addPerFrameHandler;

call FUNC(initializeUI);