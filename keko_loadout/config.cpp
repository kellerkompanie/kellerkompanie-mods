class CfgPatches
{
	class MyAddon
	{
		// Meta information for editor
		name = "Kellerkompanie Loadout";
		author = "Schwaggot";
		url = "http://kellerkompanie.com";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
		requiredVersion = 1.80; 
		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = {"A3_Functions_F"};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

#include "kekoWeapons.hpp"
#include "kekoSoldier.hpp"
#include "kekoFaction.hpp"