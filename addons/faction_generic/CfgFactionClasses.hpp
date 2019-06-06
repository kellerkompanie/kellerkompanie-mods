class cfgFactionClasses {

    // Legacy units
    #include "CfgFactionClassesLegacy.hpp"

    class GVAR(blufor) {
        displayName = "Kellerkompanie BLUFOR";
        priority = 1;
        side = 1;
        icon = "\A3\data_f\cfgfactionclasses_blu_ca.paa";
        scopeCurator = 1;
    };
    class GVAR(indfor) {
        displayName = "Kellerkompanie INDFOR";
        priority = 1;
        side = 2;
        icon = "\A3\data_f\cfgfactionclasses_ind_ca.paa";
        scopeCurator = 1;
    };
    class GVAR(opfor) {
        displayName = "Kellerkompanie OPFOR";
        priority = 1;
        side = 0;
        icon = "\A3\data_f\cfgfactionclasses_opf_ca.paa";
        scopeCurator = 1;
    };
};
