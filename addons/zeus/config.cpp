#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "keko_common",
            "ace_modules",
            "keko_faction_generic"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

#include "ui\dialogs\RscBaseClasses.hpp"
#include "ui\dialogs\RscDialogCompositions.hpp"
#include "ui\dialogs\RscDialogCopyPaste.hpp"
#include "ui\dialogs\RscDialogDynamic.hpp"
#include "ui\dialogs\RscDialogExecuteCode.hpp"
#include "ui\dialogs\RscDisplayReplacement.hpp"
