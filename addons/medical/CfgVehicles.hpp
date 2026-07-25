class CfgVehicles {
    class Item_Base_F;
    // deprecated, superseded by ACE_painkillersItem, hidden but kept so existing 3DEN placements still resolve
    class KEKO_painkillerItem: Item_Base_F {
        scope = 1;
        scopeCurator = 1;
        author = "Kellerkompanie";
        displayName = CSTRING(Painkiller_Display);
        vehicleClass = "Items";
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_PainKillers_F.jpg";
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_painkillers,1);
        };
    };
};
