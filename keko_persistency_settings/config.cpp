class CfgPatches
{
    class keko_persistency_settings
    {
        units[] = {};
        requiredVersion = 1.80;
        requiredAddons[] = {
            "cba_main",
            "cba_settings",
            "cba_xeh"};
        author = "Schwaggot";
        authorUrl = "http://kellerkompanie.com";
		version = 1.0;
    };
};

class Extended_PreInit_EventHandlers {
    keko_persistency_settings_xeh = call compile preprocessFileLineNumbers "\keko_persistency_settings\XEH_preInit.sqf";
};