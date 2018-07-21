class CfgPatches
{
	class keko_loot
	{
		units[] = {            
        };
		requiredVersion = 1.80;
        requiredAddons[] = {
            "ace_interact_menu"};
        author = "Schwaggot";
        authorUrl = "http://kellerkompanie.com";
		version = 1.0; 
	};
};

class CfgFunctions 
{
    class keko_loot 
    {
        tag = "keko_loot";
        class loot 
        {
            file = "keko_loot\functions";
            class transferToVehicle {};
        };
    };
};

class Extended_PostInit_EventHandlers {

	class keko_looter {
		init = "call compile preProcessFileLineNumbers '\keko_loot\XEH_postInit.sqf'";
	};
};