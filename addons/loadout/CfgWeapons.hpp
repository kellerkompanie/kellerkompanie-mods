class CfgWeapons {
	class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class keko_firstAidKit: ACE_ItemCore {
        scope = 2;
        author = "Kellerkompanie";
        picture = "\a3\weapons_f\items\data\ui\gear_firstaidkit_ca.paa";
        displayName = CSTRING(FirstAidKit_Display);
        descriptionShort = CSTRING(FirstAidKit_Desc_Short);
        descriptionUse = CSTRING(FirstAidKit_Desc_Use);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 20;
        };
    };
    class keko_basicEquipment: ACE_ItemCore {
        scope = 2;
        author = "Kellerkompanie";
        picture = QPATHTOF(ui\icon_basicEquipment.paa);
        displayName = CSTRING(BasicEquipment_Display);
        descriptionShort = CSTRING(BasicEquipment_Desc_Short);
        descriptionUse = CSTRING(BasicEquipment_Desc_Use);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 37;
        };
    };
};