// Original version by ARK https://github.com/Cyruz143/ark_inhouse

class CfgPatches
{
    class keko_ai_nvgs
    {
        units[] = {};
        requiredVersion = 1.80;
        requiredAddons[] = {
          "cba_main"};
        author = "Schwaggot";
        authorUrl = "http://kellerkompanie.com";
		    version = 1.0;
        weapons[] = {
            "NVGoggles_AI"
        };
    };
};

class Extended_PostInit_EventHandlers {
    class keko_ai_nvgs {
        serverInit = "[] call compile preProcessFileLineNumbers '\keko_ai_nvgs\XEH_serverInit.sqf';";
    };
};

class CfgWeapons {
    class NVGoggles;
    class NVGoggles_AI : NVGoggles {
        author = "Schwaggot";
        descriptionShort = "Night Vision Goggles - AI Only";
        displayName = "NV Goggles (AI Only)";
        model = "\A3\Weapons_F\empty.p3d";
        modelOptics = "\A3\weapons_f\reticle\optics_night";
        picture = "\A3\Weapons_F\Data\UI\gear_nvg_CA.paa";
        scope = 1;
        class ItemInfo {
            hmdType = 0;
            mass = 20;
            modelOff = "\A3\Weapons_F\empty.p3d";
            type = 616;
            uniformModel = "\A3\Weapons_F\empty.p3d";
        };
    };
};
