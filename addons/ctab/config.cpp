// cTab - Commander's Tablet with FBCB2 Blue Force Tracking
// Battlefield tablet to access real time intel and blue force tracker.
// By - Riouken
// http://forums.bistudio.com/member.php?64032-Riouken
// You may re-use any of this work as long as you provide credit back to me.

// This is a modded version for the Kellerkompanie, made by Schwaggot

#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {
			"Box_cTab_items"};
		weapons[] = {
			"ItemcTab",
			"ItemAndroid",
			"ItemMicroDAGR",
			"ItemcTabHCam"};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"cba_main"};
		author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
	};
};

#include "CfgEventHandlers.hpp"

class cTab_settings {
	// define vehicle classes that are equipped with FBCB2 devices
	cTab_vehicleClass_has_FBCB2[] = {};

	// define vehicle classes that are equipped with TAD devices
	cTab_vehicleClass_has_TAD[] = {};

	// define helmet classes that are equipped with a helmet cam
	cTab_helmetClass_has_HCam[] = {
		"H_HelmetB_light",
		"H_HelmetB_light_black",
		"H_HelmetB_light_desert",
		"H_HelmetB_light_grass",
		"H_HelmetB_light_sand",
		"H_HelmetB_light_snakeskin",
		"H_Helmet_Kerry",
		"rhsusf_opscore_03_ocp",
		"H_HelmetSpecB_blk",
		"H_HelmetSpecB_paint2",
		"H_HelmetSpecB_paint1",
		"H_HelmetSpecB",
		"H_HelmetO_ocamo",
		"BWA3_OpsCore_Fleck_Camera",
		"BWA3_OpsCore_Schwarz_Camera",
		"BWA3_OpsCore_Tropen_Camera"
	};

	// define vehicle classes that have non-standard co-pilot seats
	cTab_TAD_coPilot_turret[] = {
		{"kyo_MH47E_base",2},
		{"RHS_UH60M_MEV",0}, // set this class first since it is inheriting from RHS_UH60M
		{"RHS_UH60M",2},
		{"RHS_CH_47F",2},
		{"CH_47F",2},
		{"UH1H",-1}, // no co-pilot
		{"UH1Y",2},
		{"UH60M_US_base",-1} // no co-pilot
	};
};

// define the default key setup; can be altered in-game using CBA's keybinding system
class cTab_keys {

	class if_main {
		key = 35; // H
		ctrl = 0;
		shift = 0;
		alt = 0;
	};

	class if_secondary {
		key = 35; // H
		ctrl = 1;
		shift = 0;
		alt = 0;
	};

	class if_tertiary {
		key = 35; // H
		ctrl = 0;
		shift = 0;
		alt = 1;
	};

	class zoom_in {
		key = 201; // PAGE_UP
		ctrl = 1;
		shift = 1;
		alt = 0;
	};

	class zoom_out {
		key = 209; // PAGE_DOWN
		ctrl = 1;
		shift = 1;
		alt = 0;
	};

	class toggleIfPosition {
		key = 199; // HOME / POS1
		ctrl = 1;
		shift = 1;
		alt = 0;
	};

};

#include "shared\cTab_gui_macros.hpp"
#include "shared\cTab_base_gui_classes.hpp"

#include "tablet\cTab_Tablet_dialog.hpp"
#include "android\cTab_android_dialog.hpp"
#include "FBCB2\cTab_FBCB2_dialog.hpp"
#include "TAD\cTab_TAD_dialog.hpp"
#include "microDAGR\cTab_microDAGR_dialog.hpp"

#include "CfgWeapons.hpp"
#include "CfgNotifications.hpp"
#include "CfgVehicles.hpp"

class RscTitles
{
	titles[]={};
	#include "shared\cTab_mapSize_title.hpp"
	#include "shared\cTab_mail_title.hpp"
	#include "TAD\cTab_TAD_display.hpp"
	#include "microDAGR\cTab_microDAGR_display.hpp"
	#include "android\cTab_android_display.hpp"
};
