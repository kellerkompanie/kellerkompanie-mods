class CfgPatches
{
    class keko_persistency
    {
        units[] = {};
        requiredVersion = 1.80;
        requiredAddons[] = {
            "cba_main",
            "cba_settings",
            "cba_xeh",
            "extDB3"};
        author = "Schwaggot";
        authorUrl = "http://kellerkompanie.com";
		version = 1.0;
    };
};

class CfgFunctions 
{
    class keko_persistency
    {
        tag = "keko_persistency";
        class persistency 
        {
            file = "keko_persistency\functions";
            class preStart {preStart = 1;};
            class preInit  {preInit  = 1;};
            class savePlayerLoadout{};
            class loadPlayerLoadout{};
        };
    };
};

class Extended_PreInit_EventHandlers {
    keko_persistency_xeh = call compile preprocessFileLineNumbers "\keko_persistency\XEH_preInit.sqf";
};