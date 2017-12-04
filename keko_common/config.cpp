class CfgPatches
{
    class keko_common
    {
        units[] = {};
        requiredVersion = 1.78;
        requiredAddons[] = {};
        author[] = {"Schwaggot"};
        authorUrl = "http://kellerkompanie.com";
		version = "1.0.0";
		versionStr = "1.0.0";
        versionAr[] = {1,0,0};        
    };
};

class CfgFunctions {
    class keko_common {
        tag = "keko_common";
        class client {
            file = "keko_common\functions\client";
            class fullHeal {};
        };
        class global {
            file = "keko_common\functions\global";
            class changeName {};
        };
    };
};