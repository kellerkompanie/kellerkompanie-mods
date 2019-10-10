#include "script_component.hpp"

// Workaround for garrisonned units
["CAManBase", "Local", {
    params ["_unit", "_local"];

    // check if unit had path disabled before being transferred
    if (_local && _unit getVariable [QGVAR(disablePath), false]) then {
        doStop _unit;
        _unit disableAI "PATH";
    };
}] call CBA_fnc_addClassEventHandler;

// fix for RHS engine spool-up
RHS_ENGINE_STARTUP_OFF = true;
