class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    // Placeholders that mission loadouts reference, swapped for the real items at
    // runtime by XEH_postInit. Names kept as keko_common_* so existing missions and
    // optionals/faction_the_zone keep working after the move out of keko_common.
    class keko_common_cigpack_generic: ACE_ItemCore {
        displayName = "Cig Pack";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
        picture = "\z\cigs\addons\morley\data\ui\gear_cigpack_x_ca.paa";
    };
    class keko_common_lighter_generic: ACE_ItemCore {
        displayName = "Lighter";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
        picture = "\z\cigs\addons\core\data\ui\gear_lighter_x_ca.paa";
    };
    class keko_common_matches_generic: ACE_ItemCore {
        displayName = "Matches";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        picture = "\z\cigs\addons\core\data\ui\gear_matches_x_ca.paa";
    };
    class keko_common_lollipop_generic: ACE_ItemCore {
        displayName = "Lollipop (Packed)";
        count = 1;
        scopeCurator = 2;
        scope = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
        picture = "\z\cigs\addons\pops\data\ui\gear_poppack_x_ca.paa";
    };
};
