// 	: : : F.R.O.G.S Master Config : : :
//	MUST include \ from master config

#define TEast				0
#define TWest				1
#define TGuerrila			2
#define TCivilian			3
#define TSideUnknown		4
#define TEnemy				5
#define TFriendly			6
#define TLogic				7

#define private				0
#define protected			1
#define public				2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly			2
#define ReadOnlyVerified	3

#define true				1
#define false				0

enum {
	 //  = 2,	// Error parsing: Empty enum name
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXESXYZ = 4,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	DESTRUCTNO = 0,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};

// Addon
class CfgPatches {
	class VQI_CombatDiver {			// Project Name or ID
		units[] = {}; 				// ?
		weapons[] = {}; 			// ?
		requiredVersion = 0.1; 		// ?
		requiredAddons[] = {"A3_Characters_F","Extended_EventHandlers"}; // Load first BEFORE project if required
	};
};




// Equipment Setup //////////////////////////
class cfgWeapons {

	class ItemInfo;		// Internal Game Ref
	class Vest_Base;	// Internal Game Ref

	#include "\vqi_frogs\VQI-CombatDiver\Equipment\cfg_includes.hpp"
};
#include "\vqi_frogs\VQI-CombatDiver\Equipment\Headgear\cfg_goggles.hpp"
//////////////////////////////////////////////


class cfgVehicles {
	#include "\vqi_frogs\VQI-CombatDiver\AO\sub\cfg_enemysubs.hpp"
};


// Define GUI
#include "\vqi_frogs\VQI-CombatDiver\Equipment\DiveMate\def_divemate.hpp"

// Display GUI
class rscTitles {
	#include "\vqi_frogs\VQI-CombatDiver\Equipment\DiveMate\gui_divemate.hpp"
	//#include "\vqi_frogs\VQI-CombatDiver\Equipment\Goggles\gui_goggles.hpp"
	#include "\vqi_frogs\VQI-CombatDiver\Pics\gui_map.hpp"
	#include "\vqi_frogs\VQI-CombatDiver\Pics\gui_sub_explosion.hpp"
	#include "\vqi_frogs\VQI-CombatDiver\Pics\gui_sub_boarding.hpp"
};

// Sound Setup
class cfgSounds {
	#include "\vqi_frogs\VQI-CombatDiver\Sounds\cfgSounds.hpp"
	sounds[] = {};
}; 

// Marker Setup
class cfgMarkers {
	#include "\vqi_frogs\VQI-CombatDiver\Markers\cfgMarkers.hpp"
};