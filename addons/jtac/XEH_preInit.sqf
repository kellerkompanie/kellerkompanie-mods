#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_SETTINGS_CATEGORY "Kellerkompanie JTAC"

[
	QGVAR(enabled), // key/reference variable
	"LIST", // type of setting
	["Virtual JTAC", "Enable/Disable virtual JTAC"], // name and tooltip
	CBA_SETTINGS_CATEGORY, // category
	[
		[true,false], // values
		["Enabled","Disabled"], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;


ADDON = true;
