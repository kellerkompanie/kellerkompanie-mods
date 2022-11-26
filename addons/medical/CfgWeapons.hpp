class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class KEKO_painkiller: ACE_ItemCore {
        scope = 2;
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

    class KEKO_Bloodstopper : ACE_ItemCore {
        scope = 2;
        author = "Kellerkompanie";
        model = QPATHTOF(data\icon_bloodstopper.p3d);
        picture = QPATHTOF(ui\icon_bloodstopper.paa);
        displayName = CSTRING(Bloodstopper_Display);
        descriptionShort = CSTRING(Bloodstopper_Desc_Short);
        descriptionUse = CSTRING(Bloodstopper_Desc_Use);
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class KEKO_GoJuice : ACE_ItemCore {
        scope = 2;
        author = "Kellerkompanie";
        model = QPATHTOF(data\icon_bloodstopper.p3d);
        picture = QPATHTOF(ui\icon_goJuice.paa);
        displayName = CSTRING(GoJuice_Display);
        descriptionShort = CSTRING(GoJuice_Desc_Short);
        descriptionUse = CSTRING(GoJuice_Desc_Use);
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    class KEKO_Contrafinil : ACE_ItemCore {
        scope = 2;
        author = "Kellerkompanie";
        model = QPATHTOF(data\icon_bloodstopper.p3d);
        picture = QPATHTOF(ui\icon_contrafinil.paa);
        displayName = CSTRING(Contrafinil_Display);
        descriptionShort = CSTRING(Contrafinil_Desc_Short);
        descriptionUse = CSTRING(Contrafinil_Desc_Use);
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
};
