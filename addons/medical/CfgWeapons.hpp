class CfgWeapons {
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_painKiller: ACE_ItemCore {
		scope = 2;
		author = "Katalam";
		displayName = "Painkiller";
		picture = "\z\ace\addons\medical\ui\items\adenosine_x_ca.paa";
		//model = "\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
		descriptionShort = "Used to suppress pain";
		descriptionUse = "An analgesic used to combat lightly to moderate pain experiences.";
		class ItemInfo: CBA_MiscItem_ItemInfo {
				mass = 0.5;
		};
	};
};
