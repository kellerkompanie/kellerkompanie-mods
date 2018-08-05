// Original version by ARK https://github.com/Cyruz143/ark_inhouse

class CfgPatches {
    class keko_building_cleaner {
        units[] = {};
        requiredVersion = 1.80;
        requiredAddons[] = {
          "cba_main"};
        author = "Schwaggot";
        authorUrl = "http://kellerkompanie.com";
		    version = 1.0;
        weapons[] = {};
    };
};

class Extended_PostInit_EventHandlers {
    class keko_building_cleaner {
        serverInit = "[] call compile preProcessFileLineNumbers '\keko_building_cleaner\XEH_serverInit.sqf';";
    };
};
