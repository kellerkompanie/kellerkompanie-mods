// cTab - Commander's Tablet with FBCB2 Blue Force Tracking
// Battlefield tablet to access real time intel and blue force tracker.
// By - Riouken
// http://forums.bistudio.com/member.php?64032-Riouken
// You may re-use any of this work as long as you provide credit back to me.

// This is a modded version for the Kellerkompanie, made by Schwaggot

#include "\x\cba\addons\main\script_macros_common.hpp"

class CfgPatches
{
	class cTab  // cTab
		{
			units[] = {Box_cTab_items};
			weapons[] = {ItemcTab,ItemAndroid,ItemMicroDAGR,ItemcTabHCam};
			requiredVersion = 1.80;
			requiredAddons[] = {"CBA_MAIN"};
			author = "Gundy, Riouken, Raspu";
			authorUrl = "https://github.com/Riouken/cTab";
			version = 1.0;		
		};
};

class CfgSettings 
{
	class CBA 
	{
		class Versioning 
		{
			class cTab 
			{
				main_addon = cTab;
				class Dependencies 
				{
					CBA[] = {"cba_main", { 1,0,0 },"true"};
				};
			};
		};
	};
};

#include "\cTab\CfgFunctions.h"

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

class Extended_PostInit_EventHandlers
{
	class cTab
	{
		clientInit = QUOTE(call COMPILE_FILE2(\cTab\player_init.sqf));

		serverInit = QUOTE(call COMPILE_FILE2(\cTab\server_init.sqf));
	};
};

#include "\cTab\shared\cTab_gui_macros.hpp"
#include "\cTab\shared\cTab_base_gui_classes.hpp"

#include "\cTab\tablet\cTab_Tablet_dialog.hpp"
#include "\cTab\android\cTab_android_dialog.hpp"
#include "\cTab\FBCB2\cTab_FBCB2_dialog.hpp"
#include "\cTab\TAD\cTab_TAD_dialog.hpp"
#include "\cTab\microDAGR\cTab_microDAGR_dialog.hpp"

class CfgWeapons
{
	class ItemCore;
 	class InventoryItem_Base_F;
	class ItemcTab: ItemCore {
		descriptionshort = "DK10 Rugged Tablet PC";
		descriptionuse = "<t color='#9cf953'>Use: </t>Show Commander's Tablet";
		displayname = "Rugged Tablet";
		picture = "\cTab\img\icon_dk10.paa";
		model = "\ctab\data\itemDK10.p3d";
		scope = 2;
		simulation = "ItemGPS";
		class ItemInfo {
			mass = 56;
		};
		author = "cTab";
	};
	
	class ItemAndroid: ItemcTab {
		descriptionshort = "GD300 Rugged Wearable Computer";
		descriptionuse = "<t color='#9cf953'>Use: </t>Show Android Based BFT";
		displayname = "GD300 Android";
		picture = "\cTab\img\icon_Android.paa";
		model = "\ctab\data\itemAndroid.p3d";
		class ItemInfo {
			mass = 5;
		};
		author = "cTab";
	};

	class ItemMicroDAGR: ItemcTab {
		descriptionshort = "HNV-2930 Micro Defense Advanced GPS Receiver";
		descriptionuse = "<t color='#9cf953'>Use: </t>Show Android Based BFT";
		displayname = "MicroDAGR";
		picture = "\cTab\img\icon_MicroDAGR.paa";
		model = "\ctab\data\itemMicroDAGR.p3d";
		class ItemInfo {
			mass = 6;
		};
		author = "cTab";
	};
	
	class ItemcTabHCam: ItemCore {
		descriptionshort = "HD Helmet Mounted Camera";
		descriptionuse = "<t color='#9cf953'>Use: </t>Used to record and stream video";
		displayname = "Helmet Camera";
		picture = "\cTab\img\cTab_helmetCam_ico.paa";
		scope = 2;
		simulation = "ItemMineDetector";
		detectRange = -1;
		type = 0;
		class ItemInfo: InventoryItem_Base_F {
			mass = 4;
		};
		author = "cTab";
	};	
};

class CfgNotifications
{
	
	class cTabUavNotAval
	{
		title = "cTab";
		iconPicture = "\cTab\img\15th_rugged_tab_ico.paa";
		iconText = "";
		color[] = {1,1,1,1};
		description = "%1";
		duration = 5;
		priority = 7;
		difficulty[] = {};
	};
	
	class cTabNewMsg
	{
		title = "cTab";
		iconPicture = "\cTab\img\icoUnopenedmail.paa";
		iconText = "";
		color[] = {1,1,1,1};
		description = "%1";
		duration = 4;
		priority = 7;
		difficulty[] = {};
	};

	class cTabMsgSent
	{
		title = "cTab";
		iconPicture = "\cTab\img\icoUnopenedmail.paa";
		iconText = "";
		color[] = {1,1,1,1};
		description = "Your message has been sent.";
		duration = 4;
		priority = 7;
		difficulty[] = {};
	};	

};

class RscTitles
{
	titles[]={};
	#include "\cTab\shared\cTab_mapSize_title.hpp"
	#include "\cTab\shared\cTab_mail_title.hpp"
	#include "\cTab\TAD\cTab_TAD_display.hpp"
	#include "\cTab\microDAGR\cTab_microDAGR_display.hpp"
	#include "\cTab\android\cTab_android_display.hpp"
};


class CfgVehicles
{

	class Box_NATO_WpsSpecial_F;
	class Box_cTab_items : Box_NATO_WpsSpecial_F {
		displayname = "[cTab] Computer Gear";
		icon = "iconCrateLarge";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		scope = 2;
		transportmaxmagazines = 64;
		transportmaxweapons = 12;

		class TransportItems {
			class _xx_ItemcTab {
				count = 5;
				name = "ItemcTab";
			};
			class _xx_ItemAndroid {
				count = 15;
				name = "ItemAndroid";
			};
			class _xx_ItemMicroDAGR {
				count = 25;
				name = "ItemMicroDAGR";
			};
			class _xx_ItemcTabHCam {
				count = 25;
				name = "ItemcTabHCam";
			};
		};
	
	
		class TransportMagazines {};
		class TransportWeapons {};
	
	};
	
};

class CfgSounds
{
	sounds[] = {};
	class cTab_phoneVibrate
	{
		// filename, volume, pitch
		sound[] = {"\cTab\sounds\phoneVibrate.wss",1,1};
		// subtitle delay in seconds, subtitle text 
		titles[] = {};
	};
	class cTab_mailSent
	{
		sound[] = {"\cTab\sounds\mailSent.wss",1,1};
		titles[] = {};
	};
};
