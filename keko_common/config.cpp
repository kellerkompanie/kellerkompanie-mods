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
            "keko_ModuleRespawnPosition",
            "keko_ModuleRespawnPosition3den",
            "keko_ModuleInitMission",
            "keko_ModuleInitMission3den",
            "keko_ModuleRemoveAllActions",
            "keko_ModuleLockDoors",
            "keko_ModuleMissionSuccess",
            "keko_ModuleMissionFail",
            "keko_ModuleACEGarrison3den"
        };
        requiredVersion = 1.80;
        requiredAddons[] = {
        	  "3den",
            "keko_loadout",
            "ace_main",
            "ace_ai",
            "cba_settings",
            "A3_Modules_F",
  			    "A3_Modules_F_Curator" };
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

class CfgMarkers {
	/*extern*/ class flag_NATO;
	class keko_faction_flag: flag_NATO {
		name = "Kellerkompanie";
		icon = "\keko_common\pictures\keko_marker.paa";
		texture = "\keko_common\pictures\keko_marker.paa";
	};
};

class CfgVehicles
{
	class FlagCarrier;
	class keko_flag: FlagCarrier {
		scope = 2;
		scopeCurator = 2;
		displayName = "Flag (Kellerkompanie)";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\keko_common\pictures\keko_flag.paa'";
		};
	};

	class Banner_01_base_F;
	class keko_banner: Banner_01_base_F {
		scope = 2;
		scopeCurator = 2;
		displayName = "Banner (Kellerkompanie)";
		hiddenSelectionsTextures[] = {"\keko_common\pictures\keko_flag.paa"};
	};



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

    class ModuleEndMission_F : Module_F {scopeCurator = 1; scope = 1;};

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
    class keko_ModuleRespawnPosition3den: Module_F
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
        icon = "\keko_common\icons\icon_destination.paa";

        class Attributes: AttributesBase
		    {
	        class RespawnSide: Combo {
	        	property = "keko_common_ModuleRespawn_Side";
	            displayName = "Respawn Side";
	            description = "Choose one";
	            typeName = "NUMBER";
	            defaultValue = 0;
	            class Values
	            {
	                class all    	{name = "ALL";  	value = 0;};
	                class blufor 	{name = "BLUFOR";	value = 1;};
	                class indfor 	{name = "INDFOR";	value = 2;};
	                class opfor  	{name = "OPFOR";	value = 3;};
	                class civilian	{name = "CIVILIAN";	value = 4;};
	            };
	        };
	      };
    };
    class keko_ModuleACEGarrison3den: Module_F
    {
        scope              = 2;
        scopeCurator       = 1;
        displayName        = "ACE Garrison";
        category           = "keko_kellerkompanie";
        function           = "keko_common_fnc_moduleACEGarrison3den";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 1;
        isDisposable       = 0;
        icon = "\z\ace\addons\zeus\UI\Icon_Module_Zeus_Garrison_ca.paa";

        class Attributes: AttributesBase
		    {
          class Radius: Edit {
        	  property = "keko_common_ModuleACEGarrison_Radius";
        	  displayName = "Radius";
            typeName = "STRING";
            defaultValue = "'100'";
          };
          class Teleport: Checkbox {
    				property = "keko_common_ModuleACEGarrison_Teleport";
    				displayName = "Teleport";
    				typeName = "BOOL";
    				defaultValue = true;
    			};
          class TopDown: Checkbox {
    				property = "keko_common_ModuleACEGarrison_TopDown";
    				displayName = "Fill from top to bottom";
    				typeName = "BOOL";
    				defaultValue = false;
    			};
	        class Mode: Combo {
	        	  property = "keko_common_ModuleACEGarrison_Mode";
	            displayName = "Mode";
	            typeName = "NUMBER";
	            defaultValue = 1;
	            class Values
	            {
	                class even    	{name = "Even filling";  	value = 0;};
	                class building 	{name = "Building by building";	value = 1;};
	                class random 	{name = "Random filling";	value = 2;};
	            };
	        };
	      };
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
        isTriggerActivated = 0;
        isDisposable       = 0;
        icon = "\keko_common\icons\icon_full_heal.paa";
        curatorCanAttach   = 1;
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
        isTriggerActivated = 0;
        isDisposable       = 0;
        icon = "\keko_common\icons\icon_medic.paa";
        picture = "\keko_common\icons\icon_medic.paa";
        portrait = "\keko_common\icons\icon_medic.paa";
        curatorCanAttach   = 1;
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
        isTriggerActivated = 0;
        isDisposable       = 0;
        icon = "\keko_common\icons\icon_doctor.paa";
        curatorCanAttach   = 1;
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
        isTriggerActivated = 0;
        isDisposable       = 0;
        icon = "\keko_common\icons\icon_engineer.paa";
        curatorCanAttach   = 1;
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
        isTriggerActivated = 0;
        isDisposable       = 0;
        icon = "\keko_common\icons\icon_repair_specialist.paa";
        curatorCanAttach   = 1;
    };
    class keko_ModuleRemoveAllActions: Module_F
    {
        scope              = 1;
        scopeCurator       = 2;
        displayName        = "Remove all menus";
        category           = "keko_kellerkompanie";
        function           = "keko_common_fnc_moduleRemoveAllActions";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;
        isDisposable       = 0;
        curatorCanAttach   = 1;
        icon = "\keko_common\icons\icon_delete.paa";
    };
    class keko_ModuleLockDoors: Module_F
    {
        scope              = 1;
        scopeCurator       = 2;
        displayName        = "(Un-)Lock Doors ";
        category           = "keko_kellerkompanie";
        function           = "keko_common_fnc_moduleLockDoors";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;
        isDisposable       = 0;
        icon = "\keko_common\icons\icon_lock.paa";
    };
    class keko_ModuleMissionSuccess: Module_F
    {
        scope              = 1;
        scopeCurator       = 2;
        displayName        = "End Mission (Success)";
        category           = "keko_kellerkompanie";
        function           = "keko_common_fnc_moduleMissionEndSuccess";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;
        isDisposable       = 0;
        icon = "\keko_common\icons\icon_success.paa";
    };
    class keko_ModuleMissionFail: Module_F
    {
        scope              = 1;
        scopeCurator       = 2;
        displayName        = "End Mission (Fail)";
        category           = "keko_kellerkompanie";
        function           = "keko_common_fnc_moduleMissionEndFail";
        functionPriority   = 1;
        isGlobal           = 1;
        isTriggerActivated = 0;
        isDisposable       = 0;
        icon = "\keko_common\icons\icon_fail.paa";
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
            class moduleRemoveAllActions{};
            class moduleRespawnPosition{};
            class moduleRespawnPosition3den{};
            class moduleACEGarrison3den{};
            class moduleLockDoors{};
            class moduleMissionEndSuccess {};
            class moduleMissionEndFail {};
            class fullHeal{};
            class 3denAttributesChanged{};
            class addRoleDescriptionPrefix{};
            class addRoleDescriptionSuffix{};
            class replaceRoleDescription{};
            class resetRoleDescription{};
            class setRespawnPosition{};
            class lockDoors{};
            class lockDoorsDialogInit{};
            class lockDoorsDialogCallback{};
            class createZeus{};
            class exportCrate {};
        };
    };
};

