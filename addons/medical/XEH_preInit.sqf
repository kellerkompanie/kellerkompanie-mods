#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_SETTINGS_CATEGORY "Kellerkompanie Medical"

//FAK max Amount:
[
	QGVAR(FAK_minAmount),
	"SLIDER",
	["FAK - min amount for removal", "How many items can a player take from Individual First Aid Kit before it will be removed upon refill?"],
	CBA_SETTINGS_CAT,
	[0, 6, 3, 0],
	true
] call CBA_Settings_fnc_init;

//MediKit max Amount:
[
	QGVAR(manualKit_minAmount),
	"SLIDER",
	["Medical Refill Kit - min amount for removal", "How many items can a player take from Medical Refill Kit before it will be removed upon refill?"],
	CBA_SETTINGS_CAT,
	[0, 40, 10, 0],
	true
] call CBA_Settings_fnc_init;

ADDON = true;
