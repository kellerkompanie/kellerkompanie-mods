private _availableFonts = [
	"EtelkaNarrowMediumPro",
	"PuristaBold",
	"PuristaLight",
	"PuristaMedium",
	"PuristaSemibold",
	"RobotoCondensed",
	"RobotoCondensedBold",
	"RobotoCondensedLight",
	"TahomaB"
];
[
	"STHud_Settings_Font", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
	"LIST", // Setting type, options are CHECKBOX, SLIDER, LIST, or COLOR
	"Font", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"STUI Settings", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[
		_availableFonts,
		_availableFonts,
		4
	], // data for this setting: [values this setting can take <array>, corresponding names for the settings menu <array>, INDEX of the default value  <number>]
	false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
	{
		params ["_value"];
		STHud_Font = _value;
	} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;

[
	"STHud_Settings_HUDMode", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
	"LIST", // Setting type, options are CHECKBOX, SLIDER, LIST, or COLOR
	"HUD Mode", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"STUI Settings", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[
		[0, 1, 2, 3],
		["No HUD or Names", "Show Only HUD", "Show Only Names", "Show Both HUD and Names"],
		3
	], // data for this setting: [values this setting can take <array>, corresponding names for the settings menu <array>, INDEX of the default value  <number>]
	false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
	{
		params ["_value"];
		STHud_UIMode = _value;
	} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;

[
	"STHud_Settings_Occlusion", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
	"CHECKBOX", // Setting type, options are CHECKBOX, SLIDER, LIST, or COLOR
	"Icon Occlusion", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"STUI Settings", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[
		true
	], // data for this setting: [values this setting can take <array>, corresponding names for the settings menu <array>, INDEX of the default value  <number>]
	false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
	{
		params ["_value"];
		STUI_Occlusion   = _value;
	} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;

//if the CfgPatches "STUI_ShowRatios" exists then ST inhouse mods are loaded, so we turn the No Squad Bar on (true)
//otherwise, No Squad bar is off (false)
private _squadBarDefault = isClass (configFile >> "CfgPatches" >> "STUI_ShowRatios");
diag_log format ["SquadBarDefault: %1", _squadBarDefault];
[
	"STHud_Settings_SquadBar", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
	"CHECKBOX", // Setting type, options are CHECKBOX, SLIDER, LIST, or COLOR
	"No Squad Bar", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"STUI Settings", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[
		_squadBarDefault
	], // data for this setting: [values this setting can take <array>, corresponding names for the settings menu <array>, INDEX of the default value  <number>]
	false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
	{
		params ["_value"];
		STHud_NoSquadBarMode  = _value;
	} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;

[
	"STHud_Settings_RemoveDeadViaProximity", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
	"CHECKBOX", // Setting type, options are CHECKBOX, SLIDER, LIST, or COLOR
	"Remove Dead from Group when in Proximity", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"STUI Settings", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[
		true
	], // data for this setting: [values this setting can take <array>, corresponding names for the settings menu <array>, INDEX of the default value  <number>]
	false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
	{
		params ["_value"];
		STUI_RemoveDeadViaProximity = _value;
	} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;

[
	"STHud_Settings_TextShadow", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
	"LIST", // Setting type, options are CHECKBOX, SLIDER, LIST, or COLOR
	"Text Shadow", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"STUI Settings", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[
		[0, 1, 2],
		["No Shadow", "Shadow", "Outline"],
		1
	], // data for this setting: [values this setting can take <array>, corresponding names for the settings menu <array>, INDEX of the default value  <number>]
	false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
	{
		params ["_value"];
		STHud_TextShadow = _value;
	} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;

private _colourBlindModes = [
	"Normal",
	"Protanopia",
	"Protanomaly",
	"Deuteranopia",
	"Deuteranomaly",
	"Tritanopia",
	"Tritanomaly",
	"Achromatopsia",
	"Achromatomaly"
];
[
	"STHud_Settings_ColourBlindMode", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
	"LIST", // Setting type, options are CHECKBOX, SLIDER, LIST, or COLOR
	"Color Blind Mode", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	"STUI Settings", // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[
		_colourBlindModes,
		_colourBlindModes,
		0
	], // data for this setting: [values this setting can take <array>, corresponding names for the settings menu <array>, INDEX of the default value  <number>]
	false, // "global" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
	{
		params ["_value"];
		STHud_ColourBlindMode = _value;
		[STHud_ColourBlindMode] call STHud_Colour_Blind_Cache;
	} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_Settings_fnc_init;
