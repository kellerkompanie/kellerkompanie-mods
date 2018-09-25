#include "script_component.hpp"

class CfgPatches {
    class ADDON {
		name = COMPONENT_NAME;
        units[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "cba_settings",
            "cba_xeh",
            "extDB3",
            "keko_persistency_settings"};
		author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
