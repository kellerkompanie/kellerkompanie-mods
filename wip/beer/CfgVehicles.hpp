class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class GVAR(actions) {
                displayName = "Beer";
                condition = "";
                exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
                statement = "";
                showDisabled = 1;
                priority = 2.1;
                icon = QPATHTOF(ui\icon_canteen_action.paa);

				class GVAR(drink) {
					displayName = "Drink from canteen";
					condition = QUOTE(_player call FUNC(hasCanteen));
					exceptions[] = {};
					icon = QPATHTOF(ui\icon_canteen_action.paa);
					statement = QUOTE(_player call FUNC(canteenDrink));
				};

				/*class GVAR(fill) {
					displayName = "Fill canteen";
					condition = QUOTE(_player call QQFUNC(hasCanteen));
					exceptions[] = {};
					icon = QPATHTOF(ui\icon_canteen_action.paa);
					statement = QUOTE(_player call QQFUNC(fillCanteen));
				};*/
			}
		};
	};

	class WeaponHolder_Single_limited_item_F;
	class GVAR(beerItem): WeaponHolder_Single_limited_item_F {
		scope = 2;
		scopeCurator = 2;
		displayName = "Beer";
		author = "Schwaggot";
		vehicleClass = "Magazines";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Canteen_F.jpg";
		class TransportMagazines {
			class GVAR(beer) {
				magazine = QGVAR(beer);
				count = 1;
			};
		};
	};
};
