#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_SETTINGS_CATEGORY "Kellerkompanie EMP"

[
	QGVAR(affectRadio), // key/reference variable
	"LIST", // type of setting
	["EMP affects radios", "Enable/Disable radios breaking after EMP pulse."], // name and tooltip
	CBA_SETTINGS_CATEGORY, // category
	[
		[true,false], // values
		["Enabled","Disabled"], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;

ADDON = true;
