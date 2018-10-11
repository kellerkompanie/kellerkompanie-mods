#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_SETTINGS_CAT "Kellerkompanie Carryable Weapon Holders"

[
	QGVAR(Enabled), // key/reference variable
	"LIST", // type of setting
	["Enabled", "Enable/Disable Carryable Weapon Holders"], // name and tooltip
	CBA_SETTINGS_CATEGORY, // category
	[
		[true,false], // values
		["Enabled","Disabled"], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;

[
    QGVAR(AllowedNumberOfItems),
    "SLIDER",
    ["Max. items to carry","Limit of items in weapon holder to allow carrying/dragging. Average man has 2 hands to keep at least 2 items, but don't be too transhuman and use backpacks to carry all extra stuff."],
    CBA_SETTINGS_CAT,
    [1, 6, 2, 0],
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(CheckTimeout),
    "SLIDER",
    ["Check timeout (in seconds)","Timeout between revealing weapon holders near the player."],
    CBA_SETTINGS_CAT,
    [1, 6, 2, 0],
    true
] call CBA_Settings_fnc_init;

[
    QGVAR(CheckRadius),
    "SLIDER",
    ["Check radius (in meters)","Radius to check for weapon holders. Big values may affect performance."],
    CBA_SETTINGS_CAT,
    [5, 50, 15, 0],
    true
] call CBA_Settings_fnc_init;

GVAR(Classlist) = ["GroundWeaponHolder", "WeaponHolderSimulated"];

ADDON = true;
