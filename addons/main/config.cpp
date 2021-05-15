#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Data_F_Sams_Loadorder",
            "A3_Data_F_Mod_Loadorder",
            "cba_ui",
            "cba_xeh",
            "cba_jr",
            "ace_main"
        };
        author = "Schwaggot";
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@keko";
        name = "Kellerkompanie Mods";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = CSTRING(URL);
        description = "Issue Tracker: https://github.com/Schwaggot/kellerkompanie-mods/issues";
    };
};
