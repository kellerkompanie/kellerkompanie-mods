/* vehicles:
	Offroad/Pickup - C_Offroad_01_F
	Tactical Pickup - I_C_Offroad_02_LMG_F,LOP_AFR_OPF_Offroad_M2
	Offroad AT - I_C_Offroad_02_AT_F,O_G_Offroad_01_AT_F
	Jeep - C_Offroad_02_unarmed_F
	Truck (Cargo) - C_Van_01_transport_F
	Quadbike - I_blackorder_veh_Quadbike_F
	Van (Cargo) - C_Van_02_vehicle_F
	Van (Transport) - C_Van_02_transport_F
	Humvee - LOP_ISTS_M998_D_4DR
	SUV - C_SUV_01_F
	Zamak/Kamaz - LOP_UKR_KAMAZ_Covered
	Yamaha - PO_AFR_RDS_tt650_Civ_01

	MD500 - C_Heli_Light_01_civil_F
	Orca - MU_CIV_Orca

	RHIB - I_C_Boat_Transport_02_F
	Jetski - C_Scooter_Transport_01_F
	Speedboat - C_Boat_Civil_01_F
	Boat - C_Rubberboat

	Cessna - C_Plane_Civil_01_F
	Antonov - RHS_AN2

	Static HMG high - RHS_M2StaticMG_USMC_WD
	Static HMG low - RHS_M2StaticMG_MiniTripod_USMC_WD
	Mortar - RHS_M252_USMC_WD

	ZU - RHS_zu23_MSV
*/




class CfgVehicles {

	class Logic;
	class Module_F: Logic {
		class EventHandlers;
		class ModuleDescription;

		class AttributesBase {
			class Default;
			class Edit;
			class Combo;
			class Checkbox;
			class CheckboxNumber;
			class ModuleDescription;
			class Units;

			expression = "_this setVariable ['%s',_value];";
		};
	};

	class GVAR(modulePOI3den): Module_F	{
		scope              = 2;
		scopeCurator       = 1;
		displayName        = "POI";
		category           = QGVAR(redneck);
		function           = QFUNC(modulePOI3den);
		functionPriority   = 1;
		isGlobal           = 1;
		isTriggerActivated = 1;
		isDisposable       = 0;

		class Attributes: AttributesBase {
			class poi_name: Edit {
				property = "poi_name";
				displayName = "Name";
				typeName = "STRING";
				defaultValue = "'Unnamed'";
			};
			class poi_type: Combo {
				property = "poi_type";
				displayName="Type";
				typeName = "NUMBER";
				defaultValue = 0;
				class Values {
					class atm			{name = "ATM"; 				value = 0; };
					class item_shop		{name = "Item Shop";		value = 1; };
					class gear_shop		{name = "Gear Shop";		value = 2; };
					class vehicle_shop	{name = "Vehicle Shop";		value = 3; };
					class garage		{name = "Garage";			value = 4; };
					class parking		{name = "Parking";			value = 5; };
					class cardealer		{name = "Car Dealer";		value = 6; };
					class trader		{name = "Trader";			value = 7; };
					class pharmacy		{name = "Pharmacy";			value = 8; };
					class hangar		{name = "Hangar";			value = 9; };
					class weapon_shop	{name = "Weapon Shop";		value = 10;};
					class mechanic		{name = "Mechanic";			value = 11;};
					class doctor		{name = "Doctor";			value = 12;};
					class fuel_shop		{name = "Fuel Shop";		value = 13;};
					class heli_shop		{name = "Heli Shop";		value = 14;};
					class plane_shop	{name = "Plane Shop";		value = 15;};
					class helipad		{name = "Helipad";			value = 16;};
					class airdealer 	{name = "Aircraft Dealer";	value = 17;};
					class builder		{name = "Builder";			value = 18;};
				};
			};
			class poi_shop: Edit {
				property = "poi_shop";
				displayName = "Shop";
				typeName = "STRING";
				defaultValue = "''";
			};
		};
	};

	class GVAR(moduleLocation3den): Module_F	{
		scope              = 2;
		scopeCurator       = 1;
		displayName        = "Location";
		category           = QGVAR(redneck);
		function           = QFUNC(moduleLocation3den);
		functionPriority   = 1;
		isGlobal           = 1;
		isTriggerActivated = 1;
		isDisposable       = 0;
		icon = QPATHTOF(ui\icon_flag.paa);

		class Attributes: AttributesBase {
			class loc_name: Edit {
				property = "loc_name";
				displayName = "Name";
				typeName = "STRING";
				defaultValue = "'Unnamed Location'";
			};
			class loc_type: Combo {
				property = "loc_type";
				displayName="Type";
				typeName = "NUMBER";
				defaultValue = 0;
				class Values {
					class flag 			{name = "Flag"; 				value = 0; };
					class checkpoint 	{name = "Checkpoint"; 			value = 1; };
					class hotel 		{name = "Hotel"; 				value = 2; };
					class prison 		{name = "Prison"; 				value = 3; };
					class research 		{name = "Research Facility"; 	value = 4; };
					class industry 		{name = "Industrial Complex"; 	value = 5; };
					class farm 			{name = "Farm"; 				value = 6; };
					class radiotower 	{name = "Radio Tower"; 			value = 7; };
					class powerplant 	{name = "Power Plant"; 			value = 8; };
					class fuelstation 	{name = "Fuel Station"; 		value = 9; };
					class outpost 		{name = "Outpost"; 				value = 10;};
					class hq 			{name = "HQ"; 					value = 11;};
					class airport 		{name = "Airport"; 				value = 12;};
				};
			};
			class loc_radius: Edit {
				property = "loc_radius";
				displayName = "Radius";
				typeName = "STRING";
				defaultValue = "'100'";
			};
			class loc_side: Combo {
				property = "loc_side";
				displayName="Initial Side";
				typeName = "NUMBER";
				defaultValue = 0;
				class Values {
					class enemyside		{name = "Enemy"; 	value = 0; };
					class playerside 	{name = "Player"; 	value = 1; };
				};
			};
		};
	};
	class GVAR(moduleSpawnPoint3den): Module_F	{
		scope              = 2;
		scopeCurator       = 1;
		displayName        = "Spawn Point";
		category           = QGVAR(redneck);
		function           = QFUNC(moduleSpawnPoint3den);
		functionPriority   = 1;
		isGlobal           = 1;
		isTriggerActivated = 1;
		isDisposable       = 0;
		icon = QPATHTOF(ui\icon_destination.paa);
	};
	class GVAR(moduleStorePoint3den): Module_F	{
		scope              = 2;
		scopeCurator       = 1;
		displayName        = "Store Point";
		category           = QGVAR(redneck);
		function           = QFUNC(moduleStorePoint3den);
		functionPriority   = 1;
		isGlobal           = 1;
		isTriggerActivated = 1;
		isDisposable       = 0;
		icon = QPATHTOF(ui\icon_save.paa);
	};
	class GVAR(moduleShippingPath3den): Module_F	{
		scope              = 2;
		scopeCurator       = 1;
		displayName        = "Shipping Path";
		category           = QGVAR(redneck);
		function           = QFUNC(moduleShippingPath3den);
		functionPriority   = 1;
		isGlobal           = 1;
		isTriggerActivated = 1;
		isDisposable       = 0;
		icon = QPATHTOF(ui\shipping.paa);

