class CfgWeapons {
	class ACE_morphine;
	class CBA_MiscItem_ItemInfo;
	class GVAR(painkillers): ACE_morphine {
        scope = 2;
        author = ECSTRING(common,KEKOTeam);
        displayName = "Painkillers";
        picture = QPATHTOF(ui\icon_painkillers.paa);
        model = "\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
        descriptionShort = "Painkillers";
        descriptionUse = "A box full of painkillers";

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        };
	};
};
