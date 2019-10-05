#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

GVAR(corpses) = [];
GVAR(wrecks) = [];

[
    QGVAR(enabled), // key/reference variable
    "LIST", // type of setting
    [localize LSTRING(option), localize LSTRING(optionTooltip)], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [true,false], // values
        [localize LSTRING(enabled), localize LSTRING(disabled)], // names
        0 // default index
    ],
    1
] call cba_settings_fnc_init;

[
    QGVAR(corpseMode), // key/reference variable
    "LIST", // type of setting
    [localize LSTRING(corpseMode), localize LSTRING(corpseModeTooltip)], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [0, 60, 5 * 60, 10 * 60, 15 * 60, 20 * 60, 30 * 60], // values
        [
            localize LSTRING(disabled),
            localize LSTRING(everyMinute),
            localize LSTRING(everyFiveMinutes),
            localize LSTRING(everyTenMinutes),
            localize LSTRING(everyFifteenMinutes),
            localize LSTRING(everyTwentyMinutes),
            localize LSTRING(everyThirtyMinutes)
        ], // names
        2 // default index
    ],
    1
] call cba_settings_fnc_init;

[
    QGVAR(wreckMode), // key/reference variable
    "LIST", // type of setting
    [localize LSTRING(wreckMode), localize LSTRING(wreckModeTooltip)], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [0, 60, 5 * 60, 10 * 60, 15 * 60, 20 * 60, 30 * 60], // values
        [
            localize LSTRING(disabled),
            localize LSTRING(everyMinute),
            localize LSTRING(everyFiveMinutes),
            localize LSTRING(everyTenMinutes),
            localize LSTRING(everyFifteenMinutes),
            localize LSTRING(everyTwentyMinutes),
            localize LSTRING(everyThirtyMinutes)
        ], // names
        3 // default index
    ],
    1
] call cba_settings_fnc_init;

ADDON = true;
