class cfgVehicles {
    class Item_Base_F;

    class GVAR(manualKitItem): Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(refillName);
        author = "Schwaggot";
        vehicleClass = "Items";
        model = "\A3\Weapons_F\Items\Medikit";
        editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_FirstAidKit_01_open_F.jpg";
        class TransportItems {
            class manualKit {
                name = QGVAR(manualKit);
                count = 1;
            };
        };
    };

    class GVAR(autoKitItem): GVAR(manualKitItem) {
        displayName = CSTRING(refillNameAuto);
        class TransportItems {
            class autoKit {
                name = QGVAR(autoKit);
                count = 1;
            };
        };
    };

    class GVAR(FAKItem): GVAR(manualKitItem) {
        displayName = CSTRING(refillNameFAK);
        model = "\A3\Weapons_F\Items\FirstAidkit";
        editorPreview = QPATHTOF(ui\FAK.jpg);
        class TransportItems {
            class FAK {
                name = QGVAR(FAK);
                count = 1;
            };
        };
    };
};
