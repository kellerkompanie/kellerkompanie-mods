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

[
	QGVAR(enabled), // key/reference variable
	"LIST", // type of setting
	["Persistency", "Enable/Disable Persistency"], // name and tooltip
	"Kellerkompanie Persistency", // category
	[
		[true,false], // values
		["Enabled","Disabled"], // names
		1 // default index
	],
	1
] call cba_settings_fnc_init;


[
	QGVAR(key),
	"EDITBOX",
	["Key", "Database storage key"],
	"Kellerkompanie Persistency",
	"",
	1
] call cba_settings_fnc_init;


[
	QGVAR(autosaveInterval),
	"LIST",
	["Autosave", "Interval for Autosave"],
	"Kellerkompanie Persistency",
	[
		[0,60,300,600],
		["Disabled","1 Minute","5 Minutes","10 Minutes"],
		0
	],
	1
] call cba_settings_fnc_init;

[
	QGVAR(vehiclesEnabled), // key/reference variable
	"LIST", // type of setting
	["Vehicle Persistency", "Enable/Disable vehicle persistency"], // name and tooltip
	"Kellerkompanie Persistency", // category
	[
		[true,false], // values
		["Enabled","Disabled"], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;

[
	QGVAR(cratesEnabled), // key/reference variable
	"LIST", // type of setting
	["Crate Persistency", "Enable/Disable crate persistency"], // name and tooltip
	"Kellerkompanie Persistency", // category
	[
		[true,false], // values
		["Enabled","Disabled"], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;

[
	QGVAR(playersEnabled), // key/reference variable
	"LIST", // type of setting
	["Player Persistency", "Enable/Disable player persistency"], // name and tooltip
	"Kellerkompanie Persistency", // category
	[
		[true,false], // values
		["Enabled","Disabled"], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;

[
	QGVAR(moneyEnabled), // key/reference variable
	"LIST", // type of setting
	["Money Persistency", "Enable/Disable money persistency"], // name and tooltip
	"Kellerkompanie Persistency", // category
	[
		[true,false], // values
		["Enabled","Disabled"], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;

[
	QGVAR(defaultMoney),
	"EDITBOX",
	["Default Cash", "Default cash given to new players"],
	"Kellerkompanie Persistency",
	"100",
	1
] call cba_settings_fnc_init;

[
	QGVAR(defaultMoneyBank),
	"EDITBOX",
	["Default Bank Account", "Default account amount given to new players"],
	"Kellerkompanie Persistency",
	"1000",
	1
] call cba_settings_fnc_init;

ADDON = true;
