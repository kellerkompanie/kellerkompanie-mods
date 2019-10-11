#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
          /* OPFOR units */
            QGVAR(opfor_soldier1),
            QGVAR(opfor_soldier2),
            QGVAR(opfor_soldier3),
            QGVAR(opfor_soldier4),
            QGVAR(opfor_soldier5),
            QGVAR(opfor_soldier6),
            QGVAR(opfor_soldier7),
            QGVAR(opfor_soldier8),
            QGVAR(opfor_medic),
            QGVAR(opfor_ftl),
            QGVAR(opfor_officer),

            QGVAR(opfor_soldier1_rs),
            QGVAR(opfor_soldier2_rs),
            QGVAR(opfor_soldier3_rs),
            QGVAR(opfor_soldier4_rs),
            QGVAR(opfor_soldier5_rs),
            QGVAR(opfor_soldier6_rs),
            QGVAR(opfor_soldier7_rs),
            QGVAR(opfor_soldier8_rs),
            QGVAR(opfor_medic_rs),
            QGVAR(opfor_ftl_rs),
            QGVAR(opfor_officer_rs)


        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Characters_F_BLUFOR",
            "A3_Characters_F_INDEP",
            "A3_Characters_F_OPFOR",
            "A3_Characters_F",
              "MU_core",
              "A3_Weapons_F",
              "A3_Air_F",
              "A3_Air_F_beta",
              "A3_Soft_F",
              "A3_Soft_F_Offroad_01",
              "A3_Static_F",
              "A3_boat_F"
        };
        author = ECSTRING(common,Schwaggot);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicleClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
