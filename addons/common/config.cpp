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
            "ace_ai",
            "cba_main",
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
#include "gui\dialog_lockDoors.hpp"
#include "gui\display_addRoleDescriptionPrefix.hpp"
#include "gui\display_addRoleDescriptionSuffix.hpp"
#include "gui\display_replaceRoleDescription.hpp"


class Display3DEN {
	class ContextMenu: ctrlMenu {
		class Items	{
			class Edit {
				items[] = {
					QGVAR(addRoleDescriptionPrefix),
					QGVAR(addRoleDescriptionSuffix),
					QGVAR(removeRoleDescriptionPrefix),
					QGVAR(resetRoleDescription),
					QGVAR(exportCrate)};
			};
			class GVAR(addRoleDescriptionPrefix)	{
				action = "(findDisplay 313) createDisplay 'keko_addRoleDescriptionPrefixDisplay'";
				Text = "Add role description prefix";
				conditionShow = "selectedObject";
			};
			class GVAR(addRoleDescriptionSuffix) {
				action = "(findDisplay 313) createDisplay 'keko_addRoleDescriptionSuffixDisplay'";
				Text = "Add role description suffix";
				conditionShow = "selectedObject";
			};
			class GVAR(removeRoleDescriptionPrefix) {
				action = "(findDisplay 313) createDisplay 'keko_replaceRoleDescriptionDisplay'";
				Text = "Replace in role description";
				conditionShow = "selectedObject";
			};
			class GVAR(resetRoleDescription)	{
				action = QUOTE(call FUNC(resetRoleDescription));
				Text = "Reset role description";
				conditionShow = "selectedObject";
			};
			class GVAR(exportCrate)	{
				action = QUOTE(call FUNC(exportCrate));
				Text = "Export custom crate";
				conditionShow = "selectedObject";
			};
		};
	};
};

#include "CfgEventHandlers.hpp"
