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
	class Module_F: Logic
	{
			class EventHandlers;
			class ModuleDescription;

			class AttributesBase
	{
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

	class keko_redneck_ModuleBase3den: Module_F
	{
			scope              = 2;
			scopeCurator       = 1;
			displayName        = "Base";
			category           = "keko_redneck";
			function           = "keko_redneck_fnc_moduleBase3den";
			functionPriority   = 1;
			isGlobal           = 1;
			isTriggerActivated = 1;
			isDisposable       = 0;
			icon = "\keko_redneck\icons\icon_base.pac";

			class Attributes: AttributesBase
			{

			};
	};

	class keko_redneck_ModuleAirport3den: Module_F
	{
			scope              = 2;
			scopeCurator       = 1;
			displayName        = "POI - Airport";
			category           = "keko_redneck";
			function           = "keko_redneck_fnc_moduleAirport3den";
			functionPriority   = 1;
			isGlobal           = 1;
			isTriggerActivated = 1;
			isDisposable       = 0;
			icon = "\keko_redneck\icons\icon_airport.pac";

			class Attributes: AttributesBase
	{
					class id: Edit {
							property = "keko_redneck_ModuleAirport3den_id";
							displayName = "ID";
							typeName = "STRING";
							defaultValue = "''";
					};
		};
	};
	class keko_redneck_ModuleDollar3den: Module_F
	{
			scope              = 2;
			scopeCurator       = 1;
			displayName        = "POI - Dollar";
			category           = "keko_redneck";
			function           = "keko_redneck_fnc_moduleDollar3den";
			functionPriority   = 1;
			isGlobal           = 1;
			isTriggerActivated = 1;
			isDisposable       = 0;
			icon = "\keko_redneck\icons\icon_dollar.pac";

			class Attributes: AttributesBase
			{
					class id: Edit {
							property = "keko_redneck_ModuleDollar3den_id";
							displayName = "ID";
							typeName = "STRING";
							defaultValue = "''";
					};
			};
	};
	class keko_redneck_ModuleFlag3den: Module_F
	{
			scope              = 2;
			scopeCurator       = 1;
			displayName        = "POI - Flag";
			category           = "keko_redneck";
			function           = "keko_redneck_fnc_moduleFlag3den";
			functionPriority   = 1;
			isGlobal           = 1;
			isTriggerActivated = 1;
			isDisposable       = 0;
			icon = "\keko_redneck\icons\icon_flag.pac";

			class Attributes: AttributesBase
			{
					class id: Edit {
							property = "keko_redneck_ModuleFlag3den_id";
							displayName = "ID";
							typeName = "STRING";
							defaultValue = "''";
					};
			};
	};
	class keko_redneck_ModuleFuel3den: Module_F
	{
			scope              = 2;
			scopeCurator       = 1;
			displayName        = "POI - Fuel";
			category           = "keko_redneck";
			function           = "keko_redneck_fnc_moduleFuel3den";
			functionPriority   = 1;
			isGlobal           = 1;
			isTriggerActivated = 1;
			isDisposable       = 0;
			icon = "\keko_redneck\icons\icon_fuel.pac";

			class Attributes: AttributesBase
			{
					class id: Edit {
							property = "keko_redneck_ModuleFuel3den_id";
							displayName = "ID";
							typeName = "STRING";
							defaultValue = "''";
					};
			};
	};
	class keko_redneck_ModuleRadiotower3den: Module_F
	{
			scope              = 2;
			scopeCurator       = 1;
			displayName        = "POI - Radiotower";
			category           = "keko_redneck";
			function           = "keko_redneck_fnc_moduleRadiotower3den";
			functionPriority   = 1;
			isGlobal           = 1;
			isTriggerActivated = 1;
			isDisposable       = 0;
			icon = "\keko_redneck\icons\icon_radiotower.pac";

			class Attributes: AttributesBase
			{
					class id: Edit {
							property = "keko_redneck_ModuleRadiotower3den_id";
							displayName = "ID";
							typeName = "STRING";
							defaultValue = "''";
					};
			};
	};
	class keko_redneck_ModuleResearch3den: Module_F
	{
			scope              = 2;
			scopeCurator       = 1;
			displayName        = "POI - Research";
			category           = "keko_redneck";
			function           = "keko_redneck_fnc_moduleResearch3den";
			functionPriority   = 1;
			isGlobal           = 1;
			isTriggerActivated = 1;
			isDisposable       = 0;
			icon = "\keko_redneck\icons\icon_research.pac";

			class Attributes: AttributesBase
			{
					class id: Edit {
							property = "keko_redneck_ModuleResearch3den_id";
							displayName = "ID";
							typeName = "STRING";
							defaultValue = "''";
					};
			};
	};




	class FlagCarrier;
	class keko_redneck_flag: FlagCarrier {
		scope = 2;
		scopeCurator = 2;
		displayName = "Flag (Redneck)";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\keko_redneck\images\redneck_flag.paa'";
		};
	};

	class Banner_01_base_F;
	class keko_redneck_banner: Banner_01_base_F {
		scope = 2;
		scopeCurator = 2;
		displayName = "Banner (Redneck)";
		hiddenSelectionsTextures[] = {"\keko_redneck\images\redneck_flag.paa"};
	};






	//units
	class SoldierWB;
	class B_Soldier_base_F : SoldierWB {
	class EventHandlers;
	modelsides[] = {3,2,1,0};
	};

	class keko_redneck_blufor_soldier_base : B_Soldier_base_F {
	    author = "Schwaggot";
	    scope = 1;
	    curatorScope = 1;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
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

	class keko_redneck_blufor_soldier1 : keko_redneck_blufor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Rifleman (HK416)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMA_HK416afg","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_blufor_soldier2 : keko_redneck_blufor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Rifleman (MP5K)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMG_05_F","hgun_P07_F","Throw","Put"};
	    magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_blufor_soldier3 : keko_redneck_blufor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Rifleman (M4)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMA_M4afgSTOCK","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_blufor_soldier4 : keko_redneck_blufor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Rifleman (Mk18)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMA_MK18afgTANBLK","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_blufor_soldier5 : keko_redneck_blufor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Rifleman (M16)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"rhs_weap_m16a4_carryhandle","hgun_P07_F","Throw","Put"};
	    magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_blufor_soldier6 : keko_redneck_blufor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Rifleman (Shotgun)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"rhs_weap_M590_8RD","hgun_P07_F","Throw","Put"};
	    magazines[] = {"rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_blufor_soldier7 : keko_redneck_blufor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Rifleman (AKM)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"rhs_weap_akmn","hgun_P07_F","Throw","Put"};
	    magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};




	class keko_redneck_blufor_grenadier1 : keko_redneck_blufor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Grenadier (M4)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"rhs_weap_m4_m203","hgun_P07_F","Throw","Put"};
	    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_blufor_grenadier2 : keko_redneck_blufor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Grenadier (HK416)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMA_HK416GL","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};



	class keko_redneck_blufor_rifleman_at : keko_redneck_blufor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Rifleman AT";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMA_HK416afg","rhs_weap_M136_hedp","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	    icon = "iconManAT";
	};





	class keko_redneck_blufor_minimi : keko_redneck_blufor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Autorifleman (Minimi)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"sma_minimi_mk3_762tlb","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_150Rnd_762_M80A1_Mixed","SMA_150Rnd_762_M80A1_Mixed","SMA_150Rnd_762_M80A1_Mixed","SMA_150Rnd_762_M80A1_Mixed","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	    icon = "iconManMG";
	};

	class keko_redneck_blufor_m60 : keko_redneck_blufor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Machine Gunner (M60)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"hlc_lmg_m60","hgun_P07_F","Throw","Put"};
	    magazines[] = {"hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	    icon = "iconManMG";
	};




	class keko_redneck_blufor_medic : keko_redneck_blufor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Medic";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "B_AssaultPack_rgr_Medic";
	    weapons[] = {"SMG_05_F","hgun_P07_F","Throw","Put"};
	    magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	    icon = "iconManMedic";
	};



	class keko_redneck_blufor_sniper : keko_redneck_blufor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Sniper";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"rhs_weap_XM2010_wd_leu","hgun_P07_F","Throw","Put"};
	    magazines[] = {"rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit","optic_lrps"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_blufor_sniper_sws : keko_redneck_blufor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Sniper (SWS)";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"rhs_weap_m24sws_leu","hgun_P07_F","Throw","Put"};
	    magazines[] = {"rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit","optic_lrps"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_blufor_marksman : keko_redneck_blufor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Marksman";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"rhs_weap_m14ebrri_leu","hgun_P07_F","Throw","Put"};
	    magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit","optic_lrps"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};



	class keko_redneck_blufor_ftl : keko_redneck_blufor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Team Leader";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMA_HK416afg","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	    icon = "iconManLeader";
	};

	class keko_redneck_blufor_pilot : keko_redneck_blufor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Pilot";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMA_HK416afg","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

			class EventHandlers: EventHandlers {
	         init = "if (local (_this select 0)) then { _unit = (_this select 0); _uniform = selectRandom ['TRYK_shirts_DENIM_BK','TRYK_shirts_DENIM_BL','TRYK_shirts_DENIM_BWH','TRYK_shirts_DENIM_od','TRYK_shirts_DENIM_R','TRYK_shirts_DENIM_RED2','TRYK_shirts_DENIM_WH','TRYK_shirts_DENIM_WHB','TRYK_shirts_DENIM_ylb','TRYK_shirts_DENIM_od_Sleeve','TRYK_shirts_DENIM_ylb_Sleeve','TRYK_shirts_DENIM_BK_Sleeve','TRYK_shirts_DENIM_BL_Sleeve','TRYK_shirts_DENIM_BWH_Sleeve','TRYK_shirts_DENIM_R_Sleeve','TRYK_shirts_DENIM_RED2_Sleeve','TRYK_shirts_DENIM_WH_Sleeve','TRYK_shirts_DENIM_WHB_Sleeve']; _unit forceAddUniform _uniform; _unit addHeadgear 'H_Cap_marshal'; _vest = selectRandom ['lbt_light_od','lbt_light_coy','VSM_OGA_OD_IOTV_1','VSM_OGA_IOTV_1','VSM_LBT1961_OGA_OD','VSM_LBT1961_GRN','VSM_LBT1961_CB','VSM_LBT1961_Black','TRYK_V_TacVest_coyo','TRYK_V_PlateCarrier_blk_L','TRYK_V_PlateCarrier_coyo_L','LOP_V_CarrierLite_OLV','V_TacVest_oli','V_TacVest_khk','V_TacVest_brn','V_BandollierB_oli','V_BandollierB_khk','V_BandollierB_rgr','V_BandollierB_cbr','V_BandollierB_blk']; _unit addVest _vest;};";
	    };
	};


	// vehicles
	class C_Offroad_01_F;
	class keko_redneck_blufor_offroad: C_Offroad_01_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier1";
	    typicalCargo[] = {"keko_redneck_blufor_soldier2"};
	    displayName = "Pickup";
	    vehicleClass = "Car";
	    animationList[] = {"HideBumper1",0,"HideBumper2",0,"HideConstruction",0.4,"HideDoor3",0};
	};

	class LOP_AFR_OPF_Offroad_M2;
	class keko_redneck_blufor_offroad_mg: LOP_AFR_OPF_Offroad_M2 {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier1";
	    typicalCargo[] = {"keko_redneck_blufor_soldier2"};
	    displayName = "Pickup (MG)";
	    vehicleClass = "Car";
	    animationList[] = {"HideBumper1",0,"HideBumper2",0,"HideConstruction",0.4,"HideDoor3",0};
	    editorSubcategory = "EdSubcat_Cars";
	    delete dlc;
	};

	class C_Offroad_02_unarmed_F;
	class keko_redneck_blufor_jeep: C_Offroad_02_unarmed_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier1";
	    typicalCargo[] = {"keko_redneck_blufor_soldier2"};
	    displayName = "Jeep";
	    vehicleClass = "Car";
	};

	class I_C_Offroad_02_LMG_F;
	class keko_redneck_blufor_jeep_mg: I_C_Offroad_02_LMG_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier1";
	    typicalCargo[] = {"keko_redneck_blufor_soldier2"};
	    displayName = "Jeep (MG)";
	    vehicleClass = "Car";
	};



	class C_Van_01_transport_F;
	class keko_redneck_blufor_truck_cargo: C_Van_01_transport_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier2";
	    displayName = "Truck (Cargo)";
	    vehicleClass = "Car";
	};

	class C_Quadbike_01_F;
	class keko_redneck_blufor_quadbike: C_Quadbike_01_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier1";
	    displayName = "Quadbike";
	    vehicleClass = "Car";
	};

	class C_Van_02_vehicle_F;
	class keko_redneck_blufor_van_cargo: C_Van_02_vehicle_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier2";
	    displayName = "Van (Cargo)";
	    vehicleClass = "Car";
	};

	class C_Van_02_transport_F;
	class keko_redneck_blufor_van_transport: C_Van_02_transport_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier2";
	    displayName = "Van (Transport)";
	    vehicleClass = "Car";
	};


	class LOP_ISTS_M998_D_4DR;
	class keko_redneck_blufor_humvee: LOP_ISTS_M998_D_4DR {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier3";
	    displayName = "Humvee";
	    vehicleClass = "Car";
	    editorSubcategory = "EdSubcat_Cars";
	    delete dlc;
	};

	class C_SUV_01_F;
	class keko_redneck_blufor_suv: C_SUV_01_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier4";
	    displayName = "SUV";
	    vehicleClass = "Car";
	};

	class LOP_UKR_KAMAZ_Covered;
	class keko_redneck_blufor_kamaz: LOP_UKR_KAMAZ_Covered {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier4";
	    displayName = "Truck (Covered)";
	    vehicleClass = "Car";
	    editorSubcategory = "EdSubcat_Cars";
	    delete dlc;
	};

	class PO_AFR_RDS_tt650_Civ_01;
	class keko_redneck_blufor_yamaha: PO_AFR_RDS_tt650_Civ_01 {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier5";
	    displayName = "Crossbike";
	    vehicleClass = "Car";
	    editorSubcategory = "EdSubcat_Cars";
	    delete dlc;
	    typicalCargo[] = {"keko_redneck_blufor_soldier1"};
	};


	class C_Heli_Light_01_civil_F;
	class keko_redneck_blufor_md500: C_Heli_Light_01_civil_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier5";
	    displayName = "MD-500";
	    vehicleClass = "Air";
	    typicalCargo[] = {"keko_redneck_blufor_soldier1"};
	};

	class MU_CIV_Orca;
	class keko_redneck_blufor_orca: MU_CIV_Orca {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier5";
	    displayName = "Orca";
	    vehicleClass = "Air";
	    typicalCargo[] = {"keko_redneck_blufor_soldier1"};
	};


	class C_Plane_Civil_01_F;
	class keko_redneck_blufor_cessna: C_Plane_Civil_01_F {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier5";
	    displayName = "Cessna";
	    vehicleClass = "Air";
	    typicalCargo[] = {"keko_redneck_blufor_soldier1"};
	};

	class RHS_AN2;
	class keko_redneck_blufor_doppeldecker: RHS_AN2 {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier5";
	    displayName = "Doppeldecker";
	    vehicleClass = "Air";
	    typicalCargo[] = {"keko_redneck_blufor_soldier1"};
	};





	class RHS_M2StaticMG_USMC_WD;
	class keko_redneck_blufor_mg_high: RHS_M2StaticMG_USMC_WD {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier1";
	    displayName = "Machine Gun (High)";
	};

	class RHS_M2StaticMG_MiniTripod_USMC_WD;
	class keko_redneck_blufor_mg_low: RHS_M2StaticMG_MiniTripod_USMC_WD {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier1";
	    displayName = "Machine Gun (Low)";
	};

	class RHS_M252_USMC_WD;
	class keko_redneck_blufor_mortar: RHS_M252_USMC_WD {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier1";
	    displayName = "Mortar";
	};

	class RHS_zu23_MSV;
	class keko_redneck_blufor_antiair: RHS_zu23_MSV {
	    author = "Schwaggot";
	    scope = 2;
	    curatorScope = 2;
	    side = 1;
	    faction = "keko_faction_redneck_blufor";
	    crew = "keko_redneck_blufor_soldier1";
	    displayName = "Anti-Air";
	    typicalCargo[] = {"keko_redneck_blufor_soldier3"};
	};










	class sab_paratrike_west;
	class keko_redneck_blufor_paratrike: sab_paratrike_west {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 1;
			faction = "keko_faction_redneck_blufor";
			crew = "keko_redneck_blufor_soldier5";
			displayName = "Paratrike";
			vehicleClass = "Air";
			typicalCargo[] = {"keko_redneck_blufor_soldier1"};
	};

	class sab_paraglider;
	class keko_redneck_blufor_paraglider: sab_paraglider {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 1;
			faction = "keko_faction_redneck_blufor";
			crew = "keko_redneck_blufor_soldier5";
			displayName = "Paraglider";
			vehicleClass = "Air";
			typicalCargo[] = {"keko_redneck_blufor_soldier1"};
	};

	class sab_gladiator;
	class keko_redneck_blufor_gladiator: sab_gladiator {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 1;
			faction = "keko_faction_redneck_blufor";
			crew = "keko_redneck_blufor_soldier5";
			displayName = "Gladiator";
			vehicleClass = "Air";
			typicalCargo[] = {"keko_redneck_blufor_soldier1"};
	};

	class sab_mustang;
	class keko_redneck_blufor_mustang: sab_mustang {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 1;
			faction = "keko_faction_redneck_blufor";
			crew = "keko_redneck_blufor_soldier5";
			displayName = "Mustang";
			vehicleClass = "Air";
			typicalCargo[] = {"keko_redneck_blufor_soldier1"};
	};

	class sab_texan;
	class keko_redneck_blufor_texan: sab_texan {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 1;
			faction = "keko_faction_redneck_blufor";
			crew = "keko_redneck_blufor_soldier5";
			displayName = "Texan";
			vehicleClass = "Air";
			typicalCargo[] = {"keko_redneck_blufor_soldier1"};
	};

	class sab_ultralight;
	class keko_redneck_blufor_ultralight: sab_ultralight {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 1;
			faction = "keko_faction_redneck_blufor";
			crew = "keko_redneck_blufor_soldier5";
			displayName = "Ultralight";
			vehicleClass = "Air";
			typicalCargo[] = {"keko_redneck_blufor_soldier1"};
	};


	class rhs_uh1h_hidf;
	class keko_redneck_blufor_uh1h: rhs_uh1h_hidf {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		displayName = "UH-1H";
		faction = "keko_faction_redneck_blufor";
		crew = "keko_redneck_blufor_pilot";
		typicalCargo[] = {"keko_redneck_blufor_pilot"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
	};

	class rhs_uh1h_hidf_gunship;
	class keko_redneck_blufor_uh1h_gunship: rhs_uh1h_hidf_gunship {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		displayName = "UH-1H Gunship";
		faction = "keko_faction_redneck_blufor";
		crew = "keko_redneck_blufor_pilot";
		typicalCargo[] = {"keko_redneck_blufor_pilot"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
	};

	class rhs_uh1h_hidf_unarmed;
	class keko_redneck_blufor_uh1h_unarmed: rhs_uh1h_hidf_unarmed {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		displayName = "UH-1H Unarmed";
		faction = "keko_faction_redneck_blufor";
		crew = "keko_redneck_blufor_pilot";
		typicalCargo[] = {"keko_redneck_blufor_pilot"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
	};

	class RwG_Mozzie_Carl_Black;
	class keko_redneck_blufor_mozzie_black: RwG_Mozzie_Carl_Black {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		displayName = "Mosquito Black";
		faction = "keko_faction_redneck_blufor";
		crew = "keko_redneck_blufor_pilot";
	};

	class RwG_Mozzie_Carl_Red;
	class keko_redneck_blufor_mozzie_red: RwG_Mozzie_Carl_Red {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		displayName = "Mosquito Red";
		faction = "keko_faction_redneck_blufor";
		crew = "keko_redneck_blufor_pilot";
	};












	//units
	class SoldierGB;
	class I_Soldier_base_F : SoldierGB {
		class EventHandlers;
		modelsides[] = {3,2,1,0};
	};

	class keko_redneck_indfor_soldier_base : I_Soldier_base_F {
		author = "Schwaggot";
		scope = 1;
		curatorScope = 1;
		side = 2;
		faction = "keko_faction_redneck_indfor";
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

	class keko_redneck_indfor_soldier1 : keko_redneck_indfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (HK416)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_HK416afg","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_indfor_soldier2 : keko_redneck_indfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (MP5K)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMG_05_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_indfor_soldier3 : keko_redneck_indfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (M4)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_M4afgSTOCK","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_indfor_soldier4 : keko_redneck_indfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (Mk18)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_MK18afgTANBLK","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_indfor_soldier5 : keko_redneck_indfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (M16)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_m16a4_carryhandle","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_indfor_soldier6 : keko_redneck_indfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (Shotgun)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_M590_8RD","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_indfor_soldier7 : keko_redneck_indfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (AKM)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_akmn","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};




	class keko_redneck_indfor_grenadier1 : keko_redneck_indfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Grenadier (M4)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_m4_m203","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_indfor_grenadier2 : keko_redneck_indfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Grenadier (HK416)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_HK416GL","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};



	class keko_redneck_indfor_rifleman_at : keko_redneck_indfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman AT";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_HK416afg","rhs_weap_M136_hedp","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManAT";
	};





	class keko_redneck_indfor_minimi : keko_redneck_indfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Autorifleman (Minimi)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"sma_minimi_mk3_762tlb","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_150Rnd_762_M80A1_Mixed","SMA_150Rnd_762_M80A1_Mixed","SMA_150Rnd_762_M80A1_Mixed","SMA_150Rnd_762_M80A1_Mixed","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManMG";
	};

	class keko_redneck_indfor_m60 : keko_redneck_indfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Machine Gunner (M60)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"hlc_lmg_m60","hgun_P07_F","Throw","Put"};
		magazines[] = {"hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManMG";
	};




	class keko_redneck_indfor_medic : keko_redneck_indfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Medic";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "B_AssaultPack_rgr_Medic";
		weapons[] = {"SMG_05_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManMedic";
	};



	class keko_redneck_indfor_sniper : keko_redneck_indfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Sniper";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_XM2010_wd_leu","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit","optic_lrps"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_indfor_sniper_sws : keko_redneck_indfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Sniper (SWS)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_m24sws_leu","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit","optic_lrps"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_indfor_marksman : keko_redneck_indfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Marksman";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_m14ebrri_leu","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit","optic_lrps"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};



	class keko_redneck_indfor_ftl : keko_redneck_indfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Team Leader";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_HK416afg","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManLeader";
	};
	class keko_redneck_indfor_pilot : keko_redneck_indfor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Pilot";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMA_HK416afg","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

			class EventHandlers: EventHandlers {
	         init = "if (local (_this select 0)) then { _unit = (_this select 0); _uniform = selectRandom ['TRYK_shirts_DENIM_BK','TRYK_shirts_DENIM_BL','TRYK_shirts_DENIM_BWH','TRYK_shirts_DENIM_od','TRYK_shirts_DENIM_R','TRYK_shirts_DENIM_RED2','TRYK_shirts_DENIM_WH','TRYK_shirts_DENIM_WHB','TRYK_shirts_DENIM_ylb','TRYK_shirts_DENIM_od_Sleeve','TRYK_shirts_DENIM_ylb_Sleeve','TRYK_shirts_DENIM_BK_Sleeve','TRYK_shirts_DENIM_BL_Sleeve','TRYK_shirts_DENIM_BWH_Sleeve','TRYK_shirts_DENIM_R_Sleeve','TRYK_shirts_DENIM_RED2_Sleeve','TRYK_shirts_DENIM_WH_Sleeve','TRYK_shirts_DENIM_WHB_Sleeve']; _unit forceAddUniform _uniform; _unit addHeadgear 'H_Cap_marshal'; _vest = selectRandom ['lbt_light_od','lbt_light_coy','VSM_OGA_OD_IOTV_1','VSM_OGA_IOTV_1','VSM_LBT1961_OGA_OD','VSM_LBT1961_GRN','VSM_LBT1961_CB','VSM_LBT1961_Black','TRYK_V_TacVest_coyo','TRYK_V_PlateCarrier_blk_L','TRYK_V_PlateCarrier_coyo_L','LOP_V_CarrierLite_OLV','V_TacVest_oli','V_TacVest_khk','V_TacVest_brn','V_BandollierB_oli','V_BandollierB_khk','V_BandollierB_rgr','V_BandollierB_cbr','V_BandollierB_blk']; _unit addVest _vest;};";
	    };
	};


	// vehicles
	class keko_redneck_indfor_offroad: C_Offroad_01_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier1";
		typicalCargo[] = {"keko_redneck_indfor_soldier2"};
		displayName = "Pickup";
		vehicleClass = "Car";
		animationList[] = {"HideBumper1",0,"HideBumper2",0,"HideConstruction",0.4,"HideDoor3",0};
	};

	class keko_redneck_indfor_offroad_mg: LOP_AFR_OPF_Offroad_M2 {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier1";
		typicalCargo[] = {"keko_redneck_indfor_soldier2"};
		displayName = "Pickup (MG)";
		vehicleClass = "Car";
		animationList[] = {"HideBumper1",0,"HideBumper2",0,"HideConstruction",0.4,"HideDoor3",0};
		editorSubcategory = "EdSubcat_Cars";
		delete dlc;
	};

	class keko_redneck_indfor_jeep: C_Offroad_02_unarmed_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier1";
		typicalCargo[] = {"keko_redneck_indfor_soldier2"};
		displayName = "Jeep";
		vehicleClass = "Car";
	};

	class keko_redneck_indfor_jeep_mg: I_C_Offroad_02_LMG_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier1";
		typicalCargo[] = {"keko_redneck_indfor_soldier2"};
		displayName = "Jeep (MG)";
		vehicleClass = "Car";
	};

	class keko_redneck_indfor_truck_cargo: C_Van_01_transport_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier2";
		displayName = "Truck (Cargo)";
		vehicleClass = "Car";
	};

	class keko_redneck_indfor_quadbike: C_Quadbike_01_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier1";
		displayName = "Quadbike";
		vehicleClass = "Car";
	};

	class keko_redneck_indfor_van_cargo: C_Van_02_vehicle_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier2";
		displayName = "Van (Cargo)";
		vehicleClass = "Car";
	};

	class keko_redneck_indfor_van_transport: C_Van_02_transport_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier2";
		displayName = "Van (Transport)";
		vehicleClass = "Car";
	};

	class keko_redneck_indfor_humvee: LOP_ISTS_M998_D_4DR {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier3";
		displayName = "Humvee";
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";
		delete dlc;
	};

	class keko_redneck_indfor_suv: C_SUV_01_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier4";
		displayName = "SUV";
		vehicleClass = "Car";
	};

	class keko_redneck_indfor_kamaz: LOP_UKR_KAMAZ_Covered {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier4";
		displayName = "Truck (Covered)";
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";
		delete dlc;
	};

	class keko_redneck_indfor_yamaha: PO_AFR_RDS_tt650_Civ_01 {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier5";
		displayName = "Crossbike";
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";
		delete dlc;
		typicalCargo[] = {"keko_redneck_indfor_soldier1"};
	};

	class keko_redneck_indfor_md500: C_Heli_Light_01_civil_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier5";
		displayName = "MD-500";
		vehicleClass = "Air";
		typicalCargo[] = {"keko_redneck_indfor_soldier1"};
	};

	class keko_redneck_indfor_orca: MU_CIV_Orca {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier5";
		displayName = "Orca";
		vehicleClass = "Air";
		typicalCargo[] = {"keko_redneck_indfor_soldier1"};
	};

	class keko_redneck_indfor_cessna: C_Plane_Civil_01_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier5";
		displayName = "Cessna";
		vehicleClass = "Air";
		typicalCargo[] = {"keko_redneck_indfor_soldier1"};
	};

	class keko_redneck_indfor_doppeldecker: RHS_AN2 {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier5";
		displayName = "Doppeldecker";
		vehicleClass = "Air";
		typicalCargo[] = {"keko_redneck_indfor_soldier1"};
	};

	class keko_redneck_indfor_mg_high: RHS_M2StaticMG_USMC_WD {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier1";
		displayName = "Machine Gun (High)";
	};

	class keko_redneck_indfor_mg_low: RHS_M2StaticMG_MiniTripod_USMC_WD {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier1";
		displayName = "Machine Gun (Low)";
	};

	class keko_redneck_indfor_mortar: RHS_M252_USMC_WD {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier1";
		displayName = "Mortar";
	};

	class keko_redneck_indfor_antiair: RHS_zu23_MSV {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 2;
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_soldier1";
		displayName = "Anti-Air";
		typicalCargo[] = {"keko_redneck_indfor_soldier3"};
	};

	class keko_redneck_indfor_paratrike: sab_paratrike_west {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 2;
			faction = "keko_faction_redneck_indfor";
			crew = "keko_redneck_indfor_soldier5";
			displayName = "Paratrike";
			vehicleClass = "Air";
			typicalCargo[] = {"keko_redneck_indfor_soldier1"};
	};

	class keko_redneck_indfor_paraglider: sab_paraglider {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 2;
			faction = "keko_faction_redneck_indfor";
			crew = "keko_redneck_indfor_soldier5";
			displayName = "Paraglider";
			vehicleClass = "Air";
			typicalCargo[] = {"keko_redneck_indfor_soldier1"};
	};

	class keko_redneck_indfor_gladiator: sab_gladiator {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 2;
			faction = "keko_faction_redneck_indfor";
			crew = "keko_redneck_indfor_soldier5";
			displayName = "Gladiator";
			vehicleClass = "Air";
			typicalCargo[] = {"keko_redneck_indfor_soldier1"};
	};

	class keko_redneck_indfor_mustang: sab_mustang {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 2;
			faction = "keko_faction_redneck_indfor";
			crew = "keko_redneck_indfor_soldier5";
			displayName = "Mustang";
			vehicleClass = "Air";
			typicalCargo[] = {"keko_redneck_indfor_soldier1"};
	};

	class keko_redneck_indfor_texan: sab_texan {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 2;
			faction = "keko_faction_redneck_indfor";
			crew = "keko_redneck_indfor_soldier5";
			displayName = "Texan";
			vehicleClass = "Air";
			typicalCargo[] = {"keko_redneck_indfor_soldier1"};
	};

	class keko_redneck_indfor_ultralight: sab_ultralight {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 2;
			faction = "keko_faction_redneck_indfor";
			crew = "keko_redneck_indfor_soldier5";
			displayName = "Ultralight";
			vehicleClass = "Air";
			typicalCargo[] = {"keko_redneck_indfor_soldier1"};
	};

	class keko_redneck_indfor_uh1h: rhs_uh1h_hidf {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "UH-1H";
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_pilot";
		typicalCargo[] = {"keko_redneck_indfor_pilot"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
	};

	class keko_redneck_indfor_uh1h_gunship: rhs_uh1h_hidf_gunship {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "UH-1H Gunship";
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_pilot";
		typicalCargo[] = {"keko_redneck_indfor_pilot"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
	};

	class keko_redneck_indfor_uh1h_unarmed: rhs_uh1h_hidf_unarmed {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "UH-1H Unarmed";
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_pilot";
		typicalCargo[] = {"keko_redneck_indfor_pilot"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
	};

	class keko_redneck_indfor_mozzie_black: RwG_Mozzie_Carl_Black {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Mosquito Black";
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_pilot";
	};

	class keko_redneck_indfor_mozzie_red: RwG_Mozzie_Carl_Red {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Mosquito Red";
		faction = "keko_faction_redneck_indfor";
		crew = "keko_redneck_indfor_pilot";
	};




















	class SoldierEB;
	class O_Soldier_base_F : SoldierEB {
		class EventHandlers;
		modelsides[] = {3,2,1,0};
	};

	class keko_redneck_opfor_soldier_base : O_Soldier_base_F {
		author = "Schwaggot";
		scope = 1;
		curatorScope = 1;
		side = 0;
		faction = "keko_faction_redneck_opfor";
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

	class keko_redneck_opfor_soldier1 : keko_redneck_opfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (HK416)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_HK416afg","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_opfor_soldier2 : keko_redneck_opfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (MP5K)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMG_05_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_opfor_soldier3 : keko_redneck_opfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (M4)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_M4afgSTOCK","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_opfor_soldier4 : keko_redneck_opfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (Mk18)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_MK18afgTANBLK","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_opfor_soldier5 : keko_redneck_opfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (M16)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_m16a4_carryhandle","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_opfor_soldier6 : keko_redneck_opfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (Shotgun)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_M590_8RD","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_opfor_soldier7 : keko_redneck_opfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman (AKM)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_akmn","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};




	class keko_redneck_opfor_grenadier1 : keko_redneck_opfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Grenadier (M4)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_m4_m203","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_opfor_grenadier2 : keko_redneck_opfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Grenadier (HK416)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_HK416GL","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};



	class keko_redneck_opfor_rifleman_at : keko_redneck_opfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Rifleman AT";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_HK416afg","rhs_weap_M136_hedp","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManAT";
	};





	class keko_redneck_opfor_minimi : keko_redneck_opfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Autorifleman (Minimi)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"sma_minimi_mk3_762tlb","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_150Rnd_762_M80A1_Mixed","SMA_150Rnd_762_M80A1_Mixed","SMA_150Rnd_762_M80A1_Mixed","SMA_150Rnd_762_M80A1_Mixed","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManMG";
	};

	class keko_redneck_opfor_m60 : keko_redneck_opfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Machine Gunner (M60)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"hlc_lmg_m60","hgun_P07_F","Throw","Put"};
		magazines[] = {"hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManMG";
	};




	class keko_redneck_opfor_medic : keko_redneck_opfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Medic";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "B_AssaultPack_rgr_Medic";
		weapons[] = {"SMG_05_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManMedic";
	};



	class keko_redneck_opfor_sniper : keko_redneck_opfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Sniper";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_XM2010_wd_leu","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit","optic_lrps"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_opfor_sniper_sws : keko_redneck_opfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Sniper (SWS)";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_m24sws_leu","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","rhsusf_5Rnd_762x51_m993_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit","optic_lrps"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class keko_redneck_opfor_marksman : keko_redneck_opfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Marksman";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"rhs_weap_m14ebrri_leu","hgun_P07_F","Throw","Put"};
		magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit","optic_lrps"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};



	class keko_redneck_opfor_ftl : keko_redneck_opfor_soldier_base {
		scope = 2;
		curatorScope = 2;
		displayName = "Team Leader";
		uniform = "TRYK_shirts_DENIM_BL";
		backpack = "";
		weapons[] = {"SMA_HK416afg","hgun_P07_F","Throw","Put"};
		magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManLeader";
	};
	class keko_redneck_opfor_pilot : keko_redneck_opfor_soldier_base {
	    scope = 2;
	    curatorScope = 2;
	    displayName = "Pilot";
	    uniform = "TRYK_shirts_DENIM_BL";
	    backpack = "";
	    weapons[] = {"SMA_HK416afg","hgun_P07_F","Throw","Put"};
	    magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	    items[] = {"FirstAidKit"};
	    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

			class EventHandlers: EventHandlers {
	         init = "if (local (_this select 0)) then { _unit = (_this select 0); _uniform = selectRandom ['TRYK_shirts_DENIM_BK','TRYK_shirts_DENIM_BL','TRYK_shirts_DENIM_BWH','TRYK_shirts_DENIM_od','TRYK_shirts_DENIM_R','TRYK_shirts_DENIM_RED2','TRYK_shirts_DENIM_WH','TRYK_shirts_DENIM_WHB','TRYK_shirts_DENIM_ylb','TRYK_shirts_DENIM_od_Sleeve','TRYK_shirts_DENIM_ylb_Sleeve','TRYK_shirts_DENIM_BK_Sleeve','TRYK_shirts_DENIM_BL_Sleeve','TRYK_shirts_DENIM_BWH_Sleeve','TRYK_shirts_DENIM_R_Sleeve','TRYK_shirts_DENIM_RED2_Sleeve','TRYK_shirts_DENIM_WH_Sleeve','TRYK_shirts_DENIM_WHB_Sleeve']; _unit forceAddUniform _uniform; _unit addHeadgear 'H_Cap_marshal'; _vest = selectRandom ['lbt_light_od','lbt_light_coy','VSM_OGA_OD_IOTV_1','VSM_OGA_IOTV_1','VSM_LBT1961_OGA_OD','VSM_LBT1961_GRN','VSM_LBT1961_CB','VSM_LBT1961_Black','TRYK_V_TacVest_coyo','TRYK_V_PlateCarrier_blk_L','TRYK_V_PlateCarrier_coyo_L','LOP_V_CarrierLite_OLV','V_TacVest_oli','V_TacVest_khk','V_TacVest_brn','V_BandollierB_oli','V_BandollierB_khk','V_BandollierB_rgr','V_BandollierB_cbr','V_BandollierB_blk']; _unit addVest _vest;};";
	    };
	};


	// vehicles
	class keko_redneck_opfor_offroad: C_Offroad_01_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier1";
		typicalCargo[] = {"keko_redneck_opfor_soldier2"};
		displayName = "Pickup";
		vehicleClass = "Car";
		animationList[] = {"HideBumper1",0,"HideBumper2",0,"HideConstruction",0.4,"HideDoor3",0};
	};

	class keko_redneck_opfor_offroad_mg: LOP_AFR_OPF_Offroad_M2 {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier1";
		typicalCargo[] = {"keko_redneck_opfor_soldier2"};
		displayName = "Pickup (MG)";
		vehicleClass = "Car";
		animationList[] = {"HideBumper1",0,"HideBumper2",0,"HideConstruction",0.4,"HideDoor3",0};
		editorSubcategory = "EdSubcat_Cars";
		delete dlc;
	};

	class keko_redneck_opfor_jeep: C_Offroad_02_unarmed_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier1";
		typicalCargo[] = {"keko_redneck_opfor_soldier2"};
		displayName = "Jeep";
		vehicleClass = "Car";
	};

	class keko_redneck_opfor_jeep_mg: I_C_Offroad_02_LMG_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier1";
		typicalCargo[] = {"keko_redneck_opfor_soldier2"};
		displayName = "Jeep (MG)";
		vehicleClass = "Car";
	};



	class keko_redneck_opfor_truck_cargo: C_Van_01_transport_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier2";
		displayName = "Truck (Cargo)";
		vehicleClass = "Car";
	};

	class keko_redneck_opfor_quadbike: C_Quadbike_01_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier1";
		displayName = "Quadbike";
		vehicleClass = "Car";
	};

	class keko_redneck_opfor_van_cargo: C_Van_02_vehicle_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier2";
		displayName = "Van (Cargo)";
		vehicleClass = "Car";
	};

	class keko_redneck_opfor_van_transport: C_Van_02_transport_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier2";
		displayName = "Van (Transport)";
		vehicleClass = "Car";
	};


	class keko_redneck_opfor_humvee: LOP_ISTS_M998_D_4DR {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier3";
		displayName = "Humvee";
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";
		delete dlc;
	};

	class keko_redneck_opfor_suv: C_SUV_01_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier4";
		displayName = "SUV";
		vehicleClass = "Car";
	};

	class keko_redneck_opfor_kamaz: LOP_UKR_KAMAZ_Covered {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier4";
		displayName = "Truck (Covered)";
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";
		delete dlc;
	};

	class keko_redneck_opfor_yamaha: PO_AFR_RDS_tt650_Civ_01 {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier5";
		displayName = "Crossbike";
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";
		delete dlc;
		typicalCargo[] = {"keko_redneck_opfor_soldier1"};
	};


	class keko_redneck_opfor_md500: C_Heli_Light_01_civil_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier5";
		displayName = "MD-500";
		vehicleClass = "Air";
		typicalCargo[] = {"keko_redneck_opfor_soldier1"};
	};

	class keko_redneck_opfor_orca: MU_CIV_Orca {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier5";
		displayName = "Orca";
		vehicleClass = "Air";
		typicalCargo[] = {"keko_redneck_opfor_soldier1"};
	};


	class keko_redneck_opfor_cessna: C_Plane_Civil_01_F {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier5";
		displayName = "Cessna";
		vehicleClass = "Air";
		typicalCargo[] = {"keko_redneck_opfor_soldier1"};
	};

	class keko_redneck_opfor_doppeldecker: RHS_AN2 {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier5";
		displayName = "Doppeldecker";
		vehicleClass = "Air";
		typicalCargo[] = {"keko_redneck_opfor_soldier1"};
	};




	class keko_redneck_opfor_mg_high: RHS_M2StaticMG_USMC_WD {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier1";
		displayName = "Machine Gun (High)";
	};

	class keko_redneck_opfor_mg_low: RHS_M2StaticMG_MiniTripod_USMC_WD {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier1";
		displayName = "Machine Gun (Low)";
	};

	class keko_redneck_opfor_mortar: RHS_M252_USMC_WD {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier1";
		displayName = "Mortar";
	};

	class keko_redneck_opfor_antiair: RHS_zu23_MSV {
		author = "Schwaggot";
		scope = 2;
		curatorScope = 2;
		side = 0;
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_soldier1";
		displayName = "Anti-Air";
		typicalCargo[] = {"keko_redneck_opfor_soldier3"};
	};

	class keko_redneck_opfor_paratrike: sab_paratrike_west {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 0;
			faction = "keko_faction_redneck_opfor";
			crew = "keko_redneck_opfor_soldier5";
			displayName = "Paratrike";
			vehicleClass = "Air";
			typicalCargo[] = {"keko_redneck_opfor_soldier1"};
	};

	class keko_redneck_opfor_paraglider: sab_paraglider {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 0;
			faction = "keko_faction_redneck_opfor";
			crew = "keko_redneck_opfor_soldier5";
			displayName = "Paraglider";
			vehicleClass = "Air";
			typicalCargo[] = {"keko_redneck_opfor_soldier1"};
	};

	class keko_redneck_opfor_gladiator: sab_gladiator {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 0;
			faction = "keko_faction_redneck_opfor";
			crew = "keko_redneck_opfor_soldier5";
			displayName = "Gladiator";
			vehicleClass = "Air";
			typicalCargo[] = {"keko_redneck_opfor_soldier1"};
	};

	class keko_redneck_opfor_mustang: sab_mustang {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 0;
			faction = "keko_faction_redneck_opfor";
			crew = "keko_redneck_opfor_soldier5";
			displayName = "Mustang";
			vehicleClass = "Air";
			typicalCargo[] = {"keko_redneck_opfor_soldier1"};
	};

	class keko_redneck_opfor_texan: sab_texan {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 0;
			faction = "keko_faction_redneck_opfor";
			crew = "keko_redneck_opfor_soldier5";
			displayName = "Texan";
			vehicleClass = "Air";
			typicalCargo[] = {"keko_redneck_opfor_soldier1"};
	};

	class keko_redneck_opfor_ultralight: sab_ultralight {
			author = "Schwaggot";
			scope = 2;
			curatorScope = 2;
			side = 0;
			faction = "keko_faction_redneck_opfor";
			crew = "keko_redneck_opfor_soldier5";
			displayName = "Ultralight";
			vehicleClass = "Air";
			typicalCargo[] = {"keko_redneck_opfor_soldier1"};
	};

	class keko_redneck_opfor_uh1h: rhs_uh1h_hidf {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		displayName = "UH-1H";
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_pilot";
		typicalCargo[] = {"keko_redneck_opfor_pilot"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
	};

	class keko_redneck_opfor_uh1h_gunship: rhs_uh1h_hidf_gunship {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		displayName = "UH-1H Gunship";
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_pilot";
		typicalCargo[] = {"keko_redneck_opfor_pilot"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
	};

	class keko_redneck_opfor_uh1h_unarmed: rhs_uh1h_hidf_unarmed {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		displayName = "UH-1H Unarmed";
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_pilot";
		typicalCargo[] = {"keko_redneck_opfor_pilot"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co.paa", "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
	};

	class keko_redneck_opfor_mozzie_black: RwG_Mozzie_Carl_Black {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		displayName = "Mosquito Black";
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_pilot";
	};

	class keko_redneck_opfor_mozzie_red: RwG_Mozzie_Carl_Red {
		author = "Schwaggot";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		displayName = "Mosquito Red";
		faction = "keko_faction_redneck_opfor";
		crew = "keko_redneck_opfor_pilot";
	};

};
