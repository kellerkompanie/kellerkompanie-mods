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

[
	QGVAR(loadoutOnSpawn), // key/reference variable
	"LIST", // type of setting
	[localize LSTRING(loadoutOnSpawn), localize LSTRING(loadoutOnSpawnTooltip)], // name and tooltip
	localize LSTRING(cbaSettingsCategory), // category
	[
		[true,false], // values
		[localize LSTRING(enabled), localize LSTRING(disabled)], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;




private _factionClassConfigs = "getText (_x >> 'name') != 'objNull'" configClasses (configFile >> "kekoFactions");
private _factionClasses = [];
private _factionNames = [];

{
	private _name = getText(_x >> 'name');
	private _class = configName _x;

	_factionClasses pushBack _class;
	_factionNames pushBack _name;
} forEach _factionClassConfigs;

_factionNames pushBack "Custom";
_factionClasses pushBack "Custom";


[
	QGVAR(loadoutFaction), // key/reference variable
	"LIST", // type of setting
	[localize LSTRING(defaultFaction), localize LSTRING(defaultFactionTooltip)], // name and tooltip
	localize LSTRING(cbaSettingsCategory), // category
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
	[localize LSTRING(giveMap), localize LSTRING(giveMapTooltip)], // name and tooltip
	localize LSTRING(cbaSettingsCategory), // category
	[
		[true,false], // values
		[localize LSTRING(enabled), localize LSTRING(disabled)], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;

[
	QGVAR(giveCompass), // key/reference variable
	"LIST", // type of setting
	[localize LSTRING(giveCompass), localize LSTRING(giveCompassTooltip)], // name and tooltip
	localize LSTRING(cbaSettingsCategory), // category
	[
		[true,false], // values
		[localize LSTRING(enabled), localize LSTRING(disabled)], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;

[
	QGVAR(giveGps), // key/reference variable
	"LIST", // type of setting
	[localize LSTRING(giveGPS), localize LSTRING(giveGPSTooltip)], // name and tooltip
	localize LSTRING(cbaSettingsCategory), // category
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
	[localize LSTRING(giveNVG), localize LSTRING(giveNVGTooltip)], // name and tooltip
	localize LSTRING(cbaSettingsCategory), // category
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
	[localize LSTRING(giveRadio), localize LSTRING(giveRadioTooltip)], // name and tooltip
	localize LSTRING(cbaSettingsCategory), // category
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
	[localize LSTRING(giveSilencer), localize LSTRING(giveSilencerTooltip)], // name and tooltip
	localize LSTRING(cbaSettingsCategory), // category
	[
		[true,false], // values
		[localize LSTRING(enabled), localize LSTRING(disabled)], // names
		1 // default index
	],
	1
] call cba_settings_fnc_init;


[
	QGVAR(giveScope), // key/reference variable
	"LIST", // type of setting
	[localize LSTRING(giveScope), localize LSTRING(giveScopeTooltip)], // name and tooltip
	localize LSTRING(cbaSettingsCategory), // category
	[
		[true,false], // values
		[localize LSTRING(enabled), localize LSTRING(disabled)], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;


ADDON = true;
