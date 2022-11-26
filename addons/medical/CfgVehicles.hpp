class CfgVehicles {
    class Item_Base_F;
    class KEKO_painkillerItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "Kellerkompanie";
        displayName = CSTRING(Painkiller_Display);
        vehicleClass = "Items";
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_PainKillers_F.jpg";
        class TransportItems {
            MACRO_ADDITEM(KEKO_painkiller,1);
        };
    };

    class KEKO_bloodstopperItem : Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "Kellerkompanie";
        displayName = CSTRING(Bloodstopper_Display);
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(KEKO_bloodstopper, 1);
        };
    };

    class KEKO_goJuiceItem : Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "Kellerkompanie";
        displayName = CSTRING(GoJuice_Display);
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(KEKO_goJuice, 1);
        };
    };

    class KEKO_contrafililItem : Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "Kellerkompanie";
        displayName = CSTRING(Contrafinil_Display);
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(KEKO_contrafinil, 1);
        };
    };

    class ACE_MedicalLitterBase;
    class KEKO_MedicalLitter_painkiller: ACE_MedicalLitterBase {
        model = "\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
    };
};
