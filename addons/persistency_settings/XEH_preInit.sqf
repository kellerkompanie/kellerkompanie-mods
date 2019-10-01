#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;



/*
CBA settings https://github.com/CBATeam/CBA_A3/wiki/CBA-Settings-System#arguments-of-cba_settings_fnc_init

Arguments of CBA_Settings_fnc_init

Parameters:
    _setting     - Unique setting name. Matches resulting variable name <STRING>
    _settingType - Type of setting. Can be "CHECKBOX", "EDITBOX", "LIST", "SLIDER" or "COLOR" <STRING>
    _title       - Display name or display name + tooltip (optional, default: same as setting name) <STRING, ARRAY>
    _category    - Category for the settings menu + optional sub-category <STRING, ARRAY>
    _valueInfo   - Extra properties of the setting depending of _settingType. See examples below <ANY>
    _isGlobal    - 1: all clients share the same setting, 2: setting can't be overwritten (optional, default: 0) <ARRAY>
    _script      - Script to execute when setting is changed. (optional) <CODE>

*/

[
    QEGVAR(persistency,enabled), // key/reference variable
    "LIST", // type of setting
    ["Persistency", "Enable/Disable Persistency"], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [true,false], // values
        [localize LSTRING(enabled), localize LSTRING(disabled)], // names
        1 // default index
    ],
    1
] call cba_settings_fnc_init;


[
    QEGVAR(persistency,key),
    "EDITBOX",
    ["Key", "Database storage key"],
    localize LSTRING(cbaSettingsCategory),
    "",
    1
] call cba_settings_fnc_init;


[
    QEGVAR(persistency,autosaveInterval),
    "LIST",
    ["Autosave", "Interval for Autosave"],
    localize LSTRING(cbaSettingsCategory),
    [
        [0,60,300,600],
        ["Disabled","1 Minute","5 Minutes","10 Minutes"],
        0
    ],
    1
] call cba_settings_fnc_init;


[
    QEGVAR(persistency,vehiclesEnabled), // key/reference variable
    "LIST", // type of setting
    ["Vehicle Persistency", "Enable/Disable vehicle persistency"], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [PERSISTENCY_DISABLED,PERSISTENCY_ENABLED,PERSISTENCY_SELECTIVE], // values
        ["Disabled", "Enabled (for all)", "Selective"], // names
        0 // default index
    ],
    1
] call cba_settings_fnc_init;

[
    QEGVAR(persistency,cratesEnabled), // key/reference variable
    "LIST", // type of setting
    ["Crate Persistency", "Enable/Disable crate persistency"], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [PERSISTENCY_DISABLED,PERSISTENCY_ENABLED,PERSISTENCY_SELECTIVE], // values
        ["Disabled", "Enabled (for all)", "Selective"], // names
        0 // default index
    ],
    1
] call cba_settings_fnc_init;

[
    QEGVAR(persistency,playersEnabled), // key/reference variable
    "LIST", // type of setting
    ["Player Persistency", "Enable/Disable player persistency"], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [PERSISTENCY_DISABLED,PERSISTENCY_ENABLED,PERSISTENCY_SELECTIVE], // values
        ["Disabled", "Enabled (for all)", "Selective"], // names
        0 // default index
    ],
    1
] call cba_settings_fnc_init;

[
    QEGVAR(persistency,synchronizePlayerPosition), // key/reference variable
    "LIST", // type of setting
    ["Synchronize Player Position", "Enable/Disable synchronization of player position."], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [false,true], // values
        [localize LSTRING(disabled), localize LSTRING(enabled)], // names
        0 // default index
    ],
    1
] call cba_settings_fnc_init;

[
    QEGVAR(persistency,loadCratesOnStart), // key/reference variable
    "LIST", // type of setting
    ["Load crates", "Enable/Disable loading crates from DB upon mission start."], // name and tooltip
    [localize LSTRING(cbaSettingsCategory), "Load on mission start"], // category
    [
        [false,true], // values
        [localize LSTRING(disabled), localize LSTRING(enabled)], // names
        1 // default index
    ],
    1
] call cba_settings_fnc_init;

[
    QEGVAR(persistency,loadVehiclesOnStart), // key/reference variable
    "LIST", // type of setting
    ["Load vehicles", "Enable/Disable loading vehicles from DB upon mission start."], // name and tooltip
    [localize LSTRING(cbaSettingsCategory), "Load on mission start"], // category
    [
        [false,true], // values
        [localize LSTRING(disabled), localize LSTRING(enabled)], // names
        1 // default index
    ],
    1
] call cba_settings_fnc_init;

[
    QEGVAR(persistency,loadPlayersOnStart), // key/reference variable
    "LIST", // type of setting
    ["Load players", "Enable/Disable loading players from DB upon mission start."], // name and tooltip
    [localize LSTRING(cbaSettingsCategory), "Load on mission start"], // category
    [
        [false,true], // values
        [localize LSTRING(disabled), localize LSTRING(enabled)], // names
        1 // default index
    ],
    1
] call cba_settings_fnc_init;

[
    QEGVAR(persistency,moneyEnabled), // key/reference variable
    "LIST", // type of setting
    ["Money Persistency", "Enable/Disable money persistency"], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [true,false], // values
        [localize LSTRING(enabled), localize LSTRING(disabled)], // names
        0 // default index
    ],
    1
] call cba_settings_fnc_init;

[
    QEGVAR(persistency,defaultMoney),
    "EDITBOX",
    ["Default Cash", "Default cash given to new players"],
    localize LSTRING(cbaSettingsCategory),
    "100",
    1
] call cba_settings_fnc_init;

[
    QEGVAR(persistency,defaultMoneyBank),
    "EDITBOX",
    ["Default Bank Account", "Default account amount given to new players"],
    localize LSTRING(cbaSettingsCategory),
    "1000",
    1
] call cba_settings_fnc_init;

[
    QEGVAR(persistency,showUI), // key/reference variable
    "LIST", // type of setting
    ["UI overlay", "Show or hide UI overlay for Zeus."], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [true, false], // values
        ["Enabled", "Disabled"], // names
        0 // default index
    ],
    2,
    { call FUNC(initalizeUI) }
] call cba_settings_fnc_init;

[
    QEGVAR(persistency,uiUpdateInterval), // key/reference variable
    "SLIDER", // type of setting
    ["UI update interval", "Set the FPS update interval in seconds"], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        60,  // min value
        360, // max value
        60, // default value
        0   // number of trailing decimals
    ],
    1
] call cba_settings_fnc_init;

ADDON = true;
