// Original Version by [RFT] Bridge.J http://responseforcetempest.com
#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[
	QGVAR(enabled), // key/reference variable
	"LIST", // type of setting
	["Snap neck", "Enable/Disable kill people by snapping the neck"], // name and tooltip
	"Kellerkompanie Kill", // category
	[
		[true,false], // values
		["Enabled","Disabled"], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;

#include "\a3\editor_f\Data\Scripts\dikCodes.h";

["Kellerkompanie", "keko_kill", "Snap neck", {[player] call FUNC(killTarget)}, {}, [DIK_END, [false,false,false]]] call cba_fnc_addKeybind;

ADDON = true;
