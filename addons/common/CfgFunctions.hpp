class CfgFunctions {
    class acex_headless {
        tag = "acex_headless";
        class acex_headless {
            class transferGroups {
                file = QPATHTOF(functions\fnc_transferGroups.sqf);
            };
        };
    };

    class 3denEnhanced {
        tag = "Enh";
        class Placement {
            class garrisonNearest {
                file = QPATHTOF(functions\fnc_garrisonNearest.sqf);
            };
        };
        class PlacementTools {
            class placementTools_garrison {
                file = QPATHTOF(functions\fnc_placementTools_garrison.sqf);
            };
        };
    };
};
