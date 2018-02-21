class CfgPatches
{
	class keko_loadout
	{
		units[] = {
            "keko_ModuleChangeLoadout",
            "keko_ModuleAddLoadoutMenu",
            "keko_ModuleChangeLoadout3den",
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
    class keko_kellerkompanie: NO_CATEGORY
    {
        displayName = "Kellerkompanie";
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
        category           = "keko_kellerkompanie";
        function           = "keko_fnc_moduleAddLoadoutMenu3den";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_loadout\icons\loadout_menu_icon.paa";
        picture = "\keko_loadout\icons\loadout_menu_icon.paa";
        portrait = "\keko_loadout\icons\loadout_menu_icon.paa";
    };
    class keko_ModuleChangeLoadout3den: Module_F
    {
        scope              = 2; 
        scopeCurator       = 1;
        displayName        = "Change Loadout"; 
        category           = "keko_kellerkompanie";
        function           = "keko_fnc_moduleChangeLoadout3den";
        functionPriority   = 1;
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
        category           = "keko_kellerkompanie";
        function           = "keko_fnc_moduleAddLoadoutMenu";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_loadout\icons\loadout_menu_icon.paa";
        picture = "\keko_loadout\icons\loadout_menu_icon.paa";
        portrait = "\keko_loadout\icons\loadout_menu_icon.paa";
    };
    class keko_ModuleChangeLoadout: Module_F
    {
        scope              = 1; 
        scopeCurator       = 2;
        displayName        = "Change Loadout"; 
        category           = "keko_kellerkompanie";
        function           = "keko_fnc_moduleChangeLoadout";
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
        tag = "keko";
        class teleport 
        {
            file = "keko_loadout\functions";
            class addLoadoutMenu {};
            class moduleAddLoadoutMenu3den {};
            class moduleAddLoadoutMenu {};
            class moduleChangeLoadout3den {};
            class moduleChangeLoadout {};    
            class dialogLoadoutMenuInit{};
            class dialogLoadoutMenuCallback{};
            class giveLoadout{};
        };
    };
};

#include "\keko_loadout\functions\dialog_baseClasses.hpp"
#include "\keko_loadout\functions\dialog_changeLoadout.hpp"
#include "\keko_loadout\functions\dialog_loadoutMenu.hpp"

#include "\keko_loadout\factions\kekoFaction.hpp"