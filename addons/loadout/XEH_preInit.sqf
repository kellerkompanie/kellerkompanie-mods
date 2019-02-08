#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

GVAR(customLoadouts) = [];
GVAR(addLoadouts) = [];

if (hasInterface) then {
	["TFAR_event_OnRadiosReceived", {[player] call FUNC(setChannels);}] call CBA_fnc_addEventHandler;
};

#define CBA_SETTINGS_CATEGORY "Kellerkompanie Loadout"

[
	QGVAR(loadoutOnSpawn), // key/reference variable
	"LIST", // type of setting
	["Loadout on spawn", "Enable/Disable loadout on spawn"], // name and tooltip
	CBA_SETTINGS_CATEGORY, // category
	[
		[true,false], // values
		["Enabled","Disabled"], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;




private _factionClassConfigs = "getText (_x >> 'name') != 'objNull'" configClasses (configFile >> "kekoFaction");
private _factionClasses = [];
private _factionNames = [];

{
	private _name = getText(_x >> 'name');
	private _class = configName _x;

	_factionClasses pushBack _class;
	_factionNames pushBack _name;
} forEach _factionClassConfigs;

_factionNames pushBack "Custom";
_factionClasses pushBack "kekoCustom";


[
	QGVAR(loadoutFaction), // key/reference variable
	"LIST", // type of setting
	["Default faction", "Choose default faction"], // name and tooltip
	CBA_SETTINGS_CATEGORY, // category
	[
		_factionClasses, // values
		_factionNames, // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;





[
	QGVAR(giveMap), // key/reference variable
	"LIST", // type of setting
	["Give map", "Enable/Disable giving map to player"], // name and tooltip
	CBA_SETTINGS_CATEGORY, // category
	[
		[true,false], // values
		["Enabled","Disabled"], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;

[
	QGVAR(giveCompass), // key/reference variable
	"LIST", // type of setting
	["Give compass", "Enable/Disable giving compass to player"], // name and tooltip
	CBA_SETTINGS_CATEGORY, // category
	[
		[true,false], // values
		["Enabled","Disabled"], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;

[
	QGVAR(giveGps), // key/reference variable
	"LIST", // type of setting
	["Give GPS", "Enable/Disable giving GPS to player"], // name and tooltip
	CBA_SETTINGS_CATEGORY, // category
	[
		[0,1,2,3,4], // values
		["None","GPS","GPS and MicroDAGR","MicroDAGR","cTab"], // names
		1 // default index
	],
	1
] call cba_settings_fnc_init;

[
	QGVAR(giveNvg), // key/reference variable
	"LIST", // type of setting
	["Give NVG", "Enable/Disable giving NVG to player"], // name and tooltip
	CBA_SETTINGS_CATEGORY, // category
	[
		[0,1,2,3,4,5,6,7,8,13,14,15,16,9,10,11,12], // values
		[
      "None", //0
      "Headlamp white", //1
      "Headlamp Color", //2
      "NVG 1.Gen", //3
      "NVG 2.Gen", //4
      "NVG 3.Gen", //5
      "NVG 4.Gen", //6
      "NVG Wide", //7
      "Wärmesicht", //8
      "GPNVG-18 (tan)", //13
      "GPNVG-18 (black)", //14
      "GPNVG-18 Recon (tan)", //15
      "GPNVG-18 Recon (black)", //16
      "[Main] Ami Mono", //9
      "[Main] Ami Dual", //10
      "[Main] BAF Mono", //11
      "[Main] Sovjet Mono" //12
    ], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;

[
	QGVAR(giveRadio), // key/reference variable
	"LIST", // type of setting
	["Give radio", "Enable/Disable giving radio to player"], // name and tooltip
	CBA_SETTINGS_CATEGORY, // category
	[
		[0,1,2,3], // values
		[
      "None",
      "Personal for all",
      "Only personal for lead positions, rifleman for the rest",
      "Just for lead positions (rank > Corporal)"
    ], // names
		1 // default index
	],
	1
] call cba_settings_fnc_init;

[
	QGVAR(giveSilencer), // key/reference variable
	"LIST", // type of setting
	["Give Silencer", "Enable/Disable giving silencer to player"], // name and tooltip
	CBA_SETTINGS_CATEGORY, // category
	[
		[true,false], // values
		["Enabled","Disabled"], // names
		1 // default index
	],
	1
] call cba_settings_fnc_init;

ADDON = true;
