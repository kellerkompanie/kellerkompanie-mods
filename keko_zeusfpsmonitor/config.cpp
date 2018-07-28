class CfgPatches
{
    class keko_zeusfpsmonitor
    {
        units[] = {};
        requiredVersion = 1.80;
        requiredAddons[] = {
        	"A3_Modules_F",
            "cba_main",
            "cba_settings",
            "cba_xeh"};
        author = "Schwaggot";
        authorUrl = "http://kellerkompanie.com";
		version = 1.0;
    };
};

class Extended_PreInit_EventHandlers {
    keko_zeusfpsmonitor_settings_xeh = call compile preprocessFileLineNumbers "\keko_zeusfpsmonitor\XEH_preInit.sqf";
};

class CfgFunctions
{
	class keko
	{
		class zeusfpsmonitor 
		{
			file = "\keko_zeusfpsmonitor\functions";
			class postInit{postInit = 1;};
		}; 
	};
};