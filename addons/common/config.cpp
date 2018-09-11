#include "script_component.hpp"

class CfgPatches {
    class ADDON {
    	name = COMPONENT_NAME;
        units[] = {            
            QGVAR(moduleFullHeal),
            QGVAR(moduleAssignEngineer),
            QGVAR(moduleAssignRepairSpecialist),
            QGVAR(moduleAssignMedic),
            QGVAR(moduleAssignDoctor),
            QGVAR(moduleRespawnPosition),
            QGVAR(moduleRespawnPosition3den),
            QGVAR(moduleInitMission),
            QGVAR(moduleInitMission3den),
            QGVAR(moduleRemoveAllActions),
            QGVAR(moduleLockDoors),
            QGVAR(moduleMissionSuccess),
            QGVAR(moduleMissionFail),
            QGVAR(moduleACEGarrison3den)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "keko_main",
        	"3den",
            "keko_loadout",
            "ace_ai",
            "cba_settings",
            "A3_Modules_F",
  			"A3_Modules_F_Curator" };
        author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
		VERSION_CONFIG_COMMON;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgMarkers.hpp"
#include "CfgVehicles.hpp"

#include "gui\dialog_baseClasses.hpp"
#include "gui\keko_baseDefines.hpp"

#include "gui\keko_addRoleDescriptionPrefixDisplay.hpp"
#include "gui\keko_addRoleDescriptionSuffixDisplay.hpp"
#include "gui\keko_replaceRoleDescriptionDisplay.hpp"

#include "gui\dialog_lockDoors.hpp"

class Display3DEN {
	class ContextMenu: ctrlMenu {
		class Items	{
			class Edit {
				items[] = {
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

#include "CfgEventHandlers.hpp"
