#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "keko_common_cigpack_generic",
            "keko_common_lighter_generic",
            "keko_common_matches_generic",
            "keko_common_lollipop_generic"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "keko_common",
            "cigs_core",
            "cigs_morley",
            "cigs_pops"
        };
        // skipped instead of erroring when Immersion Cigs - Rewrite is not loaded
        skipWhenMissingDependencies = 1;
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgEventHandlers.hpp"
