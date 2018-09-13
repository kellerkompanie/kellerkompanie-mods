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
#define CBA_SETTINGS_CAT "Kellerkompanie Unknown Weapon"

[
    QGVAR(enabled),
    "CHECKBOX",
    ["Enable","Enable/Disable punishing unknown weapons"],
    CBA_SETTINGS_CAT,
    true,
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(keko_loadout),
    "CHECKBOX",
    ["Add Keko faction weapons","Set if the server should sync weapons from the selected Kellerkompanie Loadout Faction."],
    CBA_SETTINGS_CAT,
    true,
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(add_weapons),
    "EDITBOX",
    ["Add to whitelist","Use this to add primary weapons players will not have on mission start. Write in classnames with commas separating them, NO WHITESPACES!"],
    CBA_SETTINGS_CAT,
    "arifle_Mk20_plain_F1,arifle_CTAR_blk_F1",
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(dispersion_add),
    "SLIDER",
    ["Add weapon dispersion","This will add a flat value to dispersion"],
    CBA_SETTINGS_CAT,
    [0, 200, 25, 0],
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(jamchance_add),
    "SLIDER",
    ["Add jam chance","This will add the selected percentage to the weapon"],
    CBA_SETTINGS_CAT,
    [0, 100, 1.5, 2],
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(reload_failure),
    "SLIDER",
    ["Reload failure chance","Chance that the reload wil fail and leave an empty mag inside the gun"],
    CBA_SETTINGS_CAT,
    [0, 100, 25, 0],
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(jam_explosion),
    "SLIDER",
    ["Chance to destroy weapon on jam","Chance that the unkown weapon will be destroyed and inflict small damage to player when it jams"],
    CBA_SETTINGS_CAT,
    [0, 100, 2, 2],
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(briefing),
    "CHECKBOX",
    ["Add briefing entry","Add a diary entry that this script is active"],
    CBA_SETTINGS_CAT,
    true,
    true
] call CBA_Settings_fnc_init;


ADDON = true;
