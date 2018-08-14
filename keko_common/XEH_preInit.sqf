diag_log text "[KEKO] (common) running XEH_PreInit";

enableSaving [false, false];

[
	"keko_var_loadoutOnSpawn", // key/reference variable
	"LIST", // type of setting
	["Loadout on spawn", "Enable/Disable loadout on spawn"], // name and tooltip
	"Kellerkompanie", // category
	[
		[true,false], // values
		["Enabled","Disabled"], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;

[
	"keko_var_faction", // key/reference variable
	"LIST", // type of setting
	["Default faction", "Choose default faction"], // name and tooltip
	"Kellerkompanie", // category
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
      "kekoFactionUSArmyOCP",
      "kekoFactionUSArmyUCP",
      "kekoFactionMarines_Desert",
      "kekoFactionMarines_Woodland",
      "kekoFactionRussiaEMRSummer",
      "kekoFactionRussiaEMRDesert",
      "kekoFactionChinesePLAWoodland",
      "kekoFactionChinesePLADesert",
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
      "[Main] U.S. Army (OCP)",
      "[Main] U.S. Army (UCP)",
      "[Main] U.S. Marine Corps - Marine Pattern Desert",
      "[Main] U.S. Marine Corps - Marine Pattern Woodland",
      "[Main] Russia EMR (Summer)",
      "[Main] Russia EMR (Desert)",
      "[Main] Chinese PLA (Woodland)",
      "[Main] Chinese PLA (Desert)",
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
	"keko_var_customLogistics", // key/reference variable
	"LIST", // type of setting
	["Logistics", "Enable/Disable logistics"], // name and tooltip
	"Kellerkompanie", // category
	[
		[0,1,2], // values
		["Disabled","Default","Custom"], // names
		1 // default index
	],
	1
] call cba_settings_fnc_init;

[
	"keko_var_giveMap", // key/reference variable
	"LIST", // type of setting
	["Give map", "Enable/Disable giving map to player"], // name and tooltip
	"Kellerkompanie", // category
	[
		[true,false], // values
		["Enabled","Disabled"], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;

[
	"keko_var_giveCompass", // key/reference variable
	"LIST", // type of setting
	["Give compass", "Enable/Disable giving compass to player"], // name and tooltip
	"Kellerkompanie", // category
	[
		[true,false], // values
		["Enabled","Disabled"], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;

[
	"keko_var_giveGps", // key/reference variable
	"LIST", // type of setting
	["Give compass", "Enable/Disable giving compass to player"], // name and tooltip
	"Kellerkompanie", // category
	[
		[0,1,2,3,4], // values
		["None","GPS","GPS and MicroDAGR","MicroDAGR","cTab"], // names
		1 // default index
	],
	1
] call cba_settings_fnc_init;

[
	"keko_var_giveNvg", // key/reference variable
	"LIST", // type of setting
	["Give NVG", "Enable/Disable giving NVG to player"], // name and tooltip
	"Kellerkompanie", // category
	[
		[0,1,2,3,4,5,6,7,8,9,10,11,12], // values
		[
      "None",
      "Headlamp white",
      "Headlamp Color",
      "NVG 1.Gen",
      "NVG 2.Gen",
      "NVG 3.Gen",
      "NVG 4.Gen",
      "NVG Wide",
      "Wärmesicht",
      "GPNVG-18 (tan)",
      "GPNVG-18 (black)",
      "GPNVG-18 Recon (tan)",
      "GPNVG-18 Recon (black)",
      "[Main] Ami Mono",
      "[Main] Ami Dual",
      "[Main] BAF Mono",
      "[Main] Sovjet Mono"
    ], // names
		0 // default index
	],
	1
] call cba_settings_fnc_init;

[
	"keko_var_giveRadio", // key/reference variable
	"LIST", // type of setting
	["Give radio", "Enable/Disable giving radio to player"], // name and tooltip
	"Kellerkompanie", // category
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
