#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_SETTINGS_CATEGORY "Kellerkompanie EMP"

[
	QGVAR(affectRadio), // key/reference variable
	"LIST", // type of setting
	[localize LSTRING(affectRadios), localize LSTRING(affectRadiosTooltip)], // name and tooltip
	localize LSTRING(cbaSettingsCategory), // category
	[
		[true,false], // values
		[localize LSTRING(enabled), localize LSTRING(disabled)], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;

ADDON = true;
