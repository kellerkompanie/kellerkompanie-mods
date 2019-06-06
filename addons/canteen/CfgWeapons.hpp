class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class GVAR(canteenEmpty) : ACE_ItemCore    {
        author = "Schwaggot";
        descriptionShort = CSTRING(descriptionShortEmpty);
        displayName = CSTRING(displayNameEmpty);
        model = "\A3\Structures_F_EPA\Items\Food\Canteen_F.p3d";
        picture= QPATHTOF(ui\icon_canteen.paa);
        scope = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
    };
};
