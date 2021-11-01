#include "script_component.hpp"

if (!GVAR(enabled)) exitWith { };

// send FPS information to each admin/zeus at a fixed broadcast interval
[{
    {
        _x publicVariableClient QGVAR(playerToFPSMap); 
    } forEach GVAR(zeusPlayers);
}, GVAR(broadcastInterval)] call CBA_fnc_addPerFrameHandler;