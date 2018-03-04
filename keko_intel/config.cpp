class CfgPatches
{
    class keko_intel
    {
        units[] = {
            "keko_ModuleAddIntel",
            "keko_ModuleAddIntel3den"
        };
        requiredVersion = 1.80;
        requiredAddons[] = {
        	"3den",
            "ace_main",
            "ace_modules",
            "cba_settings" };
        author = "Schwaggot";
        authorUrl = "http://kellerkompanie.com";
		version = 1.0;
    };
};

class CfgFactionClasses
{
    class NO_CATEGORY;
    class keko_kellerkompanie_intel: NO_CATEGORY
    {
        displayName = "Kellerkompanie Intel";
    };
};

class CfgVehicles
{
    class Logic;
    class Module_F: Logic
    {
        class EventHandlers;
        class ModuleDescription;

        class AttributesBase
		{
			class Default;
			class Edit; 
			class Combo;
			class Checkbox; 
			class CheckboxNumber; 
			class ModuleDescription;
			class Units; 
		};
    };
    class keko_ModuleAddIntel3den: Module_F
    {
        scope              = 2; 
        scopeCurator       = 1;
        displayName        = "Add Intel"; 
        category           = "keko_kellerkompanie_intel";
        function           = "keko_intel_fnc_moduleAddIntel3den";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_intel\icons\icon_intel.paa";

		class Attributes: AttributesBase
		{
            class Action: Edit {
                property = "keko_intel_ModuleAddIntel_Action";
                displayName = "Action";
                typeName = "STRING"; 
                defaultValue = "'Dokument aufheben'";              
            };
			class Title: Edit {
				property = "keko_intel_ModuleAddIntel_Title";
				displayName = "Title";
				typeName = "STRING"; 
				defaultValue = "'Gefundene Dokumente'";				
			};
			class Content: Edit {
				property = "keko_intel_ModuleAddIntel_Content";
                displayName = "Content";
                typeName = "STRING";
                defaultValue = "'In den Dokumenten steht etwas.'";
            };
            class Remove: Checkbox {
                property = "keko_intel_ModuleAddIntel_Remove";
                displayName = "Remove after";
                typeName = "BOOL";
                defaultValue = false;
            };
		};
    };
    class keko_ModuleAddIntel: Module_F
    {
        displayName        = "Add Intel"; 
        icon               = "\keko_intel\icons\icon_intel.paa";
        category           = "keko_kellerkompanie_intel";
        function           = "keko_intel_fnc_moduleAddIntel";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;
        scope              = 1; 
        scopeCurator       = 2;
        curatorCanAttach   = 1;
    };
};

class CfgFunctions 
{
    class keko_intel
    {
        tag = "keko_intel";
        class intel 
        {
            file = "keko_intel\functions";
            class moduleAddIntel3den {};
            class moduleAddIntel {};
            class dialogIntelInit{};
            class dialogIntelCallback{};
            class addIntel{};
        };
    };
};

#include "\keko_intel\functions\dialog_baseClasses.hpp"
#include "\keko_intel\functions\dialog_intel.hpp"