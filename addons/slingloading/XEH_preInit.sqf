#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

GVAR(SlingLoadPointClassHeightOffset) = [
	["All", [-0.05, -0.05, -0.05]],
	["CUP_CH47F_base", [-0.05, -2, -0.05]],
	["CUP_AW159_Unarmed_Base", [-0.05, -0.06, -0.05]],
	["RHS_CH_47F", [-0.75, -2.6, -0.75]],
	["rhsusf_CH53E_USMC", [-0.8, -1, -1.1]],
	["rhsusf_CH53E_USMC_D", [-0.8, -1, -1.1]]
];

GVAR(SupportedVehicles) = [
	"Helicopter",
	"VTOL_Base_F"
];

GVAR(SlingRules) = [
	["All","CAN_SLING","All"]
];

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

[
	QGVAR(enabled), // key/reference variable
	"LIST", // type of setting
	["Advanced Slingloading", "Enable/Disable Advanced Slingloading"], // name and tooltip
	localize LSTRING(cbaSettingsCategory), // category
	[
		[true,false], // values
		["Enabled","Disabled"], // names
		1 // default index
	],
	1
] call cba_settings_fnc_init;

[
	QGVAR(maxRopeLength), // key/reference variable
	"SLIDER", // type of setting
	["Max Rope Length", "Set the maximum length of the towing rope"], // name and tooltip
	localize LSTRING(cbaSettingsCategory), // category
	[
		5,  // min value
		30, // max value
		10, // default value
		0   // number of trailing decimals
	],
	1
] call cba_settings_fnc_init;

[
	QGVAR(classRestriction), // key/reference variable
	"LIST", // type of setting
	["Limit to class", "Limit towing ability to specific class"], // name and tooltip
	localize LSTRING(cbaSettingsCategory), // category
	[
		[0,1,2,3], // values
		["All", "Engineer", "Repair Specialist", "Engineer & Repair Specialist"], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;

[
	QGVAR(maxTowedVehicles), // key/reference variable
	"SLIDER", // type of setting
	["Max towed vehicles", "Set the maximum number of vehicles that can be towed"], // name and tooltip
	localize LSTRING(cbaSettingsCategory), // category
	[
		1,  // min value
		3, // max value
		1, // default value
		0   // number of trailing decimals
	],
	1
] call cba_settings_fnc_init;

/*[
	"keko_settings_advancedtowing_locked", // key/reference variable
	"LIST", // type of setting
	["Allow towing locked vehicles", "Enable/Disable towing locked vehicles"], // name and tooltip
	"Kellerkompanie Advanced Towing", // category
	[
		[1,0], // values
		["Enabled","Disabled"], // names
		1 // default index
	],
	0
] call cba_settings_fnc_init;*/
/* if!(keko_settings_advancedtowing_locked == 1) then {
	if( locked _vehicle > 1 ) then {
		hint "Cannot pick up tow ropes from locked vehicle";
		_canPickupTowRopes = false;
	};
};*/

ADDON = true;
