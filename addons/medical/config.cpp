#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QGVAR(painkillersItem)
        };
        weapons[] = {
			QGVAR(painkillers)};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_main",
            "ace_medical"};
        author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgMagazines.hpp"
#include "CfgSounds.hpp"

#include "ACE_Medical_Treatments.hpp"
