// Original version by ARK https://github.com/Cyruz143/ark_inhouse
#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {"NVGoggles_AI"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
          "cba_main"};
        author = ECSTRING(common,KEKOTeam);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG; 
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"