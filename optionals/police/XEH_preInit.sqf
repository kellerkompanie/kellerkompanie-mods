#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#include "\a3\editor_f\Data\Scripts\dikCodes.h"

["Kellerkompanie Police","keko_police_shout_key", "Shout", {_this call FUNC(surrenderUnits)}, "", [DIK_F, [true, false, false]]] call CBA_fnc_addKeybind;
["Kellerkompanie Police","keko_police_handcuff_key", "Handcuff", {_this call FUNC(handcuffUnit)}, "", [DIK_H, [true, false, false]]] call CBA_fnc_addKeybind;

["ace_captiveStatusChanged", FUNC(captiveStatusChanged)] call CBA_fnc_addEventHandler;

#define CBA_SETTINGS_CAT "Kellerkompanie Police"


[
    QGVAR(enable), // key/reference variable
    "LIST", // type of setting
    ["Enabled", "Enable/Disable police functions"], // name and tooltip
    CBA_SETTINGS_CATEGORY, // category
    [
        [true,false], // values
        ["Enabled","Disabled"], // names
        1 // default index
    ],
    1
] call cba_settings_fnc_init;

[
    QGVAR(surrenderChance),
    "SLIDER",
    ["Surrender Chance","Set the default surrender chance"],
    CBA_SETTINGS_CAT,
    [0, 1, 0.10, 2],
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(shoutDistance),
    "SLIDER",
    ["Shout Distance","How far away should AI be able to hear you?"],
    CBA_SETTINGS_CAT,
    [5, 50, 15, 0],
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(surrenderWounded),
    "CHECKBOX",
    ["Higher Chance if Wounded","Set if wounded enemies should have a higher chance of surrender."],
    CBA_SETTINGS_CAT,
    true,
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(fleeingChance),
    "SLIDER",
    ["Surrender Chance","Set the default surrender chance"],
    CBA_SETTINGS_CAT,
    [0, 1, 0.10, 2],
    true
] call CBA_Settings_fnc_init;


ADDON = true;
