class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class GVAR(actions) {
                displayName = CSTRING(displayName);
                condition = "";
                exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
                statement = "";
                showDisabled = 1;
                priority = 2.1;
                icon = QPATHTOF(ui\icon_canteen_action.paa);

                class GVAR(drink) {
                    displayName = CSTRING(actionDrink);
                    condition = QUOTE(ACE_player call FUNC(hasCanteen));
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
            };
        };
        class ACE_Actions {
            class ACE_Head {
                class GVAR(pour) {
                    displayName = CSTRING(actionPour);
                    distance = 2.0;
                    condition = QUOTE(ACE_player call FUNC(hasCanteen) && alive _target);
                    statement = QUOTE([ARR_2(ACE_player, _target)] call FUNC(pourWater));
                    exceptions[] = {};
                    showDisabled = 1;
                    priority = 1;
                    icon = QPATHTOF(ui\icon_canteen_action.paa);
                };
            };
        };
    };

    class WeaponHolder_Single_limited_item_F;
    class GVAR(canteenItem): WeaponHolder_Single_limited_item_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(displayName);
        author = "Schwaggot";
        vehicleClass = "Magazines";
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Canteen_F.jpg";
        class TransportMagazines {
            class GVAR(canteen) {
                magazine = QGVAR(canteen);
                count = 1;
            };
        };
    };
};
