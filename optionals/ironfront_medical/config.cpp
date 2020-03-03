#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[]= {};
        weapons[] = {};
        magazines[] = {
        };
        requiredVersion= REQUIRED_VERSION;
        requiredAddons[]= {
            "keko_main",
            "ace_medical_treatment",
            "keko_medical"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
