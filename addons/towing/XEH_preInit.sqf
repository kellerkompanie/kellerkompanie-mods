#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_CATEGORY "Kellerkompanie Towing"

[
    QGVAR(enabled), // key/reference variable
    "LIST", // type of setting
    ["Advanced Towing", "Enable/Disable Advanced Towing"], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [true,false], // values
        ["Enabled","Disabled"], // names
        0 // default index
    ],
    1
] call cba_settings_fnc_init;

[
    QGVAR(maxRopeLength), // key/reference variable
    "SLIDER", // type of setting
    ["Max Rope Length", "Set the maximum length of the towing rope"], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        5,  // min value
        30, // max value
        10, // default value
        0   // number of trailing decimals
    ],
    1
] call cba_settings_fnc_init;

[
    QGVAR(classRestriction), // key/reference variable
    "LIST", // type of setting
    ["Limit to class", "Limit towing ability to specific class"], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [0,1,2,3], // values
        ["All", "Engineer", "Repair Specialist", "Engineer & Repair Specialist"], // names
        0 // default index
    ],
    1
] call cba_settings_fnc_init;

[
    QGVAR(maxTowedVehicles), // key/reference variable
    "SLIDER", // type of setting
    ["Max towed vehicles", "Set the maximum number of vehicles that can be towed"], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        1,  // min value
        3, // max value
        1, // default value
        0   // number of trailing decimals
    ],
    1
] call cba_settings_fnc_init;

ADDON = true;