		class Attributes: AttributesBase {
			class shippingDirection: Combo {
				property = "shippingDirection";
				displayName="Type";
				typeName = "NUMBER";
				defaultValue = 0;
				class Values {
					class sw 	{name = "SW"; 	value = 0; };
					class nw 	{name = "NW";	value = 1; };
					class ne 	{name = "NE"; 	value = 2; };
					class se 	{name = "SE"; 	value = 3; };
				};
			};
		};
	};



	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class GVAR(actions) {
                displayName = "Books";
                condition = "";
                exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
                statement = "";
                showDisabled = 1;
                priority = 2.1;

				class GVAR(readMedic1) {
					displayName = "Read Medic 101";
					condition = QUOTE([ARR_2(_player,'medic1')] call FUNC(readCondition));
					exceptions[] = {};
					statement = QUOTE([ARR_2(_player,'medic1')] call FUNC(readAction));
				};
				class GVAR(readMedic2) {
					displayName = "Read Medic Encyclopedia";
					condition = QUOTE([ARR_2(_player,'medic2')] call FUNC(readCondition));
					exceptions[] = {};
					statement = QUOTE([ARR_2(_player,'medic2')] call FUNC(readAction));
				};
				class GVAR(readMechanic1) {
					displayName = "Read Mechanic 101";
					condition = QUOTE([ARR_2(_player,'mechanic1')] call FUNC(readCondition));
					exceptions[] = {};
					statement = QUOTE([ARR_2(_player,'mechanic1')] call FUNC(readAction));
				};
				class GVAR(readMechanic2) {
					displayName = "Read Mechanic Encyclopedia";
					condition = QUOTE([ARR_2(_player,'mechanic2')] call FUNC(readCondition));
					exceptions[] = {};
					statement = QUOTE([ARR_2(_player,'mechanic2')] call FUNC(readAction));
				};
			};
		};
	};

	class FlagCarrierCore;
	class FlagCarrier: FlagCarrierCore {
		class ACE_Actions {
		   	class ACE_MainActions {
				displayName = "Flag";
				selection = "";
				distance = 3;
				condition = "true";
				position = "[-0.05,-0.35,-2.6]";
		   	};
		};
	};

	class GVAR(flag): FlagCarrier {
		scope = 2;
		scopeCurator = 2;
		displayName = "Flag (Redneck)";

		class EventHandlers {
			init = QUOTE((_this select 0) setFlagTexture 'PATHTOF(ui\redneck_flag.paa)');
		};
	};

	class Banner_01_base_F;
	class GVAR(banner): Banner_01_base_F {
		scope = 2;
		scopeCurator = 2;
		displayName = "Banner (Redneck)";
		hiddenSelectionsTextures[] = {QPATHTOF(ui\redneck_flag.paa)};
	};




	class Civilian_F;
	class C_man_1: Civilian_F
	{
		class EventHandlers;
	};

	class GVAR(civilian_base): C_man_1 {
		author = "Schwaggot";
		scope = 0;
		curatorScope = 1;
		side = 3;
		faction = QGVAR(civilian);
		genericNames="TanoanMen";
		identityTypes[] = {"Head_Euro"};
		modelSides[] = {6};
		nakedUniform = "U_BasicBody";
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearList[] = {};
	};

	class GVAR(civilian_pharmacist): GVAR(civilian_base) {
	    displayName = "Pharmacist";
		scope = 2;
	    curatorScope = 2;
	    uniformClass = "U_C_Paramedic_01_F";
	    backpack = "B_Messenger_Gray_Medical_F";
	    weapons[] = {"Throw","Put"};
	    magazines[] = {};
	    items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
	    linkedItems[] = {"","","G_Respirator_white_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","","","","","","","",""};
	};
	class GVAR(civilian_hangar): GVAR(civilian_base) {
	    displayName = "Hangar";
		scope = 2;
	    curatorScope = 2;
	    uniformClass = "TRYK_OVERALL_SAGE_BLKboots_nk_blk";
	    backpack = "";
	    weapons[] = {"Throw","Put"};
	    magazines[] = {};
	    items[] = {};
	    linkedItems[] = {"","rhs_tsh4","","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","","","","","","","",""};
	};
	class GVAR(civilian_parking): GVAR(civilian_base) {
	    displayName = "Parking";
		scope = 2;
	    curatorScope = 2;
	    uniformClass = "U_C_Man_casual_2_F";
	    backpack = "";
	    weapons[] = {"Throw","Put"};
	    magazines[] = {};
	    items[] = {};
	    linkedItems[] = {"","H_Cap_blu","","ItemMap","ItemCompass","ItemWatch","","","","","","","",""};
	};
	class GVAR(civilian_garage): GVAR(civilian_base) {
	    displayName = "Garage";
		scope = 2;
	    curatorScope = 2;
	    uniformClass = "U_Marshal";
	    backpack = "";
	    weapons[] = {"Throw","Put"};
	    magazines[] = {};
	    items[] = {};
	    linkedItems[] = {"","","G_WirelessEarpiece_F","ItemMap","ItemCompass","ItemWatch","","","","","","","",""};
	};
	class GVAR(civilian_vehicle_shop): GVAR(civilian_base) {
	    displayName = "Vehicle Shop";
		scope = 2;
	    curatorScope = 2;
	    uniformClass = "TRYK_SUITS_BLK_F";
	    backpack = "";
	    weapons[] = {"Throw","Put"};
	    magazines[] = {};
	    items[] = {};
	    linkedItems[] = {"","","G_WirelessEarpiece_F","ItemMap","ItemCompass","ItemWatch","","","","","","","",""};
	};
	class GVAR(civilian_cardealer): GVAR(civilian_base) {
	    displayName = "Car Dealer";
		scope = 2;
	    curatorScope = 2;
	    uniformClass = "U_MU_PoloshirtPants2";
	    backpack = "";
	    weapons[] = {"Throw","Put"};
	    magazines[] = {};
	    items[] = {};
	    linkedItems[] = {"","H_StrawHat","G_Aviator","ItemMap","ItemCompass","ItemWatch","","","","","","","",""};
	};
	class GVAR(civilian_trader): GVAR(civilian_base) {
	    displayName = "Trader";
		scope = 2;
	    curatorScope = 2;
	    uniformClass = "TRYK_U_denim_jersey_blk";
	    backpack = "";
	    weapons[] = {"Throw","Put"};
	    magazines[] = {};
	    items[] = {};
	    linkedItems[] = {"","","immersion_cigs_cigar3","ItemMap","ItemCompass","ItemWatch","TRYK_G_Shades_Black_NV","","","","","","","",""};
	};
	class GVAR(civilian_weapon_shop): GVAR(civilian_base) {
	    displayName = "Weapon Shop";
		scope = 2;
	    curatorScope = 2;
	    uniformClass = "VSM_G2_sweater_camo_PZW";
	    backpack = "";
	    weapons[] = {"Throw","Put"};
	    magazines[] = {};
	    items[] = {};
	    linkedItems[] = {"lbt_light_coy","TRYK_H_Bandana_wig_g","murshun_cigs_cig2","ItemMap","ItemCompass","ItemWatch","","","","","","","",""};
	};
	class GVAR(civilian_item_shop): GVAR(civilian_base) {
	    displayName = "Item Shop";
		scope = 2;
	    curatorScope = 2;
	    uniformClass = "U_C_HunterBody_grn";
	    backpack = "";
	    weapons[] = {"Throw","Put"};
	    magazines[] = {};
	    items[] = {};
	    linkedItems[] = {"","H_Booniehat_grn","","ItemMap","ItemCompass","ItemWatch","","","","","","","",""};
	};
	class GVAR(civilian_doctor): GVAR(civilian_base) {
	    displayName = "Doctor";
		scope = 2;
	    curatorScope = 2;
	    uniformClass = "LOP_U_CHR_Doctor_01";
	    backpack = "";
	    weapons[] = {"Throw","Put"};
	    magazines[] = {};
	    items[] = {};
	    linkedItems[] = {"","","","ItemMap","ItemCompass","ItemWatch","","","","","","","",""};
	};
	class GVAR(civilian_mechanic): GVAR(civilian_base) {
	    displayName = "Mechanic";
		scope = 2;
	    curatorScope = 2;
	    uniformClass = "U_C_Mechanic_01_F";
	    backpack = "B_LegStrapBag_black_F";
	    weapons[] = {"Throw","Put"};
	    magazines[] = {};
	    items[] = {};
	    linkedItems[] = {"V_Rangemaster_belt","H_Construction_earprot_yellow_F","G_EyeProtectors_F","ItemMap","ItemCompass","ItemWatch","","","","","","","",""};
	};
	class GVAR(civilian_gear_shop): GVAR(civilian_base) {
	    displayName = "Gear Shop";
		scope = 2;
	    curatorScope = 2;
	    uniformClass = "U_BG_Guerrilla_6_1";
	    backpack = "";
	    weapons[] = {"Throw","Put"};
	    magazines[] = {};
	    items[] = {};
	    linkedItems[] = {"V_PlateCarrier1_rgr","rhssaf_booniehat_md2camo","rhs_googles_black","ItemMap","ItemCompass","ItemWatch","","","","","","","",""};
	};
	class GVAR(civilian_fuel_shop): GVAR(civilian_base)	{
	    displayName = "Fuel Shop";
		scope = 2;
	    curatorScope = 2;
	    uniformClass = "U_C_ConstructionCoverall_Red_F";
	    backpack = "";
	    weapons[] = {"Throw","Put"};
	    magazines[] = {};
	    items[] = {};
	    linkedItems[] = {"","H_Cap_red","ItemMap","ItemCompass","ItemWatch","","","","","","","",""};
	};
	class GVAR(civilian_atm): GVAR(civilian_base)	{
	    displayName = "ATM";
		scope = 2;
	    curatorScope = 2;
	    uniformClass = "TRYK_SUITS_BR_F";
	    backpack = "";
	    weapons[] = {"Throw","Put"};
	    magazines[] = {};
	    items[] = {};
	    linkedItems[] = {"","","G_Squares","ItemMap","ItemCompass","ItemWatch","","","","","","","",""};
	};
	class GVAR(civilian_helipilot): GVAR(civilian_base) {
	    displayName = "Helicopter Pilot";
		scope = 2;
	    curatorScope = 2;
	    uniformClass = "U_MU_PoloshirtPants1";
	    backpack = "";
	    weapons[] = {"Throw","Put"};
	    magazines[] = {};
	    items[] = {};
	    linkedItems[] = {"","H_Cap_headphones","","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","","","","","","","",""};
	};
	class GVAR(civilian_pilot): GVAR(civilian_base) {
	    displayName = "Pilot";
		scope = 2;
	    curatorScope = 2;
	    uniformClass = "U_B_HeliPilotCoveralls";
	    backpack = "";
	    weapons[] = {"Throw","Put"};
	    magazines[] = {};
	    items[] = {};
	    linkedItems[] = {"","rhs_gssh18","G_Aviator","ItemMap","ItemCompass","ItemWatch","","","","","","","",""};
	};
	class GVAR(civilian_builder): GVAR(civilian_base) {
	    displayName = "Builder";
		scope = 2;
	    curatorScope = 2;
	    uniformClass = "U_C_ConstructionCoverall_Black_F";
	    backpack = "";
	    weapons[] = {"Throw","Put"};
	    magazines[] = {};
	    items[] = {"FirstAidKit"};
	    linkedItems[] = {"","H_Construction_earprot_yellow_F","G_EyeProtectors_Earpiece_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","","","","","","","",""};
	};



	//units
	class SoldierWB;
	class B_Soldier_base_F : SoldierWB {
	class EventHandlers;
	modelsides[] = {3,2,1,0};
	};

	class GVAR(blufor_soldier_base) : B_Soldier_base_F {
	    author = "Schwaggot";
	    scope = 1;
	    curatorScope = 1;
	    side = 1;
	    faction = QGVAR(blufor);
	    vehicleClass = "Men";
	    model = "\a3\characters_f\blufor\b_soldier_01.p3d";
	    modelSides[]={3,2,1,0};
	    hiddenSelections[] = {"Camo", "insignia"};
	    hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"};
	    identityTypes[] = {"Head_Euro"};
	    faceType = "Man_A3";
	    genericNames="TanoanMen";
	    nakedUniform = "U_BasicBody";
	    displayName = "Soldier";
	    weapons[] = {"Throw","Put"};
	    respawnWeapons[] = {"Throw","Put"};
	    Items[] = {};
	    RespawnItems[] = {};
	    magazines[] = {};
	    respawnMagazines[] = {};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
	    respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
	    uniformClass = "U_MU_B_soldier_sage_tshirt";

	    class EventHandlers: EventHandlers {
	         init = "if (local (_this select 0)) then { _unit = (_this select 0); _uniform = selectRandom ['TRYK_shirts_DENIM_BK','TRYK_shirts_DENIM_BL','TRYK_shirts_DENIM_BWH','TRYK_shirts_DENIM_od','TRYK_shirts_DENIM_R','TRYK_shirts_DENIM_RED2','TRYK_shirts_DENIM_WH','TRYK_shirts_DENIM_WHB','TRYK_shirts_DENIM_ylb','TRYK_shirts_DENIM_od_Sleeve','TRYK_shirts_DENIM_ylb_Sleeve','TRYK_shirts_DENIM_BK_Sleeve','TRYK_shirts_DENIM_BL_Sleeve','TRYK_shirts_DENIM_BWH_Sleeve','TRYK_shirts_DENIM_R_Sleeve','TRYK_shirts_DENIM_RED2_Sleeve','TRYK_shirts_DENIM_WH_Sleeve','TRYK_shirts_DENIM_WHB_Sleeve']; _unit forceAddUniform _uniform; _headgear = selectRandom ['H_Bandanna_gry','H_Bandanna_blu','H_Bandanna_cbr','H_Bandanna_khk','H_Bandanna_sgg','H_Bandanna_sand','H_Cap_blk','H_Cap_blu','H_Cap_grn','H_Cap_oli','H_Cap_red','H_Cap_tan','rhssaf_bandana_smb','TRYK_H_headsetcap_blk_Glasses','TRYK_H_headsetcap_od_Glasses','TRYK_R_CAP_BLK','TRYK_R_CAP_TAN','TRYK_R_CAP_OD_US','TRYK_r_cap_blk_Glasses','TRYK_r_cap_od_Glasses','TRYK_r_cap_tan_Glasses','VSM_BackwardsHat_Peltor_black','VSM_BackwardsHat_Peltor_OD','VSM_BackwardsHat_Peltor_Sero','VSM_BackwardsHat_Peltor_tan','VSM_BackwardsHat_Peltor_US','VSM_Beanie_Black','VSM_Beanie_OD','VSM_Beanie_tan']; _unit addHeadgear _headgear; _vest = selectRandom ['lbt_light_od','lbt_light_coy','VSM_OGA_OD_IOTV_1','VSM_OGA_IOTV_1','VSM_LBT1961_OGA_OD','VSM_LBT1961_GRN','VSM_LBT1961_CB','VSM_LBT1961_Black','TRYK_V_TacVest_coyo','TRYK_V_PlateCarrier_blk_L','TRYK_V_PlateCarrier_coyo_L','LOP_V_CarrierLite_OLV','V_TacVest_oli','V_TacVest_khk','V_TacVest_brn','V_BandollierB_oli','V_BandollierB_khk','V_BandollierB_rgr','V_BandollierB_cbr','V_BandollierB_blk']; _unit addVest _vest;};";
	    };
	};

	class GVAR(blufor_soldier1) : GVAR(blufor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Rifleman (HK416)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMA_HK416afg","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	};

	class GVAR(blufor_soldier2) : GVAR(blufor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Rifleman (MP5K)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMG_05_F","hgun_P07_F","Throw","Put"};
	    magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	};

	class GVAR(blufor_soldier3) : GVAR(blufor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Rifleman (M4)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMA_M4afgSTOCK","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	};

	class GVAR(blufor_soldier4) : GVAR(blufor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Rifleman (Mk18)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMA_MK18afgTANBLK","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	};

	class GVAR(blufor_soldier5) : GVAR(blufor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Rifleman (M16)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"rhs_weap_m16a4_carryhandle","hgun_P07_F","Throw","Put"};
	    magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	};

	class GVAR(blufor_soldier6) : GVAR(blufor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Rifleman (Shotgun)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"rhs_weap_M590_8RD","hgun_P07_F","Throw","Put"};
	    magazines[] = {"rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	};

	class GVAR(blufor_soldier7) : GVAR(blufor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Rifleman (AKM)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"rhs_weap_akmn","hgun_P07_F","Throw","Put"};
	    magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	};




	class GVAR(blufor_grenadier1) : GVAR(blufor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Grenadier (M4)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"rhs_weap_m4_m203","hgun_P07_F","Throw","Put"};
	    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	};

	class GVAR(blufor_grenadier2) : GVAR(blufor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Grenadier (HK416)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMA_HK416GL","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	};



	class GVAR(blufor_rifleman_at) : GVAR(blufor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Rifleman AT";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMA_HK416afg","rhs_weap_M136_hedp","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    icon = "iconManAT";
	};





	class GVAR(blufor_minimi) : GVAR(blufor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Autorifleman (Minimi)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"sma_minimi_mk3_762tlb","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_150Rnd_762_M80A1_Mixed","SMA_150Rnd_762_M80A1_Mixed","SMA_150Rnd_762_M80A1_Mixed","SMA_150Rnd_762_M80A1_Mixed","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    icon = "iconManMG";
	};

	class GVAR(blufor_m60) : GVAR(blufor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Machine Gunner (M60)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"hlc_lmg_m60","hgun_P07_F","Throw","Put"};
	    magazines[] = {"hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    icon = "iconManMG";
	};




	class GVAR(blufor_medic) : GVAR(blufor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Medic";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "B_AssaultPack_rgr_Medic";
	    weapons[] = {"SMG_05_F","hgun_P07_F","Throw","Put"};
	    magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
	    icon = "iconManMedic";
	};



	class GVAR(blufor_sniper) : GVAR(blufor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Sniper";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"rhs_weap_XM2010_wd_leu","hgun_P07_F","Throw","Put"};
	    magazines[] = {"rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit","optic_lrps"};
	};

	class GVAR(blufor_sniper_sws) : GVAR(blufor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Sniper (SWS)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"rhs_weap_m24sws_leu","hgun_P07_F","Throw","Put"};
	    magazines[] = {"rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit","optic_lrps"};
	};

	class GVAR(blufor_marksman) : GVAR(blufor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Marksman";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"rhs_weap_m14ebrri_leu","hgun_P07_F","Throw","Put"};
	    magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit","optic_lrps"};
	};



	class GVAR(blufor_ftl) : GVAR(blufor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Team Leader";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMA_HK416afg","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    icon = "iconManLeader";
	};

	class GVAR(blufor_pilot) : GVAR(blufor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Pilot";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMA_HK416afg","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};

			class EventHandlers: EventHandlers {
	         init = "if (local (_this select 0)) then { _unit = (_this select 0); _uniform = selectRandom ['TRYK_shirts_DENIM_BK','TRYK_shirts_DENIM_BL','TRYK_shirts_DENIM_BWH','TRYK_shirts_DENIM_od','TRYK_shirts_DENIM_R','TRYK_shirts_DENIM_RED2','TRYK_shirts_DENIM_WH','TRYK_shirts_DENIM_WHB','TRYK_shirts_DENIM_ylb','TRYK_shirts_DENIM_od_Sleeve','TRYK_shirts_DENIM_ylb_Sleeve','TRYK_shirts_DENIM_BK_Sleeve','TRYK_shirts_DENIM_BL_Sleeve','TRYK_shirts_DENIM_BWH_Sleeve','TRYK_shirts_DENIM_R_Sleeve','TRYK_shirts_DENIM_RED2_Sleeve','TRYK_shirts_DENIM_WH_Sleeve','TRYK_shirts_DENIM_WHB_Sleeve']; _unit forceAddUniform _uniform; _unit addHeadgear 'H_Cap_marshal'; _vest = selectRandom ['lbt_light_od','lbt_light_coy','VSM_OGA_OD_IOTV_1','VSM_OGA_IOTV_1','VSM_LBT1961_OGA_OD','VSM_LBT1961_GRN','VSM_LBT1961_CB','VSM_LBT1961_Black','TRYK_V_TacVest_coyo','TRYK_V_PlateCarrier_blk_L','TRYK_V_PlateCarrier_coyo_L','LOP_V_CarrierLite_OLV','V_TacVest_oli','V_TacVest_khk','V_TacVest_brn','V_BandollierB_oli','V_BandollierB_khk','V_BandollierB_rgr','V_BandollierB_cbr','V_BandollierB_blk']; _unit addVest _vest;};";
	    };
	};


	// vehicles
	class C_Offroad_01_F;
	class GVAR(blufor_offroad): C_Offroad_01_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier1);
	    typicalCargo[] = {QGVAR(blufor_soldier2)};
	    displayName = "Pickup";
	    vehicleClass = "Car";
	    animationList[] = {"HideBumper1",0,"HideBumper2",0,"HideConstruction",0.4,"HideDoor3",0};
	};

	class LOP_AFR_OPF_Offroad_M2;
	class GVAR(blufor_offroad_mg): LOP_AFR_OPF_Offroad_M2 {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier1);
	    typicalCargo[] = {QGVAR(blufor_soldier2)};
	    displayName = "Pickup (MG)";
	    vehicleClass = "Car";
	    animationList[] = {"HideBumper1",0,"HideBumper2",0,"HideConstruction",0.4,"HideDoor3",0};
	    editorSubcategory = "EdSubcat_Cars";
	    delete dlc;
	};

	class C_Offroad_02_unarmed_F;
	class GVAR(blufor_jeep): C_Offroad_02_unarmed_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier1);
	    typicalCargo[] = {QGVAR(blufor_soldier2)};
	    displayName = "Jeep";
	    vehicleClass = "Car";
	};

	class I_C_Offroad_02_LMG_F;
	class GVAR(blufor_jeep_mg): I_C_Offroad_02_LMG_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier1);
	    typicalCargo[] = {QGVAR(blufor_soldier2)};
	    displayName = "Jeep (MG)";
	    vehicleClass = "Car";
	};



	class C_Van_01_transport_F;
	class GVAR(blufor_truck_cargo): C_Van_01_transport_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier2);
	    displayName = "Truck (Cargo)";
	    vehicleClass = "Car";
	};

	class C_Quadbike_01_F;
	class GVAR(blufor_quadbike): C_Quadbike_01_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier1);
	    displayName = "Quadbike";
	    vehicleClass = "Car";
	};

	class C_Van_02_vehicle_F;
	class GVAR(blufor_van_cargo): C_Van_02_vehicle_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier2);
	    displayName = "Van (Cargo)";
	    vehicleClass = "Car";
	};

	class C_Van_02_transport_F;
	class GVAR(blufor_van_transport): C_Van_02_transport_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier2);
	    displayName = "Van (Transport)";
	    vehicleClass = "Car";
	};


	class LOP_ISTS_M998_D_4DR;
	class GVAR(blufor_humvee): LOP_ISTS_M998_D_4DR {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier3);
	    displayName = "Humvee";
	    vehicleClass = "Car";
	    editorSubcategory = "EdSubcat_Cars";
	    delete dlc;
	};

	class C_SUV_01_F;
	class GVAR(blufor_suv): C_SUV_01_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier4);
	    displayName = "SUV";
	    vehicleClass = "Car";
	};

	class LOP_UKR_KAMAZ_Covered;
	class GVAR(blufor_kamaz): LOP_UKR_KAMAZ_Covered {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier4);
	    displayName = "Truck (Covered)";
	    vehicleClass = "Car";
	    editorSubcategory = "EdSubcat_Cars";
	    delete dlc;
	};

	class PO_AFR_RDS_tt650_Civ_01;
	class GVAR(blufor_yamaha): PO_AFR_RDS_tt650_Civ_01 {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier5);
	    displayName = "Crossbike";
	    vehicleClass = "Car";
	    editorSubcategory = "EdSubcat_Cars";
	    delete dlc;
	    typicalCargo[] = {QGVAR(blufor_soldier1)};
	};


	class C_Heli_Light_01_civil_F;
	class GVAR(blufor_md500): C_Heli_Light_01_civil_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier5);
	    displayName = "MD-500";
	    vehicleClass = "Air";
	    typicalCargo[] = {QGVAR(blufor_soldier1)};
	};

	class MU_CIV_Orca;
	class GVAR(blufor_orca): MU_CIV_Orca {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier5);
	    displayName = "Orca";
	    vehicleClass = "Air";
	    typicalCargo[] = {QGVAR(blufor_soldier1)};
	};


	class C_Plane_Civil_01_F;
	class GVAR(blufor_cessna): C_Plane_Civil_01_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier5);
	    displayName = "Cessna";
	    vehicleClass = "Air";
	    typicalCargo[] = {QGVAR(blufor_soldier1)};
	};

	class RHS_AN2;
	class GVAR(blufor_doppeldecker): RHS_AN2 {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier5);
	    displayName = "Doppeldecker";
	    vehicleClass = "Air";
	    typicalCargo[] = {QGVAR(blufor_soldier1)};
	};





	class RHS_M2StaticMG_USMC_WD;
	class GVAR(blufor_mg_high): RHS_M2StaticMG_USMC_WD {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier1);
	    displayName = "Machine Gun (High)";
	};

	class RHS_M2StaticMG_MiniTripod_USMC_WD;
	class GVAR(blufor_mg_low): RHS_M2StaticMG_MiniTripod_USMC_WD {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier1);
	    displayName = "Machine Gun (Low)";
	};

	class RHS_M252_USMC_WD;
	class GVAR(blufor_mortar): RHS_M252_USMC_WD {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier1);
	    displayName = "Mortar";
	};

	class RHS_zu23_MSV;
	class GVAR(blufor_antiair): RHS_zu23_MSV {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = QGVAR(blufor);
	    crew = QGVAR(blufor_soldier1);
	    displayName = "Anti-Air";
	    typicalCargo[] = {QGVAR(blufor_soldier3)};
	};










	class sab_paratrike_west;
	class GVAR(blufor_paratrike): sab_paratrike_west {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 1;
			faction = QGVAR(blufor);
			crew = QGVAR(blufor_soldier5);
			displayName = "Paratrike";
			vehicleClass = "Air";
			typicalCargo[] = {QGVAR(blufor_soldier1)};
	};

	class sab_paraglider;
	class GVAR(blufor_paraglider): sab_paraglider {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 1;
			faction = QGVAR(blufor);
			crew = QGVAR(blufor_soldier5);
			displayName = "Paraglider";
			vehicleClass = "Air";
			typicalCargo[] = {QGVAR(blufor_soldier1)};
	};

	class sab_gladiator;
	class GVAR(blufor_gladiator): sab_gladiator {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 1;
			faction = QGVAR(blufor);
			crew = QGVAR(blufor_soldier5);
			displayName = "Gladiator";
			vehicleClass = "Air";
			typicalCargo[] = {QGVAR(blufor_soldier1)};
	};

	class sab_mustang;
	class GVAR(blufor_mustang): sab_mustang {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 1;
			faction = QGVAR(blufor);
			crew = QGVAR(blufor_soldier5);
			displayName = "Mustang";
			vehicleClass = "Air";
			typicalCargo[] = {QGVAR(blufor_soldier1)};
	};

	class sab_texan;
	class GVAR(blufor_texan): sab_texan {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 1;
			faction = QGVAR(blufor);
			crew = QGVAR(blufor_soldier5);
			displayName = "Texan";
			vehicleClass = "Air";
			typicalCargo[] = {QGVAR(blufor_soldier1)};
	};

	class sab_ultralight;
	class GVAR(blufor_ultralight): sab_ultralight {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 1;
			faction = QGVAR(blufor);
			crew = QGVAR(blufor_soldier5);
			displayName = "Ultralight";
			vehicleClass = "Air";
			typicalCargo[] = {QGVAR(blufor_soldier1)};
	};


	class rhs_uh1h_hidf;
	class GVAR(blufor_uh1h): rhs_uh1h_hidf {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		displayName = "UH-1H";
		faction = QGVAR(blufor);
		crew = QGVAR(blufor_pilot);
		typicalCargo[] = {QGVAR(blufor_pilot)};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
		//hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
	};

	class rhs_uh1h_hidf_gunship;
	class GVAR(blufor_uh1h_gunship): rhs_uh1h_hidf_gunship {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		displayName = "UH-1H Gunship";
		faction = QGVAR(blufor);
		crew = QGVAR(blufor_pilot);
		typicalCargo[] = {QGVAR(blufor_pilot)};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
		//hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
	};

	class rhs_uh1h_hidf_unarmed;
	class GVAR(blufor_uh1h_unarmed): rhs_uh1h_hidf_unarmed {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		displayName = "UH-1H Unarmed";
		faction = QGVAR(blufor);
		crew = QGVAR(blufor_pilot);
		typicalCargo[] = {QGVAR(blufor_pilot)};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
		//hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
	};

	class RwG_Mozzie_Carl_Black;
	class GVAR(blufor_mozzie_black): RwG_Mozzie_Carl_Black {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		displayName = "Mosquito Black";
		faction = QGVAR(blufor);
		crew = QGVAR(blufor_pilot);
	};

	class RwG_Mozzie_Carl_Red;
	class GVAR(blufor_mozzie_red): RwG_Mozzie_Carl_Red {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		displayName = "Mosquito Red";
		faction = QGVAR(blufor);
		crew = QGVAR(blufor_pilot);
	};












	//units
	class SoldierGB;
	class I_Soldier_base_F : SoldierGB {
		class EventHandlers;
		modelsides[] = {3,2,1,0};
	};

	class GVAR(indfor_soldier_base) : I_Soldier_base_F {
		author = "Schwaggot";
		scope = 1;
		curatorScope = 1;
		side = 2;
		faction = QGVAR(indfor);
		vehicleClass = "Men";
		model = "\a3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		modelSides[]={3,2,1,0};
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"};
		identityTypes[] = {"Head_Euro"};
		faceType = "Man_A3";
		genericNames="TanoanMen";
		nakedUniform = "U_BasicBody";
		displayName = "Soldier";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		uniformClass = "U_MU_B_soldier_sage_tshirt";

		class EventHandlers: EventHandlers {
			init = "if (local (_this select 0)) then { _unit = (_this select 0); _uniform = selectRandom ['TRYK_shirts_DENIM_BK','TRYK_shirts_DENIM_BL','TRYK_shirts_DENIM_BWH','TRYK_shirts_DENIM_od','TRYK_shirts_DENIM_R','TRYK_shirts_DENIM_RED2','TRYK_shirts_DENIM_WH','TRYK_shirts_DENIM_WHB','TRYK_shirts_DENIM_ylb','TRYK_shirts_DENIM_od_Sleeve','TRYK_shirts_DENIM_ylb_Sleeve','TRYK_shirts_DENIM_BK_Sleeve','TRYK_shirts_DENIM_BL_Sleeve','TRYK_shirts_DENIM_BWH_Sleeve','TRYK_shirts_DENIM_R_Sleeve','TRYK_shirts_DENIM_RED2_Sleeve','TRYK_shirts_DENIM_WH_Sleeve','TRYK_shirts_DENIM_WHB_Sleeve']; _unit forceAddUniform _uniform; _headgear = selectRandom ['H_Bandanna_gry','H_Bandanna_blu','H_Bandanna_cbr','H_Bandanna_khk','H_Bandanna_sgg','H_Bandanna_sand','H_Cap_blk','H_Cap_blu','H_Cap_grn','H_Cap_oli','H_Cap_red','H_Cap_tan','rhssaf_bandana_smb','TRYK_H_headsetcap_blk_Glasses','TRYK_H_headsetcap_od_Glasses','TRYK_R_CAP_BLK','TRYK_R_CAP_TAN','TRYK_R_CAP_OD_US','TRYK_r_cap_blk_Glasses','TRYK_r_cap_od_Glasses','TRYK_r_cap_tan_Glasses','VSM_BackwardsHat_Peltor_black','VSM_BackwardsHat_Peltor_OD','VSM_BackwardsHat_Peltor_Sero','VSM_BackwardsHat_Peltor_tan','VSM_BackwardsHat_Peltor_US','VSM_Beanie_Black','VSM_Beanie_OD','VSM_Beanie_tan']; _unit addHeadgear _headgear; _vest = selectRandom ['lbt_light_od','lbt_light_coy','VSM_OGA_OD_IOTV_1','VSM_OGA_IOTV_1','VSM_LBT1961_OGA_OD','VSM_LBT1961_GRN','VSM_LBT1961_CB','VSM_LBT1961_Black','TRYK_V_TacVest_coyo','TRYK_V_PlateCarrier_blk_L','TRYK_V_PlateCarrier_coyo_L','LOP_V_CarrierLite_OLV','V_TacVest_oli','V_TacVest_khk','V_TacVest_brn','V_BandollierB_oli','V_BandollierB_khk','V_BandollierB_rgr','V_BandollierB_cbr','V_BandollierB_blk']; _unit addVest _vest;};";
		};
	};

	class GVAR(indfor_soldier1) : GVAR(indfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (HK416)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_HK416afg","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
	};

	class GVAR(indfor_soldier2) : GVAR(indfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (MP5K)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMG_05_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
	};

	class GVAR(indfor_soldier3) : GVAR(indfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (M4)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_M4afgSTOCK","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
	};

	class GVAR(indfor_soldier4) : GVAR(indfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (Mk18)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_MK18afgTANBLK","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
	};

	class GVAR(indfor_soldier5) : GVAR(indfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (M16)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_m16a4_carryhandle","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
	};

	class GVAR(indfor_soldier6) : GVAR(indfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (Shotgun)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_M590_8RD","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
	};

	class GVAR(indfor_soldier7) : GVAR(indfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (AKM)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_akmn","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
	};




	class GVAR(indfor_grenadier1) : GVAR(indfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Grenadier (M4)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_m4_m203","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
	};

	class GVAR(indfor_grenadier2) : GVAR(indfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Grenadier (HK416)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_HK416GL","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
	};



	class GVAR(indfor_rifleman_at) : GVAR(indfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman AT";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_HK416afg","rhs_weap_M136_hedp","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		icon = "iconManAT";
	};





	class GVAR(indfor_minimi) : GVAR(indfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Autorifleman (Minimi)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"sma_minimi_mk3_762tlb","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_150Rnd_762_M80A1_Mixed","SMA_150Rnd_762_M80A1_Mixed","SMA_150Rnd_762_M80A1_Mixed","SMA_150Rnd_762_M80A1_Mixed","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		icon = "iconManMG";
	};

	class GVAR(indfor_m60) : GVAR(indfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Machine Gunner (M60)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"hlc_lmg_m60","hgun_P07_F","Throw","Put"};
		magazines[] = {"hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		icon = "iconManMG";
	};




	class GVAR(indfor_medic) : GVAR(indfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Medic";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "B_AssaultPack_rgr_Medic";
		weapons[] = {"SMG_05_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
		icon = "iconManMedic";
	};



	class GVAR(indfor_sniper) : GVAR(indfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Sniper";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_XM2010_wd_leu","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit","optic_lrps"};
	};

	class GVAR(indfor_sniper_sws) : GVAR(indfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Sniper (SWS)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_m24sws_leu","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit","optic_lrps"};
	};

	class GVAR(indfor_marksman): GVAR(indfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Marksman";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_m14ebrri_leu","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit","optic_lrps"};
	};



	class GVAR(indfor_ftl): GVAR(indfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Team Leader";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_HK416afg","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		icon = "iconManLeader";
	};
	class GVAR(indfor_pilot): GVAR(indfor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Pilot";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMA_HK416afg","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};

			class EventHandlers: EventHandlers {
	         init = "if (local (_this select 0)) then { _unit = (_this select 0); _uniform = selectRandom ['TRYK_shirts_DENIM_BK','TRYK_shirts_DENIM_BL','TRYK_shirts_DENIM_BWH','TRYK_shirts_DENIM_od','TRYK_shirts_DENIM_R','TRYK_shirts_DENIM_RED2','TRYK_shirts_DENIM_WH','TRYK_shirts_DENIM_WHB','TRYK_shirts_DENIM_ylb','TRYK_shirts_DENIM_od_Sleeve','TRYK_shirts_DENIM_ylb_Sleeve','TRYK_shirts_DENIM_BK_Sleeve','TRYK_shirts_DENIM_BL_Sleeve','TRYK_shirts_DENIM_BWH_Sleeve','TRYK_shirts_DENIM_R_Sleeve','TRYK_shirts_DENIM_RED2_Sleeve','TRYK_shirts_DENIM_WH_Sleeve','TRYK_shirts_DENIM_WHB_Sleeve']; _unit forceAddUniform _uniform; _unit addHeadgear 'H_Cap_marshal'; _vest = selectRandom ['lbt_light_od','lbt_light_coy','VSM_OGA_OD_IOTV_1','VSM_OGA_IOTV_1','VSM_LBT1961_OGA_OD','VSM_LBT1961_GRN','VSM_LBT1961_CB','VSM_LBT1961_Black','TRYK_V_TacVest_coyo','TRYK_V_PlateCarrier_blk_L','TRYK_V_PlateCarrier_coyo_L','LOP_V_CarrierLite_OLV','V_TacVest_oli','V_TacVest_khk','V_TacVest_brn','V_BandollierB_oli','V_BandollierB_khk','V_BandollierB_rgr','V_BandollierB_cbr','V_BandollierB_blk']; _unit addVest _vest;};";
	    };
	};


	// vehicles
	class GVAR(indfor_offroad): C_Offroad_01_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier1);
		typicalCargo[] = {QGVAR(indfor_soldier2)};
		displayName = "Pickup";
		vehicleClass = "Car";
		animationList[] = {"HideBumper1",0,"HideBumper2",0,"HideConstruction",0.4,"HideDoor3",0};
	};

	class GVAR(indfor_offroad_mg): LOP_AFR_OPF_Offroad_M2 {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier1);
		typicalCargo[] = {QGVAR(indfor_soldier2)};
		displayName = "Pickup (MG)";
		vehicleClass = "Car";
		animationList[] = {"HideBumper1",0,"HideBumper2",0,"HideConstruction",0.4,"HideDoor3",0};
		editorSubcategory = "EdSubcat_Cars";
		delete dlc;
	};

	class GVAR(indfor_jeep): C_Offroad_02_unarmed_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier1);
		typicalCargo[] = {QGVAR(indfor_soldier2)};
		displayName = "Jeep";
		vehicleClass = "Car";
	};

	class GVAR(indfor_jeep_mg): I_C_Offroad_02_LMG_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier1);
		typicalCargo[] = {QGVAR(indfor_soldier2)};
		displayName = "Jeep (MG)";
		vehicleClass = "Car";
	};

	class GVAR(indfor_truck_cargo): C_Van_01_transport_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier2);
		displayName = "Truck (Cargo)";
		vehicleClass = "Car";
	};

	class GVAR(indfor_quadbike): C_Quadbike_01_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier1);
		displayName = "Quadbike";
		vehicleClass = "Car";
	};

	class GVAR(indfor_van_cargo): C_Van_02_vehicle_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier2);
		displayName = "Van (Cargo)";
		vehicleClass = "Car";
	};

	class GVAR(indfor_van_transport): C_Van_02_transport_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier2);
		displayName = "Van (Transport)";
		vehicleClass = "Car";
	};

	class GVAR(indfor_humvee): LOP_ISTS_M998_D_4DR {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier3);
		displayName = "Humvee";
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";
		delete dlc;
	};

	class GVAR(indfor_suv): C_SUV_01_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier4);
		displayName = "SUV";
		vehicleClass = "Car";
	};

	class GVAR(indfor_kamaz): LOP_UKR_KAMAZ_Covered {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier4);
		displayName = "Truck (Covered)";
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";
		delete dlc;
	};

	class GVAR(indfor_yamaha): PO_AFR_RDS_tt650_Civ_01 {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier5);
		displayName = "Crossbike";
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";
		delete dlc;
		typicalCargo[] = {QGVAR(indfor_soldier1)};
	};

	class GVAR(indfor_md500): C_Heli_Light_01_civil_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier5);
		displayName = "MD-500";
		vehicleClass = "Air";
		typicalCargo[] = {QGVAR(indfor_soldier1)};
	};

	class GVAR(indfor_orca): MU_CIV_Orca {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier5);
		displayName = "Orca";
		vehicleClass = "Air";
		typicalCargo[] = {QGVAR(indfor_soldier1)};
	};

	class GVAR(indfor_cessna): C_Plane_Civil_01_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier5);
		displayName = "Cessna";
		vehicleClass = "Air";
		typicalCargo[] = {QGVAR(indfor_soldier1)};
	};

	class GVAR(indfor_doppeldecker): RHS_AN2 {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier5);
		displayName = "Doppeldecker";
		vehicleClass = "Air";
		typicalCargo[] = {QGVAR(indfor_soldier1)};
	};

	class GVAR(indfor_mg_high): RHS_M2StaticMG_USMC_WD {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier1);
		displayName = "Machine Gun (High)";
	};

	class GVAR(indfor_mg_low): RHS_M2StaticMG_MiniTripod_USMC_WD {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier1);
		displayName = "Machine Gun (Low)";
	};

	class GVAR(indfor_mortar): RHS_M252_USMC_WD {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier1);
		displayName = "Mortar";
	};

	class GVAR(indfor_antiair): RHS_zu23_MSV {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_soldier1);
		displayName = "Anti-Air";
		typicalCargo[] = {QGVAR(indfor_soldier3)};
	};

	class GVAR(indfor_paratrike): sab_paratrike_west {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 2;
			faction = QGVAR(indfor);
			crew = QGVAR(indfor_soldier5);
			displayName = "Paratrike";
			vehicleClass = "Air";
			typicalCargo[] = {QGVAR(indfor_soldier1)};
	};

	class GVAR(indfor_paraglider): sab_paraglider {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 2;
			faction = QGVAR(indfor);
			crew = QGVAR(indfor_soldier5);
			displayName = "Paraglider";
			vehicleClass = "Air";
			typicalCargo[] = {QGVAR(indfor_soldier1)};
	};

	class GVAR(indfor_gladiator): sab_gladiator {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 2;
			faction = QGVAR(indfor);
			crew = QGVAR(indfor_soldier5);
			displayName = "Gladiator";
			vehicleClass = "Air";
			typicalCargo[] = {QGVAR(indfor_soldier1)};
	};

	class GVAR(indfor_mustang): sab_mustang {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 2;
			faction = QGVAR(indfor);
			crew = QGVAR(indfor_soldier5);
			displayName = "Mustang";
			vehicleClass = "Air";
			typicalCargo[] = {QGVAR(indfor_soldier1)};
	};

	class GVAR(indfor_texan): sab_texan {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 2;
			faction = QGVAR(indfor);
			crew = QGVAR(indfor_soldier5);
			displayName = "Texan";
			vehicleClass = "Air";
			typicalCargo[] = {QGVAR(indfor_soldier1)};
	};

	class GVAR(indfor_ultralight): sab_ultralight {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 2;
			faction = QGVAR(indfor);
			crew = QGVAR(indfor_soldier5);
			displayName = "Ultralight";
			vehicleClass = "Air";
			typicalCargo[] = {QGVAR(indfor_soldier1)};
	};

	class GVAR(indfor_uh1h): rhs_uh1h_hidf {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "UH-1H";
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_pilot);
		typicalCargo[] = {QGVAR(indfor_pilot)};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
		//hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
	};

	class GVAR(indfor_uh1h_gunship): rhs_uh1h_hidf_gunship {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "UH-1H Gunship";
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_pilot);
		typicalCargo[] = {QGVAR(indfor_pilot)};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
		//hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
	};

	class GVAR(indfor_uh1h_unarmed): rhs_uh1h_hidf_unarmed {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "UH-1H Unarmed";
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_pilot);
		typicalCargo[] = {QGVAR(indfor_pilot)};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
		//hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
	};

	class GVAR(indfor_mozzie_black): RwG_Mozzie_Carl_Black {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Mosquito Black";
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_pilot);
	};

	class GVAR(indfor_mozzie_red): RwG_Mozzie_Carl_Red {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Mosquito Red";
		faction = QGVAR(indfor);
		crew = QGVAR(indfor_pilot);
	};




















	class SoldierEB;
	class O_Soldier_base_F : SoldierEB {
		class EventHandlers;
		modelsides[] = {3,2,1,0};
	};

	class GVAR(opfor_soldier_base) : O_Soldier_base_F {
		author = "Schwaggot";
		scope = 1;
		curatorScope = 1;
		side = 0;
		faction = QGVAR(opfor);
		vehicleClass = "Men";
		model = "\a3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		modelSides[]={3,2,1,0};
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"};
		identityTypes[] = {"Head_Euro"};
		faceType = "Man_A3";
		genericNames="TanoanMen";
		nakedUniform = "U_BasicBody";
		displayName = "Soldier";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		uniformClass = "U_MU_B_soldier_sage_tshirt";

		class EventHandlers: EventHandlers {
			init = "if (local (_this select 0)) then { _unit = (_this select 0); _uniform = selectRandom ['TRYK_shirts_DENIM_BK','TRYK_shirts_DENIM_BL','TRYK_shirts_DENIM_BWH','TRYK_shirts_DENIM_od','TRYK_shirts_DENIM_R','TRYK_shirts_DENIM_RED2','TRYK_shirts_DENIM_WH','TRYK_shirts_DENIM_WHB','TRYK_shirts_DENIM_ylb','TRYK_shirts_DENIM_od_Sleeve','TRYK_shirts_DENIM_ylb_Sleeve','TRYK_shirts_DENIM_BK_Sleeve','TRYK_shirts_DENIM_BL_Sleeve','TRYK_shirts_DENIM_BWH_Sleeve','TRYK_shirts_DENIM_R_Sleeve','TRYK_shirts_DENIM_RED2_Sleeve','TRYK_shirts_DENIM_WH_Sleeve','TRYK_shirts_DENIM_WHB_Sleeve']; _unit forceAddUniform _uniform; _headgear = selectRandom ['H_Bandanna_gry','H_Bandanna_blu','H_Bandanna_cbr','H_Bandanna_khk','H_Bandanna_sgg','H_Bandanna_sand','H_Cap_blk','H_Cap_blu','H_Cap_grn','H_Cap_oli','H_Cap_red','H_Cap_tan','rhssaf_bandana_smb','TRYK_H_headsetcap_blk_Glasses','TRYK_H_headsetcap_od_Glasses','TRYK_R_CAP_BLK','TRYK_R_CAP_TAN','TRYK_R_CAP_OD_US','TRYK_r_cap_blk_Glasses','TRYK_r_cap_od_Glasses','TRYK_r_cap_tan_Glasses','VSM_BackwardsHat_Peltor_black','VSM_BackwardsHat_Peltor_OD','VSM_BackwardsHat_Peltor_Sero','VSM_BackwardsHat_Peltor_tan','VSM_BackwardsHat_Peltor_US','VSM_Beanie_Black','VSM_Beanie_OD','VSM_Beanie_tan']; _unit addHeadgear _headgear; _vest = selectRandom ['lbt_light_od','lbt_light_coy','VSM_OGA_OD_IOTV_1','VSM_OGA_IOTV_1','VSM_LBT1961_OGA_OD','VSM_LBT1961_GRN','VSM_LBT1961_CB','VSM_LBT1961_Black','TRYK_V_TacVest_coyo','TRYK_V_PlateCarrier_blk_L','TRYK_V_PlateCarrier_coyo_L','LOP_V_CarrierLite_OLV','V_TacVest_oli','V_TacVest_khk','V_TacVest_brn','V_BandollierB_oli','V_BandollierB_khk','V_BandollierB_rgr','V_BandollierB_cbr','V_BandollierB_blk']; _unit addVest _vest;};";
		};
	};

	class GVAR(opfor_soldier1): GVAR(opfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (HK416)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_HK416afg","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
	};

	class GVAR(opfor_soldier2): GVAR(opfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (MP5K)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMG_05_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
	};

	class GVAR(opfor_soldier3): GVAR(opfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (M4)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_M4afgSTOCK","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
	};

	class GVAR(opfor_soldier4): GVAR(opfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (Mk18)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_MK18afgTANBLK","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
	};

	class GVAR(opfor_soldier5): GVAR(opfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (M16)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_m16a4_carryhandle","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
	};

	class GVAR(opfor_soldier6): GVAR(opfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (Shotgun)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_M590_8RD","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
	};

	class GVAR(opfor_soldier7): GVAR(opfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (AKM)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_akmn","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
	};




	class GVAR(opfor_grenadier1): GVAR(opfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Grenadier (M4)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_m4_m203","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
	};

	class GVAR(opfor_grenadier2): GVAR(opfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Grenadier (HK416)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_HK416GL","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
	};



	class GVAR(opfor_rifleman_at): GVAR(opfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman AT";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_HK416afg","rhs_weap_M136_hedp","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		icon = "iconManAT";
	};





	class GVAR(opfor_minimi): GVAR(opfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Autorifleman (Minimi)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"sma_minimi_mk3_762tlb","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_150Rnd_762_M80A1_Mixed","SMA_150Rnd_762_M80A1_Mixed","SMA_150Rnd_762_M80A1_Mixed","SMA_150Rnd_762_M80A1_Mixed","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		icon = "iconManMG";
	};

	class GVAR(opfor_m60): GVAR(opfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Machine Gunner (M60)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"hlc_lmg_m60","hgun_P07_F","Throw","Put"};
		magazines[] = {"hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		icon = "iconManMG";
	};




	class GVAR(opfor_medic): GVAR(opfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Medic";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "B_AssaultPack_rgr_Medic";
		weapons[] = {"SMG_05_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
		icon = "iconManMedic";
	};



	class GVAR(opfor_sniper): GVAR(opfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Sniper";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_XM2010_wd_leu","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit","optic_lrps"};
	};

	class GVAR(opfor_sniper_sws): GVAR(opfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Sniper (SWS)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_m24sws_leu","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit","optic_lrps"};
	};

	class GVAR(opfor_marksman): GVAR(opfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Marksman";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_m14ebrri_leu","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit","optic_lrps"};
	};



	class GVAR(opfor_ftl): GVAR(opfor_soldier_base) {
		scope = 2;
		curatorScope = 2;
		displayName = "Team Leader";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_HK416afg","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		icon = "iconManLeader";
	};
	class GVAR(opfor_pilot): GVAR(opfor_soldier_base) {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Pilot";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMA_HK416afg","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};

			class EventHandlers: EventHandlers {
	         init = "if (local (_this select 0)) then { _unit = (_this select 0); _uniform = selectRandom ['TRYK_shirts_DENIM_BK','TRYK_shirts_DENIM_BL','TRYK_shirts_DENIM_BWH','TRYK_shirts_DENIM_od','TRYK_shirts_DENIM_R','TRYK_shirts_DENIM_RED2','TRYK_shirts_DENIM_WH','TRYK_shirts_DENIM_WHB','TRYK_shirts_DENIM_ylb','TRYK_shirts_DENIM_od_Sleeve','TRYK_shirts_DENIM_ylb_Sleeve','TRYK_shirts_DENIM_BK_Sleeve','TRYK_shirts_DENIM_BL_Sleeve','TRYK_shirts_DENIM_BWH_Sleeve','TRYK_shirts_DENIM_R_Sleeve','TRYK_shirts_DENIM_RED2_Sleeve','TRYK_shirts_DENIM_WH_Sleeve','TRYK_shirts_DENIM_WHB_Sleeve']; _unit forceAddUniform _uniform; _unit addHeadgear 'H_Cap_marshal'; _vest = selectRandom ['lbt_light_od','lbt_light_coy','VSM_OGA_OD_IOTV_1','VSM_OGA_IOTV_1','VSM_LBT1961_OGA_OD','VSM_LBT1961_GRN','VSM_LBT1961_CB','VSM_LBT1961_Black','TRYK_V_TacVest_coyo','TRYK_V_PlateCarrier_blk_L','TRYK_V_PlateCarrier_coyo_L','LOP_V_CarrierLite_OLV','V_TacVest_oli','V_TacVest_khk','V_TacVest_brn','V_BandollierB_oli','V_BandollierB_khk','V_BandollierB_rgr','V_BandollierB_cbr','V_BandollierB_blk']; _unit addVest _vest;};";
	    };
	};


	// vehicles
	class GVAR(opfor_offroad): C_Offroad_01_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier1);
		typicalCargo[] = {QGVAR(opfor_soldier2)};
		displayName = "Pickup";
		vehicleClass = "Car";
		animationList[] = {"HideBumper1",0,"HideBumper2",0,"HideConstruction",0.4,"HideDoor3",0};
	};

	class GVAR(opfor_offroad_mg): LOP_AFR_OPF_Offroad_M2 {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier1);
		typicalCargo[] = {QGVAR(opfor_soldier2)};
		displayName = "Pickup (MG)";
		vehicleClass = "Car";
		animationList[] = {"HideBumper1",0,"HideBumper2",0,"HideConstruction",0.4,"HideDoor3",0};
		editorSubcategory = "EdSubcat_Cars";
		delete dlc;
	};

	class GVAR(opfor_jeep): C_Offroad_02_unarmed_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier1);
		typicalCargo[] = {QGVAR(opfor_soldier2)};
		displayName = "Jeep";
		vehicleClass = "Car";
	};

	class GVAR(opfor_jeep_mg): I_C_Offroad_02_LMG_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier1);
		typicalCargo[] = {QGVAR(opfor_soldier2)};
		displayName = "Jeep (MG)";
		vehicleClass = "Car";
	};



	class GVAR(opfor_truck_cargo): C_Van_01_transport_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier2);
		displayName = "Truck (Cargo)";
		vehicleClass = "Car";
	};

	class GVAR(opfor_quadbike): C_Quadbike_01_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier1);
		displayName = "Quadbike";
		vehicleClass = "Car";
	};

	class GVAR(opfor_van_cargo): C_Van_02_vehicle_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier2);
		displayName = "Van (Cargo)";
		vehicleClass = "Car";
	};

	class GVAR(opfor_van_transport): C_Van_02_transport_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier2);
		displayName = "Van (Transport)";
		vehicleClass = "Car";
	};


	class GVAR(opfor_humvee): LOP_ISTS_M998_D_4DR {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier3);
		displayName = "Humvee";
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";
		delete dlc;
	};

	class GVAR(opfor_suv): C_SUV_01_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier4);
		displayName = "SUV";
		vehicleClass = "Car";
	};

	class GVAR(opfor_kamaz): LOP_UKR_KAMAZ_Covered {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier4);
		displayName = "Truck (Covered)";
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";
		delete dlc;
	};

	class GVAR(opfor_yamaha): PO_AFR_RDS_tt650_Civ_01 {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier5);
		displayName = "Crossbike";
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";
		delete dlc;
		typicalCargo[] = {QGVAR(opfor_soldier1)};
	};


	class GVAR(opfor_md500): C_Heli_Light_01_civil_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier5);
		displayName = "MD-500";
		vehicleClass = "Air";
		typicalCargo[] = {QGVAR(opfor_soldier1)};
	};

	class GVAR(opfor_orca): MU_CIV_Orca {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier5);
		displayName = "Orca";
		vehicleClass = "Air";
		typicalCargo[] = {QGVAR(opfor_soldier1)};
	};


	class GVAR(opfor_cessna): C_Plane_Civil_01_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier5);
		displayName = "Cessna";
		vehicleClass = "Air";
		typicalCargo[] = {QGVAR(opfor_soldier1)};
	};

	class GVAR(opfor_doppeldecker): RHS_AN2 {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier5);
		displayName = "Doppeldecker";
		vehicleClass = "Air";
		typicalCargo[] = {QGVAR(opfor_soldier1)};
	};




	class GVAR(opfor_mg_high): RHS_M2StaticMG_USMC_WD {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier1);
		displayName = "Machine Gun (High)";
	};

	class GVAR(opfor_mg_low): RHS_M2StaticMG_MiniTripod_USMC_WD {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier1);
		displayName = "Machine Gun (Low)";
	};

	class GVAR(opfor_mortar): RHS_M252_USMC_WD {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier1);
		displayName = "Mortar";
	};

	class GVAR(opfor_antiair): RHS_zu23_MSV {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_soldier1);
		displayName = "Anti-Air";
		typicalCargo[] = {QGVAR(opfor_soldier3)};
	};

	class GVAR(opfor_paratrike): sab_paratrike_west {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 0;
			faction = QGVAR(opfor);
			crew = QGVAR(opfor_soldier5);
			displayName = "Paratrike";
			vehicleClass = "Air";
			typicalCargo[] = {QGVAR(opfor_soldier1)};
	};

	class GVAR(opfor_paraglider): sab_paraglider {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 0;
			faction = QGVAR(opfor);
			crew = QGVAR(opfor_soldier5);
			displayName = "Paraglider";
			vehicleClass = "Air";
			typicalCargo[] = {QGVAR(opfor_soldier1)};
	};

	class GVAR(opfor_gladiator): sab_gladiator {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 0;
			faction = QGVAR(opfor);
			crew = QGVAR(opfor_soldier5);
			displayName = "Gladiator";
			vehicleClass = "Air";
			typicalCargo[] = {QGVAR(opfor_soldier1)};
	};

	class GVAR(opfor_mustang): sab_mustang {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 0;
			faction = QGVAR(opfor);
			crew = QGVAR(opfor_soldier5);
			displayName = "Mustang";
			vehicleClass = "Air";
			typicalCargo[] = {QGVAR(opfor_soldier1)};
	};

	class GVAR(opfor_texan): sab_texan {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 0;
			faction = QGVAR(opfor);
			crew = QGVAR(opfor_soldier5);
			displayName = "Texan";
			vehicleClass = "Air";
			typicalCargo[] = {QGVAR(opfor_soldier1)};
	};

	class GVAR(opfor_ultralight): sab_ultralight {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 0;
			faction = QGVAR(opfor);
			crew = QGVAR(opfor_soldier5);
			displayName = "Ultralight";
			vehicleClass = "Air";
			typicalCargo[] = {QGVAR(opfor_soldier1)};
	};

	class GVAR(opfor_uh1h): rhs_uh1h_hidf {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		displayName = "UH-1H";
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_pilot);
		typicalCargo[] = {QGVAR(opfor_pilot)};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
		//hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
	};

	class GVAR(opfor_uh1h_gunship): rhs_uh1h_hidf_gunship {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		displayName = "UH-1H Gunship";
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_pilot);
		typicalCargo[] = {QGVAR(opfor_pilot)};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
		//hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
	};

	class GVAR(opfor_uh1h_unarmed): rhs_uh1h_hidf_unarmed {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		displayName = "UH-1H Unarmed";
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_pilot);
		typicalCargo[] = {QGVAR(opfor_pilot)};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
		//hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
	};

	class GVAR(opfor_mozzie_black): RwG_Mozzie_Carl_Black {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		displayName = "Mosquito Black";
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_pilot);
	};

	class GVAR(opfor_mozzie_red): RwG_Mozzie_Carl_Red {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		displayName = "Mosquito Red";
		faction = QGVAR(opfor);
		crew = QGVAR(opfor_pilot);
	};

};
