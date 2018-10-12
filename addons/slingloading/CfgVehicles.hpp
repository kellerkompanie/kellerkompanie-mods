#define KEKO_SLINGLOADING_DEPLOY_ACTION class GVAR(DeployAction) {\
		displayName = "Deploy Cargo Ropes";\
		condition = QUOTE([ARR_2(_player,_target)] call FUNC(canDeployRopes));\
		statement = QUOTE([ARR_2(_player,_target)] call FUNC(deployRopesAction));\
		showDisabled = 0;\
		icon = QPATHTOF(ui\rope.paa);\
	};

#define KEKO_SLINGLOADING_ATTACH_ACTION class GVAR(AttachAction) {\
		displayName = "Attach To Cargo Ropes";\
		condition = QUOTE([ARR_2(_player, _target)] call keko_slingloading_fnc_canAttachRopes);\
		statement = QUOTE([ARR_2(_player, _target)] call keko_slingloading_fnc_attachRopesAction);\
		showDisabled = 0;\
		icon = QPATHTOF(ui\rope.paa);\
	};

#define	KEKO_SLINGLOADING_PICKUP_ACTION class GVAR(PickupAction) {\
		displayName = "Pickup Cargo Ropes";\
		condition = QUOTE(_player call keko_slingloading_fnc_canPickupRopes);\
		statement = QUOTE([ARR_2(_player, _target)] call keko_slingloading_fnc_pickupRopesAction);\
		showDisabled = 0;\
		icon = QPATHTOF(ui\rope.paa);\
	};

#define	KEKO_SLINGLOADING_EXTEND_ACTION class GVAR(ExtendAction) {\
		displayName = "Extend Cargo Ropes";\
		condition = QUOTE(_target call keko_slingloading_fnc_canExtendRopes);\
		statement = QUOTE([ARR_2(_player, _target)] call keko_slingloading_fnc_extendRopesAction);\
		showDisabled = 0;\
		icon = QPATHTOF(ui\rope.paa);\
	};

#define	KEKO_SLINGLOADING_SHORTEN_ACTION class GVAR(ShortenAction) {\
		displayName = "Shorten Cargo Ropes";\
		condition = QUOTE(_target call FUNC(canShortenRopes));\
		statement = QUOTE([ARR_2(_player,_target)] call FUNC(shortenRopesAction));\
		showDisabled = 0;\
		icon = QPATHTOF(ui\rope.paa);\
	};

#define	KEKO_SLINGLOADING_RELEASE_ACTION class GVAR(ReleaseAction) {\
		displayName = "Release Cargo";\
		condition = QUOTE(_target call keko_slingloading_fnc_canReleaseCargo);\
		statement = QUOTE([ARR_2(_player, _target)] call keko_slingloading_fnc_releaseCargoAction);\
		showDisabled = 0;\
		icon = QPATHTOF(ui\rope.paa);\
	};

#define	KEKO_SLINGLOADING_RETRACT_ACTION class GVAR(RetractAction) {\
		displayName = "Retract Cargo Ropes";\
		condition = QUOTE(_target call keko_slingloading_fnc_canRetractRopes);\
		statement = QUOTE([ARR_2(_player, _target)] call keko_slingloading_fnc_retractRopesAction);\
		showDisabled = 0;\
		icon = QPATHTOF(ui\rope.paa);\
	};


class CfgVehicles {

	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class GVAR(DropAction) {
				displayName = "Drop Cargo Ropes";
				condition = QUOTE(_player call FUNC(canDropRopes));
				statement = QUOTE(_player call FUNC(dropRopesAction));
				icon = QPATHTOF(ui\rope.paa);
			};
		};
	};

	class Air;
	class Helicopter: Air {
		class ACE_SelfActions {
			KEKO_SLINGLOADING_DEPLOY_ACTION
			KEKO_SLINGLOADING_EXTEND_ACTION
			KEKO_SLINGLOADING_SHORTEN_ACTION
			KEKO_SLINGLOADING_RELEASE_ACTION
			KEKO_SLINGLOADING_RETRACT_ACTION
		};
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
	class Plane: Air {
		class ACE_SelfActions {
			KEKO_SLINGLOADING_DEPLOY_ACTION
			KEKO_SLINGLOADING_EXTEND_ACTION
			KEKO_SLINGLOADING_SHORTEN_ACTION
			KEKO_SLINGLOADING_RELEASE_ACTION
			KEKO_SLINGLOADING_RETRACT_ACTION
		};
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
