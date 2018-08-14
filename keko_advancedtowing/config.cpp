// original version by Duda https://github.com/sethduda/AdvancedTowing

class CfgPatches
{
	class keko_advancedtowing
	{
		name = "Kellerkompanie Advanced Towing";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.80;
		requiredAddons[] = {
			"cba_main",
      "cba_settings",
      "cba_xeh",
			"A3_Modules_F",
			"ace_interaction",
			"ace_common",
			"ace_refuel"};
		author = "Schwaggot";
		authorUrl = "http://www.kellerkompanie.com";
		version = 1.0;
	};
};

class CfgFunctions
{
	class keko_advancedtowing
	{
		class advancedtowing
		{
			file = "keko_advancedtowing\functions";
			class canAttachTowRopes{};
			class canDropTowRopes{};
			class canPickupTowRopes{};
			class canPutAwayTowRopes{};
			class canTakeTowRopes{};

			class attachTowRopes{};
			class dropTowRopes{};
			class pickupTowRopes{};
			class putAwayTowRopes{};
			class takeTowRopes{};

			class getCornerPoints{};
			class getHitchPoints{};
			class simulateTowingSpeed{};
			class simulateTowing{};
			class isSupportedCargo{};
			class isSupportedVehicle{};
			class hideObjectGlobal{};

			class isAllowedToTow{};
		};
	};
};

#define KEKO_ADVANCEDTOWING_DEPLOY_ACTION class keko_advancedtowing_deployTowRopes {\
		displayName = "Deploy Tow Ropes";\
		condition = "(keko_settings_advancedtowing_enabled == 1) && ([_player, _target] call keko_advancedtowing_fnc_canTakeTowRopes)";\
		statement = "[_player, _target] call keko_advancedtowing_fnc_takeTowRopes";\
		showDisabled = 0;\
		priority = 1;\
		distance = 5;\
		icon = "\keko_advancedtowing\ui\rope.paa";\
	};

#define KEKO_ADVANCEDTOWING_PUTAWAY_ACTION class keko_advancedtowing_putAwayTowRopes {\
		displayName = "Put Away Tow Ropes";\
		condition = "(keko_settings_advancedtowing_enabled == 1) && ([_player, _target] call keko_advancedtowing_fnc_canPutAwayTowRopes)";\
		statement = "[_player, _target] call keko_advancedtowing_fnc_putAwayTowRopes";\
		showDisabled = 0;\
		priority = 1;\
		distance = 5;\
		icon = "\keko_advancedtowing\ui\rope.paa";\
	};

#define KEKO_ADVANCEDTOWING_ATTACH_ACTION class keko_advancedtowing_attachToTowRopes {\
		displayName = "Attach To Tow Ropes";\
		condition = "(keko_settings_advancedtowing_enabled == 1) && ([_player, _target] call keko_advancedtowing_fnc_canAttachTowRopes)";\
		statement = "[_player, _target] call keko_advancedtowing_fnc_attachTowRopes";\
		showDisabled = 0;\
		priority = 1;\
		distance = 5;\
		icon = "\keko_advancedtowing\ui\rope.paa";\
	};

#define	KEKO_ADVANCEDTOWING_PICKUP_ACTION class keko_advancedtowing_pickupTowRopes {\
		displayName = "Pickup Tow Ropes";\
		condition = "(keko_settings_advancedtowing_enabled == 1) && ([_player, _target] call keko_advancedtowing_fnc_canPickupTowRopes)";\
		statement = "[_player, _target] call keko_advancedtowing_fnc_pickupTowRopes";\
		showDisabled = 0;\
		priority = 1;\
		distance = 5;\
		icon = "\keko_advancedtowing\ui\rope.paa";\
	};

class CfgVehicles {

	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class keko_advancedtowing_dropTowRopes {
				displayName = "Drop Tow Ropes";
				condition = "(keko_settings_advancedtowing_enabled == 1) && (_player call keko_advancedtowing_fnc_canDropTowRopes)";
				statement = "[_player, _player getVariable ['keko_advancedtowing_towRopesVehicle', objNull]] call keko_advancedtowing_fnc_dropTowRopes";
				icon = "\keko_advancedtowing\ui\rope.paa";
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

class Extended_PreInit_EventHandlers {
    keko_advancedtowing_settings_xeh = call compile preprocessFileLineNumbers "\keko_advancedtowing\XEH_preInit.sqf";
};
