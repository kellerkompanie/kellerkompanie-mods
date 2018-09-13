
class CfgPatches {

	class STUI_GroupHUD {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.000000;
		requiredAddons[] = {"STUI_Core"};
		author = "ShackTac Development Team";
		authorUrl = "http://dslyecxi.com";
	};
};

class Extended_PreInit_EventHandlers {
	STUI_GroupHUD = "'grouphud\cbaSettings.sqf' call STUI_Load; 'grouphud\preinit.sqf' call STUI_LoadUIOnly";
};
