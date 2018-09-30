class CfgPatches {
    class keko_cruise_missiles {
        units[] = {};
        requiredVersion = 1.80;
        requiredAddons[] = {
            "cba_main"}; 
        version = 1.0;
        author = "Schwaggot";
        authorUrl = "http://kellerkompanie.com";
    };
};

class CfgFunctions
{
    class keko_cruise_missiles
    {
        tag = "keko_cruise_missiles";
        class main
        {
            file = "keko_cruise_missiles\functions";
            class cruiseMissileLaunch {};
            class cruiseMissileDecent {};
            class cruiseMissileArraysEdit {};
            class mathsTriangulatePos {};
        };
    };
};
