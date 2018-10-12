// ASL_Deploy_Ropes_Action_Check   ASL_Deploy_Ropes_Action
#define KEKO_SLINGLOADING_DEPLOY_ACTION class keko_slingloading_deployTowRopes {\
		displayName = "Deploy Cargo Ropes";\
		condition = "keko_advancedtowing_enabled && ([_player, _target] call keko_advancedtowing_fnc_canTakeTowRopes)";\
		statement = "[_player, _target] call keko_advancedtowing_fnc_takeTowRopes";\
		showDisabled = 0;\
		priority = 1;\
		distance = 5;\
		icon = QPATHTOF(ui\rope.paa);\
	};

// ASL_Attach_Ropes_Action_Check   ASL_Attach_Ropes_Action
#define KEKO_SLINGLOADING_ATTACH_ACTION class keko_slingloading_attachToTowRopes {\
		displayName = "Attach To Cargo Ropes";\
		condition = "([_player, _target] call keko_advancedtowing_fnc_canAttachTowRopes)";\
		statement = "[_player, _target] call keko_advancedtowing_fnc_attachTowRopes";\
		showDisabled = 0;\
		priority = 1;\
		distance = 5;\
		icon = QPATHTOF(ui\rope.paa);\
	};

// ASL_Pickup_Ropes_Action_Check     ASL_Pickup_Ropes_Action
#define	KEKO_SLINGLOADING_PICKUP_ACTION class keko_slingloading_pickupTowRopes {\
		displayName = "Pickup Cargo Ropes";\
		condition = "keko_advancedtowing_enabled && ([_player, _target] call keko_advancedtowing_fnc_canPickupTowRopes)";\
		statement = "[_player, _target] call keko_advancedtowing_fnc_pickupTowRopes";\
		showDisabled = 0;\
		priority = 1;\
		distance = 5;\
		icon = QPATHTOF(ui\rope.paa);\
	};

// ASL_Extend_Ropes_Action_Check     ASL_Extend_Ropes_Action
#define	KEKO_SLINGLOADING_EXTEND_ACTION class keko_slingloading_pickupTowRopes {\
		displayName = "Extend Cargo Ropes";\
		condition = "keko_advancedtowing_enabled && ([_player, _target] call keko_advancedtowing_fnc_canPickupTowRopes)";\
		statement = "[_player, _target] call keko_advancedtowing_fnc_pickupTowRopes";\
		showDisabled = 0;\
		priority = 1;\
		distance = 5;\
		icon = QPATHTOF(ui\rope.paa);\
	};

// ASL_Shorten_Ropes_Action_Check     ASL_Shorten_Ropes_Action
#define	KEKO_SLINGLOADING_SHORTEN_ACTION class keko_slingloading_pickupTowRopes {\
		displayName = "Shorten Cargo Ropes";\
		condition = "keko_advancedtowing_enabled && ([_player, _target] call keko_advancedtowing_fnc_canPickupTowRopes)";\
		statement = "[_player, _target] call keko_advancedtowing_fnc_pickupTowRopes";\
		showDisabled = 0;\
		priority = 1;\
		distance = 5;\
		icon = QPATHTOF(ui\rope.paa);\
	};

// ASL_Release_Cargo_Action_Check     ASL_Release_Cargo_Action
#define	KEKO_SLINGLOADING_RELEASE_ACTION class keko_slingloading_pickupTowRopes {\
		displayName = "Release Cargo";\
		condition = "keko_advancedtowing_enabled && ([_player, _target] call keko_advancedtowing_fnc_canPickupTowRopes)";\
		statement = "[_player, _target] call keko_advancedtowing_fnc_pickupTowRopes";\
		showDisabled = 0;\
		priority = 1;\
		distance = 5;\
		icon = QPATHTOF(ui\rope.paa);\
	};

// ASL_Retract_Ropes_Action_Check     ASL_Retract_Ropes_Action
#define	KEKO_SLINGLOADING_RETRACT_ACTION class keko_slingloading_pickupTowRopes {\
		displayName = "Retract Cargo Ropes";\
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
			class keko_slingloading_dropCargoRopes {
				displayName = "Drop Cargo Ropes";
				condition = QUOTE(_player call FUNC(canDropRopes));
				statement = QUOTE(_player call FUNC(dropRopesAction));
				icon = QPATHTOF(ui\rope.paa);
			};
		};
	};

	class LandVehicle;
	class Car: LandVehicle {
		class ACE_Actions {
			class ACE_MainActions {
				KEKO_SLINGLOADING_DEPLOY_ACTION
				KEKO_SLINGLOADING_ATTACH_ACTION
				KEKO_SLINGLOADING_PICKUP_ACTION
				KEKO_SLINGLOADING_EXTEND_ACTION
				KEKO_SLINGLOADING_SHORTEN_ACTION
				KEKO_SLINGLOADING_RELEASE_ACTION
				KEKO_SLINGLOADING_RETRACT_ACTION
			};
		};
	};
};