#include "\keko_common\gui\dialog_baseClasses.hpp"
#include "\keko_common\gui\keko_baseDefines.hpp"

#include "\keko_common\gui\keko_addRoleDescriptionPrefixDisplay.hpp"
#include "\keko_common\gui\keko_addRoleDescriptionSuffixDisplay.hpp"
#include "\keko_common\gui\keko_replaceRoleDescriptionDisplay.hpp"

#include "\keko_common\gui\dialog_lockDoors.hpp"

class Display3DEN {
	class ContextMenu: ctrlMenu {
		class Items	{
			class Edit {
				items[] += {
					"keko_addRoleDescriptionPrefix",
          "keko_addRoleDescriptionSuffix",
					"keko_removeRoleDescriptionPrefix",
					"keko_resetRoleDescription",
					"keko_exportCrate"};
			};
			class keko_addRoleDescriptionPrefix	{
				action = "(findDisplay 313) createDisplay 'keko_addRoleDescriptionPrefixDisplay'";
				Text = "Add role description prefix";
				conditionShow = "selectedObject";
			};
      class keko_addRoleDescriptionSuffix {
          action = "(findDisplay 313) createDisplay 'keko_addRoleDescriptionSuffixDisplay'";
          Text = "Add role description suffix";
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
			class keko_exportCrate	{
				action = "call keko_common_fnc_exportCrate";
				Text = "Export custom crate";
				conditionShow = "selectedObject";
			};
		};
	};
};

class Extended_PreInit_EventHandlers {
	class keko_common {
		init = "call compile preprocessfilelinenumbers '\keko_common\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class keko_common {
		clientInit = "call compile preprocessfilelinenumbers '\keko_common\XEH_postInitClient.sqf'";
    serverInit = "call compile preprocessfilelinenumbers '\keko_common\XEH_postInitServer.sqf'";
	};
};
