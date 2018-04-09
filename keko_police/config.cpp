class CfgPatches
{
	class keko_police
	{
		units[] = {
            "keko_ModulePoliceSettings3den",
            "keko_ModulePoliceSettings"
        };
		requiredVersion = 1.80;
        requiredAddons[] = {
        	"3den",
        	"cba_main",
        	"cba_keybinding",
        	"cba_settings",
            "ace_main"};
        author = "Schwaggot";
        authorUrl = "http://kellerkompanie.com";
		version = 1.0; 
	};
};

class CfgFactionClasses
{
    class NO_CATEGORY;
    class keko_category_police: NO_CATEGORY
    {
        displayName = "Kellerkompanie Police";
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

			expression = "_this setVariable ['%s',_value];";
		};
    };

    class keko_ModulePoliceSettings3den: Module_F
    {
        scope              = 2; 
        scopeCurator       = 1;
        displayName        = "Police Settings"; 
        category           = "keko_category_police";
        function           = "keko_police_fnc_modulePoliceSettings3den";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_police\icons\icon_police.paa";

		class Attributes: AttributesBase
		{
			class SurrenderChance: Edit {
				property = "keko_police_moduleSettings_surrenderChance";
				displayName = "Surrender chance (in percent)";
				typeName = "NUMBER"; 
				defaultValue = 10;				
			};            
            class ShoutDistance: Combo {
            	property = "keko_police_moduleSettings_shoutDistance";
                displayName = "Shout distance";
                description = "Choose one";
                typeName = "NUMBER";
                defaultValue = 15;
                class Values
                {
                	class five_m {name = "5 m";  value = 5;};
                    class ten_m  {name = "10 m";  value = 10;};
                    class fifteen_m {name = "15 m"; value = 15;};
                    class twentyfive_m {name = "25 m"; value = 25;};
                    class fifty_m {name = "50 m"; value = 50;};
                };
            };
            class SurenderWounded: Checkbox {
            	property = "keko_police_moduleSettings_accountWounded";
                displayName = "Higher surrender chance if wounded";
                typeName = "BOOL";
                defaultValue = true;                
            };

			class ModuleDescription: ModuleDescription{};
		};
    };

    class keko_ModulePoliceSettings: Module_F
    {
        scope              = 1; 
        scopeCurator       = 2;
        displayName        = "Police Settings"; 
        category           = "keko_category_police";
        function           = "keko_police_fnc_modulePoliceSettings";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_police\icons\icon_police.paa";
        curatorCanAttach   = 1;
    };

    /*class keko_ModuleRespawnPosition3den: Module_F
    {
        scope              = 2; 
        scopeCurator       = 1;
        displayName        = "Respawn Position"; 
        category           = "keko_kellerkompanie";
        function           = "keko_common_fnc_moduleRespawnPosition3den";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_common\icons\icon_police.paa";
    };

    class keko_ModuleRespawnPosition: Module_F
    {
        scope              = 1; 
        scopeCurator       = 2;
        displayName        = "Respawn Position"; 
        category           = "keko_kellerkompanie";
        function           = "keko_common_fnc_moduleRespawnPosition";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_common\icons\icon_destination.paa";
        curatorCanAttach   = 1;
    };*/

};

class CfgFunctions
{
	class keko_police
    {
        tag = "keko_police";
        class police 
        {
            file = "keko_police\functions";
            class modulePoliceSettings3den {};
            class modulePoliceSettings {};
            class surrenderUnits {};
            class settingsDialogInit{};
            class settingsDialogCallback{};
        };
        class init
        {
            file = "keko_police\functions\init";
            class preInit {preInit = 1;};
            class postInit {postInit = 1;};
        };
    };
};

