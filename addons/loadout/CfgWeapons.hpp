class CfgWeapons {
	class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class keko_basicEquipment: ACE_ItemCore {
        scope = 2;
        author = "Kellerkompanie";
        picture = QPATHTOF(ui\icon_basicEquipment.paa);
        displayName = CSTRING(BasicEquipment_Display);
        descriptionShort = CSTRING(BasicEquipment_Desc_Short);
        descriptionUse = CSTRING(BasicEquipment_Desc_Use);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
};