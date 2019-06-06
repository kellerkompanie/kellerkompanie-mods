#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_SETTINGS_CATEGORY "Kellerkompanie Carryable Weapon Holders"

[
    QGVAR(Enabled), // key/reference variable
    "LIST", // type of setting
    [localize LSTRING(enabled), localize LSTRING(tooltipEnable)], // name and tooltip
    CBA_SETTINGS_CATEGORY, // category
    [
        [true, false], // values
        [localize LSTRING(enabled), localize LSTRING(disabled)], // names
        0 // default index
    ],
    1
] call CBA_Settings_fnc_init;

[
    QGVAR(AllowedNumberOfItems),
    "SLIDER",
    [localize LSTRING(maxItems), localize LSTRING(maxItemsTooltip)],
    CBA_SETTINGS_CATEGORY,
    [1, 6, 2, 0],
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(CheckTimeout),
    "SLIDER",
    [localize LSTRING(checkTimeout), localize LSTRING(checkTimeoutTooltip)],
    CBA_SETTINGS_CATEGORY,
    [1, 6, 2, 0],
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(CheckRadius),
    "SLIDER",
    [localize LSTRING(checkRadius), localize LSTRING(checkRadiusTooltip)],
    CBA_SETTINGS_CATEGORY,
    [5, 50, 15, 0],
    true
] call CBA_Settings_fnc_init;

GVAR(Classlist) = ["GroundWeaponHolder", "WeaponHolderSimulated"];

ADDON = true;