class CfgSounds
{
	sounds[] = {};
	/* Schwaggot's recordings */
	class keko_police_shout1 
	{		
		name = "keko_police_shout1"; // how the sound is referred to in the editor (e.g. trigger effects)		
		sound[] = {"\keko_police\sounds\01_halt_polizei.ogg", 1, 1, 100}; // filename, volume, pitch, distance		
		titles[] = { 1, "Hände hoch Polizei!" }; // subtitle delay in seconds, subtitle text
	};
	class keko_police_surrender1 
	{
		name = "keko_police_surrender1";
		sound[] = {"\keko_police\sounds\01_geben_auf.ogg", 1, 1, 100};
		titles[] = { 1, "Michse geben auf!" };
	};
	class keko_police_fuckyou1 
	{
		name = "keko_police_fuckyou1";
		sound[] = {"\keko_police\sounds\01_fuck_you.ogg", 1, 1, 100};
		titles[] = { 1, "Fuck you m8!" };
	};

	/* Gunk's extracted soundfiles */
	class keko_police_02_gangster_gesichtet
	{
		name = "keko_police_02_gangster_gesichtet";
		sound[] = {"\keko_police\sounds\02_gangster_gesichtet.ogg", db+10, 1, 100};
		titles[] = { 1, "Gangster gesichtet!" };
	};
	class keko_police_02_ganz_ruhig
	{
		name = "keko_police_02_ganz_ruhig";
		sound[] = {"\keko_police\sounds\02_ganz_ruhig.ogg", db+10, 1, 100};
		titles[] = { 1, "Ganz ruhig!" };
	};
	class keko_police_02_halt_oder_ich_schiesse
	{
		name = "keko_police_02_halt_oder_ich_schiesse";
		sound[] = {"\keko_police\sounds\02_halt_oder_ich_schiesse.ogg", db+10, 1, 100};
		titles[] = { 1, "Halt, oder ich schieße!" };
	};
	class keko_police_02_keine_bewegung
	{
		name = "keko_police_02_keine_bewegung";
		sound[] = {"\keko_police\sounds\02_keine_bewegung.ogg", db+10, 1, 100};
		titles[] = { 1, "Keine Bewegung, dann passiert dir nichts!" };
	};
	class keko_police_02_polizei01
	{
		name = "keko_police_02_polizei01";
		sound[] = {"\keko_police\sounds\02_polizei01.ogg", db+10, 1, 100};
		titles[] = { 1, "Polizei!" };
	};
	class keko_police_02_polizei02
	{
		name = "keko_police_02_polizei02";
		sound[] = {"\keko_police\sounds\02_polizei02.ogg", db+10, 1, 100};
		titles[] = { 1, "Polizei!" };
	};
	class keko_police_02_polizei03
	{
		name = "keko_police_02_polizei03";
		sound[] = {"\keko_police\sounds\02_polizei03.ogg", db+10, 1, 100};
		titles[] = { 1, "Polizei!" };
	};
	class keko_police_02_polizei04
	{
		name = "keko_police_02_polizei04";
		sound[] = {"\keko_police\sounds\02_polizei04.ogg", db+10, 1, 100};
		titles[] = { 1, "Polizei!" };
	};
	class keko_police_02_polizei05
	{
		name = "keko_police_02_polizei05";
		sound[] = {"\keko_police\sounds\02_polizei05.ogg", db+10, 1, 100};
		titles[] = { 1, "Polizei!" };
	};
	class keko_police_02_sofort_stehenbleiben
	{
		name = "keko_police_02_sofort_stehenbleiben";
		sound[] = {"\keko_police\sounds\02_sofort_stehenbleiben.ogg", db+10, 1, 100};
		titles[] = { 1, "Sofort stehenbleiben!" };
	};
	class keko_police_02_waffe_weg
	{
		name = "keko_police_02_waffe_weg";
		sound[] = {"\keko_police\sounds\02_waffe_weg.ogg", db+10, 1, 100};
		titles[] = { 1, "Waffe weg!" };
	};


};

#include "\keko_police\gui\dialog_baseClasses.hpp"
#include "\keko_police\gui\dialog_policeSettings.hpp"