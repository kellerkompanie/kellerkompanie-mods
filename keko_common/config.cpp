class CfgPatches
{
    class keko_common
    {
        units[] = {
            "keko_ModuleFullHeal",
            "keko_ModuleAssignEngineer",
            "keko_ModuleAssignRepairSpecialist",
            "keko_ModuleAssignMedic",
            "keko_ModuleAssignDoctor",
            "keko_ModuleInitMission"
        };
        requiredVersion = 1.80;
        requiredAddons[] = {
        	"3den",
            "keko_loadout",
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
    class keko_ModuleInitMission3den: Module_F
    {
        scope              = 2; 
        scopeCurator       = 1;
        displayName        = "Initialize Mission"; 
        category           = "keko_kellerkompanie";
        function           = "keko_common_fnc_moduleInitMission3den";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_common\icons\icon_init.paa";
        picture = "\keko_common\icons\icon_init.paa";
        portrait = "\keko_common\icons\icon_init.paa";

        class EventHandlers: EventHandlers {
            AttributesChanged3DEN = "_this call keko_common_fnc_3denAttributesChanged;";
            //Init = "diag_log 'XXX EventHandler Init';";
        };

		class Attributes: AttributesBase
		{
			class MissionTitle: Edit {
				property = "keko_common_ModuleInit_MissionTitle";
				displayName = "Title";
				typeName = "STRING"; 
				defaultValue = "'Kellerkompanie Mission'";				
			};
			class MissionAuthor: Edit {
				property = "keko_common_ModuleInit_MissionAuthor";
                displayName = "Author";
                typeName = "STRING";
                defaultValue = profileName;
            };
            class MissionPicture: Edit {
            	property = "keko_common_ModuleInit_MissionPicture";
            	displayName = "Picture";
                typeName = "STRING";
                defaultValue = "'\keko_common\pictures\intro.paa'";
            };
            class MissionPictureSubtitle: Edit {
            	property = "keko_common_ModuleInit_MissionPictureSubtitle";
            	displayName = "Picture Subtitle";
                typeName = "STRING";
                defaultValue = "'www.kellerkompanie.com'";
            };
            class LoadoutOnSpawn: Checkbox {
            	property = "keko_common_ModuleInit_LoadoutOnSpawn";
                displayName = "Give Player Loadout on Spawn";
                typeName = "BOOL";
                defaultValue = true;                
            };
            class Faction: Combo {
            	property = "keko_common_ModuleInit_Faction";
                displayName = "Default faction";
                description = "Choose one";
                typeName = "STRING";
                defaultValue = "'kekoFactionNATO'";
                class Values
                {
                    class nato  {name = "[Minimal] NATO - North Atlantic Treaty Organization";  value = "kekoFactionNATO";};
                    class aaf {name = "[Minimal] AAF - Altis Armed Forces"; value = "kekoFactionAAF";};
                    class csat {name = "[Minimal] CSAT - Canton-Protocol Strategic Alliance Treaty"; value = "kekoFactionCSAT";};                    
                };
            };
            class GiveMap: Checkbox {
            	property = "keko_common_ModuleInit_GiveMap";
                displayName = "Give map";
                typeName = "BOOL";
                defaultValue = true;                
            };
            class GiveCompass: Checkbox {
            	property = "keko_common_ModuleInit_GiveCompass";
                displayName = "Give compass";
                typeName = "BOOL";
                defaultValue = true;                
            };            
            class GiveGps: Combo {
            	property = "keko_common_ModuleInit_GiveGps";
                displayName = "Give GPS";
                typeName = "NUMBER";
                defaultValue = 4; 
                class Values {
                    class none {name = "None"; value = 0;};
                    class gps {name = "GPS"; value = 1;};
                    class gpsAndMicro {name = "GPS and MicroDAGR"; value = 2;};
                    class micro {name = "MicroDAGR"; value = 3;};
                    class cTab {name = "cTab"; value = 4;};
                };
            };
            class GiveNvg: Combo {
            	property = "keko_common_ModuleInit_GiveNvg";
                displayName="Give Nightvision Equipment";
                typeName = "NUMBER";
                defaultValue = 0;
                class Values {
                    class none {name = "None"; value = 0;};
                    class headlampWhite {name = "Headlamp white"; value = 1;};
                    class headlampColor {name = "Headlamp color"; value = 2;};
                    class nvg1 {name = "NVG 1.Gen"; value = 3;};
                    class nvg2 {name = "NVG 2.Gen"; value = 4;};
                    class nvg3 {name = "NVG 3.Gen"; value = 5;};
                    class nvg4 {name = "NVG 4.Gen"; value = 6;};
                    class nvgW {name = "NVG Wide"; value = 7;};
                    class tws {name = "Wärmesicht"; value = 8;};
                    class usMono {name = "(main) Ami Mono"; value = 9;};
                    class usDual {name = "(main) Ami Dual"; value = 10;};
                    class bafMono {name = "(main) BAF Mono"; value = 11;};
                    class sovMono {name = "(main) Sovjet Mono"; value = 12;};
                };    
            };
            class GiveRadio: Combo {
            	property = "keko_common_ModuleInit_GiveRadio";
                displayName="Give radio";
                typeName = "NUMBER";
                defaultValue = 1;
                class Values {
                    class none {name = "None"; value = 0;};
                    class personal {name = "Personal for all"; value = 1;};
                    class mixed {name = "Only personal for lead positions, rifleman for the rest"; value = 2;};
                    class leadOnly {name = "Just for lead positions (rank > Corporal)"; value = 3;};
                };
            };
            class SideRelations: Combo {
            	property = "keko_common_ModuleInit_SideRelations";
                displayName="Independent verbündet mit";
                typeName = "NUMBER";
                defaultValue = 0;
                class Values {
                    class opfBlu {name = "OPFOR + BLUFOR"; value = 3;};
                    class opf {name = "OPFOR"; value = 2;};
                    class blu {name = "BLUFOR"; value = 1;};
                    class none {name = "keiner"; value = 0;};
                };
            }; 

			class ModuleDescription: ModuleDescription{};
		};
    };
    class keko_ModuleFullHeal: Module_F
    {
        scope              = 1; 
        scopeCurator       = 2;
        displayName        = "Full Heal"; 
        category           = "keko_kellerkompanie";
        function           = "keko_common_fnc_moduleFullHeal";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_common\icons\icon_full_heal.paa";
        picture = "\keko_common\icons\icon_full_heal.paa";
        portrait = "\keko_common\icons\icon_full_heal.paa";
    };
    class keko_ModuleAssignMedic: Module_F
    {
        scope              = 1; 
        scopeCurator       = 2;
        displayName        = "Assign Medic"; 
        category           = "keko_kellerkompanie";
        function           = "keko_common_fnc_moduleAssignMedic";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_common\icons\icon_medic.paa";
        picture = "\keko_common\icons\icon_medic.paa";
        portrait = "\keko_common\icons\icon_medic.paa";
    };
    class keko_ModuleAssignDoctor: Module_F
    {
        scope              = 1; 
        scopeCurator       = 2;
        displayName        = "Assign Doctor"; 
        category           = "keko_kellerkompanie";
        function           = "keko_common_fnc_moduleAssignDoctor";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_common\icons\icon_doctor.paa";
        picture = "\keko_common\icons\icon_doctor.paa";
        portrait = "\keko_common\icons\icon_doctor.paa";
    };
    class keko_ModuleAssignEngineer: Module_F
    {
        scope              = 1; 
        scopeCurator       = 2;
        displayName        = "Assign Engineer"; 
        category           = "keko_kellerkompanie";
        function           = "keko_common_fnc_moduleAssignEngineer";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_common\icons\icon_engineer.paa";
        picture = "\keko_common\icons\icon_engineer.paa";
        portrait = "\keko_common\icons\icon_engineer.paa";
    };
    class keko_ModuleAssignRepairSpecialist: Module_F
    {
        scope              = 1; 
        scopeCurator       = 2;
        displayName        = "Assign Repair Specialist"; 
        category           = "keko_kellerkompanie";
        function           = "keko_common_fnc_moduleAssignRepairSpecialist";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\keko_common\icons\icon_repair_specialist.paa";
        picture = "\keko_common\icons\icon_repair_specialist.paa";
        portrait = "\keko_common\icons\icon_repair_specialist.paa";
    };
};

class CfgFunctions 
{
    class keko_common 
    {
        tag = "keko_common";
        class common 
        {
            file = "keko_common\functions";
            class moduleInitMission3den {};
            class moduleFullHeal {};
            class moduleAssignMedic {};
            class moduleAssignDoctor {};
            class moduleAssignEngineer {};    
            class moduleAssignRepairSpecialist{};
            class fullHeal{};
            class initMission{};
            class 3denAttributesChanged{};
            class addRoleDescriptionPrefix{};
            class replaceRoleDescription{};
            class resetRoleDescription{};
        };
        class init
        {
            file = "keko_common\functions\init";
            class init {};
            class initPlayerLocal {};
            class initServer {};
            class preInit {preInit = 1;};
        };
    };
};

#include "\keko_common\gui\keko_baseDefines.hpp"
#include "\keko_common\gui\keko_addRoleDescriptionPrefixDisplay.hpp"
#include "\keko_common\gui\keko_replaceRoleDescriptionDisplay.hpp"

class Display3DEN {
	class ContextMenu: ctrlMenu {
		class Items	{
			class Edit {
				items[] += {
					"keko_addRoleDescriptionPrefix",
					"keko_removeRoleDescriptionPrefix",
					"keko_resetRoleDescription"};
			};
			class keko_addRoleDescriptionPrefix	{
				action = "(findDisplay 313) createDisplay 'keko_addRoleDescriptionPrefixDisplay'";
				Text = "Add role description prefix";
				conditionShow = "selectedObject";
			};	
			class keko_removeRoleDescriptionPrefix {
				action = "(findDisplay 313) createDisplay 'keko_replaceRoleDescriptionDisplay'";
				Text = "Replace in role description";
				conditionShow = "selectedObject";
			};	
			class keko_resetRoleDescription	{
				action = "call keko_common_fnc_resetRoleDescription";
				Text = "Reset role description";
				conditionShow = "selectedObject";
			};							
		};
	};
};

