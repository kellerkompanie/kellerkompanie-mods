class cfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;

    class GVAR(manualKit): CBA_MiscItem {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(refillName);
        picture = QPATHTOF(ui\Land_FirstAidKit_01_closed_F.paa);
        model = "\A3\Weapons_F\Items\Medikit";
        descriptionShort = CSTRING(refillDescription);
        descriptionUse = CSTRING(refillDescriptionUse);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 120;
        };
    };

    class GVAR(autoKit): GVAR(manualKit) {
        displayName = CSTRING(refillNameAuto);
        descriptionShort = CSTRING(refillDescriptionAuto);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 80;
        };
    };
    class GVAR(Kit_empty): GVAR(manualKit) {
        scope = 1;
        scopeCurator = 1;
        displayName = CSTRING(refillNameEmpty);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
    };

    class GVAR(FAK): GVAR(manualKit) {
        displayName = CSTRING(refillNameFAK);
        picture = QPATHTOF(ui\FAK.paa);
        model = "\a3\Weapons_F\Ammo\mag_FirstAidkit.p3d";
        descriptionShort = CSTRING(refillDescriptionFAK);
        descriptionUse = CSTRING(refillDescriptionUse);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 18;
        };
    };
};
