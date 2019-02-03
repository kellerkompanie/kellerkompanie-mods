class cfgVehicles {
	class Item_Base_F;

	class GVAR(manualKitItem): Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_KEKO_REFILL_NAME";
        author = "[SeL] Belbo";
        vehicleClass = "Items";
		model = "\A3\Weapons_F\Items\Medikit";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_FirstAidKit_01_open_F.jpg";
        class TransportItems {
			class manualKit {
				name = GVAR(manualKit);
				count = 1;
			};
        };
	};
	
	class GVAR(autoKitItem): GVAR(manualKitItem) {
		displayName = "$STR_KEKO_REFILL_NAME_AUTO";
        class TransportItems {
			class autoKit {
				name = GVAR(autoKit);
				count = 1;
			};
        };
	};

	class GVAR(FAKItem): GVAR(manualKitItem) {
		displayName = "$STR_KEKO_REFILL_NAME_FAK";
		model = "\A3\Weapons_F\Items\FirstAidkit";
		editorPreview = QPATHTOF(ui\FAK.jpg);
        class TransportItems {
			class FAK {
				name = GVAR(FAK);
				count = 1;
			};
        };
	};
};
