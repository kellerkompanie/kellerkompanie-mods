#define KEKO_TOWING_DEPLOY_ACTION class keko_towing_deployTowRopes {\
        displayName = "Deploy Tow Ropes";\
        condition = "keko_towing_enabled && ([_player, _target] call keko_towing_fnc_canTakeTowRopes)";\
        statement = "[_player, _target] call keko_towing_fnc_takeTowRopes";\
        showDisabled = 0;\
        priority = 1;\
        distance = 5;\
        icon = QPATHTOF(ui\icon_rope.paa);\
    };

#define KEKO_TOWING_PUTAWAY_ACTION class keko_towing_putAwayTowRopes {\
        displayName = "Put Away Tow Ropes";\
        condition = "keko_towing_enabled && ([_player, _target] call keko_towing_fnc_canPutAwayTowRopes)";\
        statement = "[_player, _target] call keko_towing_fnc_putAwayTowRopes";\
        showDisabled = 0;\
        priority = 1;\
        distance = 5;\
        icon = QPATHTOF(ui\icon_rope.paa);\
    };

#define KEKO_TOWING_ATTACH_ACTION class keko_towing_attachToTowRopes {\
        displayName = "Attach To Tow Ropes";\
        condition = "keko_towing_enabled && ([_player, _target] call keko_towing_fnc_canAttachTowRopes)";\
        statement = "[_player, _target] call keko_towing_fnc_attachTowRopes";\
        showDisabled = 0;\
        priority = 1;\
        distance = 5;\
        icon = QPATHTOF(ui\icon_rope.paa);\
    };

#define    KEKO_TOWING_PICKUP_ACTION class keko_towing_pickupTowRopes {\
        displayName = "Pickup Tow Ropes";\
        condition = "keko_towing_enabled && ([_player, _target] call keko_towing_fnc_canPickupTowRopes)";\
        statement = "[_player, _target] call keko_towing_fnc_pickupTowRopes";\
        showDisabled = 0;\
        priority = 1;\
        distance = 5;\
        icon = QPATHTOF(ui\icon_rope.paa);\
    };

class CfgVehicles {

    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class keko_towing_dropTowRopes {
                displayName = "Drop Tow Ropes";
                condition = "keko_towing_enabled && (_player call keko_towing_fnc_canDropTowRopes)";
                statement = "[_player, _player getVariable ['keko_towing_towRopesVehicle', objNull]] call keko_towing_fnc_dropTowRopes";
                icon = QPATHTOF(ui\icon_rope.paa);
            };
        };
    };

    class LandVehicle;
    class Car: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions {
                KEKO_TOWING_DEPLOY_ACTION
                KEKO_TOWING_PUTAWAY_ACTION
                KEKO_TOWING_ATTACH_ACTION
                KEKO_TOWING_PICKUP_ACTION
            };
        };
    };

    class Tank: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions {
                KEKO_TOWING_DEPLOY_ACTION
                KEKO_TOWING_PUTAWAY_ACTION
                KEKO_TOWING_ATTACH_ACTION
                KEKO_TOWING_PICKUP_ACTION
            };
        };
    };

    class Ship;
    class Ship_F : Ship {
        class ACE_Actions {
            class ACE_MainActions {
                KEKO_TOWING_DEPLOY_ACTION
                KEKO_TOWING_PUTAWAY_ACTION
                KEKO_TOWING_ATTACH_ACTION
                KEKO_TOWING_PICKUP_ACTION
            };
        };
    };
};
