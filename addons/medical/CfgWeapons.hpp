class cfgWeapons {
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;

    class GVAR(manualKit): CBA_MiscItem {
        scope = 2;
		scopeCurator = 2;
        displayName = "$STR_KEKO_REFILL_NAME";
        picture = QPATHTOF(ui\Land_FirstAidKit_01_closed_F.paa);
		model = "\A3\Weapons_F\Items\Medikit";
        descriptionShort = "$STR_KEKO_REFILL_DESCRIPTION";
        descriptionUse = "$STR_KEKO_REFILL_DESCRIPTIONUSE";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 120;
        };
	};

    class GVAR(autoKit): GVAR(manualKit) {
        displayName = "$STR_KEKO_REFILL_NAME_AUTO";
		descriptionShort = "$STR_ADV_REFILL_DESCRIPTION_AUTO";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 80;
        };
	};
	class GVAR(Kit_empty): GVAR(manualKit) {
		scope = 1;
		scopeCurator = 1;
		displayName = "$STR_KEKO_REFILL_NAME_EMPTY";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
	};

    class GVAR(FAK): GVAR(manualKit) {
        displayName = "$STR_KEKO_REFILL_NAME_FAK";
		picture = QPATHTOF(ui\FAK.paa);
		model = "\a3\Weapons_F\Ammo\mag_FirstAidkit.p3d";
        descriptionShort = "$STR_KEKO_REFILL_DESCRIPTION_FAK";
        descriptionUse = "$STR_KEKO_REFILL_DESCRIPTIONUSE";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 18;
        };
	};
};
