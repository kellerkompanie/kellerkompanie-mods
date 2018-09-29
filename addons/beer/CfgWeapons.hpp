class CfgWeapons {
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class GVAR(beerEmpty) : ACE_ItemCore	{
		author = "Schwaggot";
		descriptionShort = "An empty beer bottle.";
		displayName = "Beer (empty)";
		model = QPATHTOF(botella_generica_3D.p3d);
		picture= QPATHTOF(ui\icon_canteen.paa);
		scope = 2;
		class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
	};
};
