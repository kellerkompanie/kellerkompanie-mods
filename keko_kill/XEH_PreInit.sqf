// Original Version by [RFT] Bridge.J http://responseforcetempest.com

[
	"keko_settings_kill_enabled", // key/reference variable
	"LIST", // type of setting
	["Snap neck", "Enable/Disable kill people by snapping the neck"], // name and tooltip
	"Kellerkompanie Kill", // category
	[
		[1,0], // values
		["Enabled","Disabled"], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;

#include "\a3\editor_f\Data\Scripts\dikCodes.h";

["Kellerkompanie", "keko_kill", "Snap neck", {[player] call keko_kill_fnc_killTarget}, {}, [DIK_END, [false,false,false]]] call cba_fnc_addKeybind;
