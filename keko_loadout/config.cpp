class CfgPatches
{
	class keko_loadout
	{
		units[] = {
            "keko_ModuleAddLoadoutMenu",
            "keko_ModuleAddLoadoutMenu3den"
        };
		requiredVersion = 1.80;
        requiredAddons[] = {
            "A3_UI_F",
            "A3_UI_F_Curator",
            "A3_Functions_F",
            "A3_Functions_F_Curator",
            "A3_Modules_F",
            "A3_Modules_F_Curator"};
        author = "Schwaggot";
        authorUrl = "http://kellerkompanie.com";
		version = 1.0; 
	};
};

class CfgFactionClasses
{
    class NO_CATEGORY;
    class keko_category_loadout: NO_CATEGORY
    {
        displayName = "Kellerkompanie Loadout";
    };
};

class CfgVehicles
{
    class Logic;
    class Module_F: Logic
    {
        class ArgumentsBaseUnits;
        class ModuleDescription;
    };
    class keko_ModuleAddLoadoutMenu3den: Module_F
    {
        scope              = 2; 
        scopeCurator       = 1;
        displayName        = "Add Loadout Menu"; 
        category           = "keko_category_loadout";
        function           = "keko_loadout_fnc_moduleAddLoadoutMenu3den";
        functionPriority   = 2;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_loadout\icons\loadout_menu_icon.paa";
        picture = "\keko_loadout\icons\loadout_menu_icon.paa";
        portrait = "\keko_loadout\icons\loadout_menu_icon.paa";
    };    
    class keko_ModuleAddLoadoutMenu: Module_F
    {
        scope              = 1; 
        scopeCurator       = 2;
        displayName        = "Add Loadout Menu"; 
        category           = "keko_category_loadout";
        function           = "keko_loadout_fnc_moduleAddLoadoutMenu";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_loadout\icons\loadout_menu_icon.paa";
        picture = "\keko_loadout\icons\loadout_menu_icon.paa";
        portrait = "\keko_loadout\icons\loadout_menu_icon.paa";
    };    
};

class CfgFunctions 
{
    class keko_loadout 
    {
        tag = "keko_loadout";
        class teleport 
        {
            file = "keko_loadout\functions";
            class addLoadoutMenu {};
            class moduleAddLoadoutMenu3den {};
            class moduleAddLoadoutMenu {};  
            class dialogLoadoutMenuInit{};
            class dialogLoadoutMenuCallback{};
            class giveLoadout{};            
        };
        class tfar {
            file = "keko_loadout\functions\tfar";
            class setChannels{};
            class tfarSettings{}; 
        };
    };
};

#include "\keko_loadout\functions\dialog_baseClasses.hpp"
#include "\keko_loadout\functions\dialog_loadoutMenu.hpp"

#include "\keko_loadout\factions\kekoFaction.hpp"