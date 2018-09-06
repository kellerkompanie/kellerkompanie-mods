class CfgPatches
{
	class keko_backpack
	{
		units[] = {};
		requiredVersion = 1.80;
		requiredAddons[] = {
			"cba_main",
			"cba_settings",
			"cba_xeh",
			"ace_main"};
		author = "Schwaggot";
		authorUrl = "http://kellerkompanie.com";
		version = 1.0;
	};
};

class CfgFunctions 
{
	class keko_backpack 
	{
		tag = "keko_backpack";
		class functions 
		{
			file = "keko_backpack\functions";
			class init {postInit = 1;};
			class onOpenInventory {};
			class checkUnlockBP {};
		};
	};
};

class Extended_InventoryOpened_EventHandlers {
	class CAManBase {
		class keko_backpack_onOpenInventory {
			clientInventoryOpened = "if (_this select 0 == ACE_player) then {_this call keko_backpack_fnc_onOpenInventory};";
		};
	};
};