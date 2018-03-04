class CfgPatches
{
    class keko_unconcious
    {
        units[] = { };
        requiredVersion = 1.80;
        requiredAddons[] = {
            "cba_common",
        	"cba_events",
            "ace_main",
            "A3_Functions_F"};
        author = "Schwaggot";
        authorUrl = "http://kellerkompanie.com";
		version = 1.0;
    };
};

class CfgFunctions 
{
    class keko_unconcious 
    {
        tag = "keko_unconcious";
        class unconcious 
        {
            file = "keko_unconcious\functions";
            class postInit {postInit = 1;};
            class switchUnconscious {};
        };
    };
};