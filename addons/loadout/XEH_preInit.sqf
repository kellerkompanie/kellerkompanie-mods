#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

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

[
	QGVAR(loadoutFaction), // key/reference variable
	"LIST", // type of setting
	["Default faction", "Choose default faction"], // name and tooltip
	CBA_SETTINGS_CATEGORY, // category
	[
		[
			"kekoFactionNATO",
			"kekoFactionAAF",
			"kekoFactionCSAT",
			"kekoFactionCTRG",
			"kekoFactionFIA",
			"kekoFactionGuerilla",
			"kekoFactionUSMarines",
			"kekoFactionUSBlackOpsTropic",
			"kekoFactionNATOtropic",
			"kekoFactionIDAP",
			"kekoFactionBundeswehrFleck",
			"kekoFactionBundeswehrTropen",
			"kekoFactionBundeswehrSchnee",
			"kekoFactionUSArmyOCP",
			"kekoFactionUSArmyUCP",
			"kekoFactionMarines_Desert",
			"kekoFactionMarines_Woodland",
			"kekoFactionRussiaEMRSummer",
			"kekoFactionRussiaEMRDesert",
			"kekoFactionChinesePLAWoodland",
			"kekoFactionChinesePLADesert",
			"kekofactionBlackorder",
			"kekofactionBlackorderRedBerets",
			"kekoFactionRussiaSpeznas",
			"kekoFactionWehrmacht",
			"kekoFactionArmiaKrajowaPartyzanci",
			"kekoFactionArmiaKrajowaCamo",
			"kekoFactionArmiaKrajowaGrade",
			"kekoFactionCommandos",
			"kekoFactionCBRNMarines",
			"kekoCustom"
    ], // values
	[
		"[Minimal] NATO - North Atlantic Treaty Organization",
		"[Minimal] AAF - Altis Armed Forces",
		"[Minimal] CSAT - Canton-Protocol Strategic Alliance Treaty",
		"[Minimal] CTRG - Combat and Technology Research Group",
		"[Minimal] FIA - Freedom and Independence Alliance",
		"[Minimal] Guerilla",
		"[Minimal] U.S. Marine Corps (Woodland)",
		"[Minimal] U.S. BlackOps (Tropic)",
		"[Minimal] NATO (Tropic) - North Atlantic Treaty Organization (Tropic)",
		"[Minimal] IDAP - International Development and Aid Project",
		"[Main] Bundeswehr (Flecktarn)",
		"[Main] Bundeswehr (Tropentarn)",
		"[Main] Bundeswehr (Schneetarn)",
		"[Main] U.S. Army (OCP)",
		"[Main] U.S. Army (UCP)",
		"[Main] U.S. Marine Corps - Marine Pattern Desert",
		"[Main] U.S. Marine Corps - Marine Pattern Woodland",
		"[Main] Russia EMR (Summer)",
		"[Main] Russia EMR (Desert)",
		"[Main] Chinese PLA (Woodland)",
		"[Main] Chinese PLA (Desert)",
		"[Main] Black Order",
		"[Main] Black Order (Red Berets)",
		"[Main] Russia Speznas",
		"[Ironfront] Wehrmacht",
		"[Ironfront] Polska Armia Krajowa (Partyzanci)",
		"[Ironfront] Polska Armia Krajowa (Camo)",
		"[Ironfront] Polska Armia Krajowa (Grade)",
		"[Ironfront] Commandos",
		"[Special] CBRN U.S. Marines (Stepping Stone)",
		"Custom"
	], // names
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

ADDON = true;
