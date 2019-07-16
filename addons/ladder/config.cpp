#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "keko_common"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class LadderCivilStatic;
        class LadderCivilUpLoop: LadderCivilStatic {
            speed = "1.05/(2/3)";
        };
    };
};

class CfgAnimation {
    ladderSpeed = "0.5*2";
};
