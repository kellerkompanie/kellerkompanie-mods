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
	"keko_settings_persistency_enabled", // key/reference variable
	"LIST", // type of setting
	["Persistency", "Enable/Disable Persistency"], // name and tooltip
	"Kellerkompanie Persistency", // category
	[
		[1,0], // values
		["Enabled","Disabled"], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;


[
	"keko_settings_persistency_key",
	"EDITBOX", 
	["Key", "Database storage key"],
	"Kellerkompanie Persistency",
	"",
	1
] call cba_settings_fnc_init;


[
	"keko_settings_persistency_autosave_interval",
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