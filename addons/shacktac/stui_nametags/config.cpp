
class CfgPatches {

	class STUI_NameTags {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.000000;
		requiredAddons[] = {"STUI_Core"};
		author = "ShackTac Development Team";
		authorUrl = "http://dslyecxi.com";
	};
};

class Extended_PreInit_EventHandlers {
	STUI_NameTags = "'nametags\preinit.sqf' call STUI_LoadUIOnly";
};
