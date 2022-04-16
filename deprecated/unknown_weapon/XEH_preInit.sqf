#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[
    QGVAR(enabled),
    "CHECKBOX",
    ["Enable","Enable/Disable punishing unknown weapons"],
    localize LSTRING(cbaSettingsCategory),
    true,
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(keko_loadout),
    "CHECKBOX",
    ["Add Keko faction weapons","Set if the server should sync weapons from the selected Kellerkompanie Loadout Faction."],
    localize LSTRING(cbaSettingsCategory),
    true,
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(add_weapons),
    "EDITBOX",
    ["Add to whitelist","Use this to add primary weapons players will not have on mission start. Write in classnames with commas separating them, NO WHITESPACES!"],
    localize LSTRING(cbaSettingsCategory),
    "arifle_Mk20_plain_F1,arifle_CTAR_blk_F1",
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(dispersion_add),
    "SLIDER",
    ["Add weapon dispersion","This will add a flat value to dispersion"],
    localize LSTRING(cbaSettingsCategory),
    [0, 200, 25, 0],
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(jamchance_add),
    "SLIDER",
    ["Add jam chance","This will add the selected percentage to the weapon"],
    localize LSTRING(cbaSettingsCategory),
    [0, 100, 1.5, 2],
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(reload_failure),
    "SLIDER",
    ["Reload failure chance","Chance that the reload wil fail and leave an empty mag inside the gun"],
    localize LSTRING(cbaSettingsCategory),
    [0, 100, 25, 0],
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(jam_explosion),
    "SLIDER",
    ["Chance to destroy weapon on jam","Chance that the unkown weapon will be destroyed and inflict small damage to player when it jams"],
    localize LSTRING(cbaSettingsCategory),
    [0, 100, 2, 2],
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(briefing),
    "CHECKBOX",
    ["Add briefing entry","Add a diary entry that this script is active"],
    localize LSTRING(cbaSettingsCategory),
    true,
    true
] call CBA_Settings_fnc_init;


ADDON = true;
