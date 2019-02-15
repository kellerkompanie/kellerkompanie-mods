#include "script_component.hpp"

class CfgPatches {
    class ADDON {
		name = COMPONENT_NAME;
        units[] = {};
		weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common","RHS_Missions_Pack"};
		author = ECSTRING(common,Schwaggot);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgMissions.hpp"
