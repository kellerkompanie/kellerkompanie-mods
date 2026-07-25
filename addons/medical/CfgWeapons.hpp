class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    // deprecated, superseded by ACE_painkillers, kept so legacy loadouts can be replaced at runtime
    class KEKO_painkiller: ACE_ItemCore {
        scope = 2;
        scopeArsenal = 0;
        author = "Kellerkompanie";
        model = "\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
        picture = QPATHTOF(ui\icon_painkiller.paa);
        displayName = CSTRING(Painkiller_Display);
        descriptionShort = CSTRING(Painkiller_Desc_Short);
        descriptionUse = CSTRING(Painkiller_Desc_Use);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.1;
        };
    };
};
