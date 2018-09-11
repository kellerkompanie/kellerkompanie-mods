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
    class GVAR(moduleBase): Module_F {
        author = ECSTRING(common,KEKOTeam);
        category = "KEKO";
        function = QEFUNC(common,dummy);
        scope              = 1; 
        scopeCurator       = 2;
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;
    };
    class GVAR(moduleBase3den): Module_F {
        author = ECSTRING(common,KEKOTeam);
        category = "KEKO";
        function = QEFUNC(common,dummy);
        scope              = 2;
        scopeCurator       = 1;
        functionPriority   = 2;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
    };

    class keko_ModulePoliceSettings3den: GVAR(moduleBase3den)
    {
        displayName        = "Police Settings"; 
        category           = QGVAR(Police);
        function           = QFUNC(modulePoliceSettings3den);
        icon = QPATHTOF(ui\icon_police.paa);

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
            class FleeingChance: Edit {
                property = "keko_police_moduleSettings_fleeingChance";
                displayName = "Fleeing chance (in percent)";
                typeName = "NUMBER"; 
                defaultValue = 10;              
            };  

			class ModuleDescription: ModuleDescription{};
		};
    };

    class keko_ModulePoliceSettings: GVAR(moduleBase)
    {
        displayName        = "Police Settings"; 
        category           = QGVAR(Police);
        function           = QFUNC(modulePoliceSettings);
        icon = QPATHTOF(ui\icon_police.paa);
        curatorCanAttach   = 1;
    };
};