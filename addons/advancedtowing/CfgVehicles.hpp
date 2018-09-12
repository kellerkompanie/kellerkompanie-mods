#define KEKO_ADVANCEDTOWING_DEPLOY_ACTION class keko_advancedtowing_deployTowRopes {\
		displayName = "Deploy Tow Ropes";\
		condition = "keko_advancedtowing_enabled && ([_player, _target] call keko_advancedtowing_fnc_canTakeTowRopes)";\
		statement = "[_player, _target] call keko_advancedtowing_fnc_takeTowRopes";\
		showDisabled = 0;\
		priority = 1;\
		distance = 5;\
		icon = QPATHTOF(ui\rope.paa);\
	};

#define KEKO_ADVANCEDTOWING_PUTAWAY_ACTION class keko_advancedtowing_putAwayTowRopes {\
		displayName = "Put Away Tow Ropes";\
		condition = "keko_advancedtowing_enabled && ([_player, _target] call keko_advancedtowing_fnc_canPutAwayTowRopes)";\
		statement = "[_player, _target] call keko_advancedtowing_fnc_putAwayTowRopes";\
		showDisabled = 0;\
		priority = 1;\
		distance = 5;\
		icon = QPATHTOF(ui\rope.paa);\
	};

#define KEKO_ADVANCEDTOWING_ATTACH_ACTION class keko_advancedtowing_attachToTowRopes {\
		displayName = "Attach To Tow Ropes";\
		condition = "keko_advancedtowing_enabled && ([_player, _target] call keko_advancedtowing_fnc_canAttachTowRopes)";\
		statement = "[_player, _target] call keko_advancedtowing_fnc_attachTowRopes";\
		showDisabled = 0;\
		priority = 1;\
		distance = 5;\
		icon = QPATHTOF(ui\rope.paa);\
	};

#define	KEKO_ADVANCEDTOWING_PICKUP_ACTION class keko_advancedtowing_pickupTowRopes {\
		displayName = "Pickup Tow Ropes";\
		condition = "keko_advancedtowing_enabled && ([_player, _target] call keko_advancedtowing_fnc_canPickupTowRopes)";\
		statement = "[_player, _target] call keko_advancedtowing_fnc_pickupTowRopes";\
		showDisabled = 0;\
		priority = 1;\
		distance = 5;\
		icon = QPATHTOF(ui\rope.paa);\
	};

class CfgVehicles {

	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class keko_advancedtowing_dropTowRopes {
				displayName = "Drop Tow Ropes";
				condition = "keko_advancedtowing_enabled && (_player call keko_advancedtowing_fnc_canDropTowRopes)";
				statement = "[_player, _player getVariable ['keko_advancedtowing_towRopesVehicle', objNull]] call keko_advancedtowing_fnc_dropTowRopes";
				icon = QPATHTOF(ui\rope.paa);
			};
		};
	};

	class LandVehicle;
	class Car: LandVehicle {
		class ACE_Actions {
			class ACE_MainActions {
				KEKO_ADVANCEDTOWING_DEPLOY_ACTION
				KEKO_ADVANCEDTOWING_PUTAWAY_ACTION
				KEKO_ADVANCEDTOWING_ATTACH_ACTION
				KEKO_ADVANCEDTOWING_PICKUP_ACTION
			};
		};
	};

	class Tank: LandVehicle {
		class ACE_Actions {
			class ACE_MainActions {
				KEKO_ADVANCEDTOWING_DEPLOY_ACTION
				KEKO_ADVANCEDTOWING_PUTAWAY_ACTION
				KEKO_ADVANCEDTOWING_ATTACH_ACTION
				KEKO_ADVANCEDTOWING_PICKUP_ACTION
			};
		};
	};

	class Ship;
	class Ship_F : Ship {
		class ACE_Actions {
			class ACE_MainActions {
				KEKO_ADVANCEDTOWING_DEPLOY_ACTION
				KEKO_ADVANCEDTOWING_PUTAWAY_ACTION
				KEKO_ADVANCEDTOWING_ATTACH_ACTION
				KEKO_ADVANCEDTOWING_PICKUP_ACTION
			};
		};
	};
};
