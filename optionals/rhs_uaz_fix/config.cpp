#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[]= {};
        weapons[] = {};
        requiredVersion= REQUIRED_VERSION;
        requiredAddons[]= {
            "rhs_main"
        };
        author = ECSTRING(common,Schwaggot);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CfgVehicles {
    class Offroad_01_base_F;
    class RHS_UAZ_Base: Offroad_01_base_F {
        forceHideDriver = 0;
        driverInAction = "RHS_UAZ_driver";
    };
};
