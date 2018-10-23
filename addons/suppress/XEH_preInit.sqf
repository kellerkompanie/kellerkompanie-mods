#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

GVAR(mainArray)	= [];
GVAR(suppressed) = false;
GVAR(Threshold) = 0;	// Changing value
GVAR(lastShotAt) = 0;	// The time the player got shot at last time (Just creates the variable)
GVAR(variableHandler) = call CBA_fnc_createNamespace;
GVAR(enabled) = true;

[
    QGVAR(enabled),
    "CHECKBOX",
    ["Enable Supress", "Enable Suppress Effect"],
    "Kellerkompanie Suppress",
    true,
    nil,
    {
        params ["_value"];
        GVAR(enabled) = _value;
    }
] call CBA_Settings_fnc_init;

ADDON = true;
