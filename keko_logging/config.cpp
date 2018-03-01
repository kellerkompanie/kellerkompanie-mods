class CfgPatches
{
    class keko_logging
    {
        units[] = {};
        requiredVersion = 1.80;
        requiredAddons[] = {
            "extDB3"};
        author = "Schwaggot";
        authorUrl = "http://kellerkompanie.com";
		version = 1.0;
    };
};

class CfgFunctions 
{
    class keko_logging
    {
        tag = "keko_logging";
        class logging 
        {
            file = "keko_logging\functions";
            class preStart {preStart = 1;};
            class preInit {preInit = 1;};
        };
    };
};