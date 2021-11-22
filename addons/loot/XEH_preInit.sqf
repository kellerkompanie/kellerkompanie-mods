#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[
    QGVAR(preventCorpseLooting), // key/reference variable
    "LIST", // type of setting
    ["Prevent Corpse Looting", "Enable/Disable corpse looting."], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [true,false], // values
        [localize LSTRING(enabled), localize LSTRING(disabled)], // names
        0 // default index
    ],
    1
] call cba_settings_fnc_init;

[
    QGVAR(lootingDuration),
    "SLIDER",
    ["Looting duration", "How long it takes to transfer items to the vehicle."],
    localize LSTRING(cbaSettingsCategory),
    [1, 30, 3, 0],
    1
] call cba_settings_fnc_init;

ADDON = true;
