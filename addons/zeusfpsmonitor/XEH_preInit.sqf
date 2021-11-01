#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

GVAR(playerToFPSMap) = createHashMap;

[
    QGVAR(enabled), // key/reference variable
    "LIST", // type of setting
    ["Zeus FPS Monitor", "Enable/Disable Zeus FPS Monitor"], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [true, false], // values
        ["Enabled", "Disabled"], // names
        0 // default index
    ]
] call cba_settings_fnc_init;

[
    QGVAR(updateInterval), // key/reference variable
    "SLIDER", // type of setting
    ["FPS update interval", "Decides how often clients send their FPS to the server (in seconds)"], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        1,  // min value
        60, // max value
        5, // default value
        0   // number of trailing decimals
    ],
    1
] call cba_settings_fnc_init;

[
    QGVAR(broadcastInterval), // key/reference variable
    "SLIDER", // type of setting
    ["FPS broadcast interval", "Decides how often server sends the FPS information to the admins/zeus (in seconds)"], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        1,  // min value
        60, // max value
        5, // default value
        0   // number of trailing decimals
    ],
    1
] call cba_settings_fnc_init;

[
    QGVAR(showUI), // key/reference variable
    "LIST", // type of setting
    ["Show Zeus UI", "Show or hide frame display for Zeus."], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [true, false], // values
        ["Enabled", "Disabled"], // names
        0 // default index
    ],
    2,
    { call FUNC(initalizeUI) }
] call cba_settings_fnc_init;

ADDON = true;
