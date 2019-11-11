#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[
    QGVAR(FAK_minAmount),
    "SLIDER",
    [localize LSTRING(settingFAKMinAmount), localize(settingFAKMinAmountTooltip)],
    localize LSTRING(cbaSettingsCategory),
    [0, 6, 3, 0],
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(manualKit_minAmount),
    "SLIDER",
    [localize LSTRING(settingManualKitMinAmount), localize(settingManualKitMinAmountTooltip)],
    localize LSTRING(cbaSettingsCategory),
    [0, 40, 10, 0],
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(litterEnabled), // key/reference variable
    "LIST", // type of setting
    [localize LSTRING(settingEnableLitter), localize LSTRING(settingEnableLitterTooltip)], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [true,false], // values
        [localize LSTRING(enabled), localize LSTRING(disabled)], // names
        0 // default index
    ],
    1
] call cba_settings_fnc_init;

[
    QGVAR(convertItems), // key/reference variable
    "LIST", // type of setting
    [localize LSTRING(convertItems), localize LSTRING(convertItemsTooltip)], // name and tooltip
    localize LSTRING(cbaSettingsCategory), // category
    [
        [true,false], // values
        [localize LSTRING(enabled), localize LSTRING(disabled)], // names
        0 // default index
    ],
    1
] call cba_settings_fnc_init;

ADDON = true;
