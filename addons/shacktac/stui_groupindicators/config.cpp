
class CfgPatches {

	class STUI_GroupIndicators {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.000000;
		requiredAddons[] = {"STUI_Core"};
		author = "ShackTac Development Team";
		authorUrl = "http://dslyecxi.com";
	};
};

class Extended_PreInit_EventHandlers {
	STUI_GroupIndicators = "'groupindicators\preinit.sqf' call STUI_LoadUIOnly";
};

class CfgInGameUI {

	class Cursor {
		select = "#(argb,1,1,1)color(0,0,0,0)";
		outArrow = "#(argb,1,1,1)color(0,0,0,0)";
		leader = "#(argb,1,1,1)color(0,0,0,0)";
		mission = "#(argb,1,1,1)color(0,0,0,0)";
		unitBleeding = "#(argb,1,1,1)color(0,0,0,0)";
		unitInjured = "#(argb,1,1,1)color(0,0,0,0)";
		unitHealer = "#(argb,1,1,1)color(0,0,0,0)";
		unitUnconscious = "#(argb,1,1,1)color(0,0,0,0)";
	};
};
