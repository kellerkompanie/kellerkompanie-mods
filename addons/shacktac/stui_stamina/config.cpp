
class CfgPatches {

	class STUI_Stamina {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.000000;
		requiredAddons[] = {"STUI_Core", "A3_UI_F"};
		author = "ShackTac Development Team";
		authorUrl = "http://dslyecxi.com";
	};
};

class Extended_PreInit_EventHandlers {
	STUI_Stamina = "'stamina\preinit.sqf' call STUI_LoadUIOnly";
};

class RscInGameUI {

	class RscStaminaBar {
		controls[] = {};
	};
};
