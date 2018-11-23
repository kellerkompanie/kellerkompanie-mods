class kekoFactionSpecOpsTropic: kekoFactionBase {

	name = "[Main] Western Special Forces (Tropic)";
	roles[] = {
		{"Führung", {
			kekoCommand,
			kekoLead,
			kekoSergeant,
			kekoSQL,
			kekoFTL,
			kekoDoctor,
			kekoMedic}},
		{"Plebs", {
			kekoRifleman,
			kekoRiflemanAT,
			kekoGrenadier,
			kekoLMG,
			kekoLMGAsst}},
		{"Support", {
			kekoMarksman,
			kekoEOD,
			kekoEngineer,
			kekoDriver,
			kekoHeliPilot,
			kekoHeliCrew,
			kekoJetPilot,
			kekoJTAC,
			kekoUAVOperator,
			kekoSurvivor}}
	};
	weaponCfg = kekoWeaponsSpecOpsTropic;

	// define all weapons and mags
	#include "kekoWeaponsSpecOpsTropic.hpp"

	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	faces[] = {
		"PersianHead_A3_04_a",
		"PersianHead_A3_04_l",
		"PersianHead_A3_04_sa",
		"GreekHead_A3_10_a",
		"GreekHead_A3_10_l",
		"GreekHead_A3_10_sa",
		"WhiteHead_22_a",
		"WhiteHead_22_l",
		"WhiteHead_22_sa"
	};

	class kekoSoldierSpecOpsTropic: kekoSoldier {
		uniform[] = {
			"VSM_G2_camo_PZJ_OD_Shirt",
			"VSM_G2_camo_PZJ_Tan_Shirt",
			"VSM_G2_camo_PZJ",
			"VSM_G2_camo_rolled_PZJ_OD_Shirt",
			"VSM_G2_camo_rolled_PZJ_Tan_Shirt",
			"VSM_G2_camo_rolled_PZJ"
		};

		vest[] = {
			"VSM_FAPC_Breacher_OGA_OD",
			"VSM_FAPC_MG_OGA_OD",
			"VSM_FAPC_Operator_OGA_OD",
			"VSM_CarrierRig_Breacher_OGA_OD",
			"VSM_CarrierRig_Gunner_OGA_OD",
			"VSM_CarrierRig_Operator_OGA_OD",
			"VSM_LBT6094_breacher_OGA_OD",
			"VSM_LBT6094_MG_OGA_OD",
			"VSM_LBT6094_operator_OGA_OD",
			"VSM_RAV_Breacher_OGA_OD",
			"VSM_RAV_MG_OGA_OD",
			"VSM_RAV_operator_OGA_OD"
		};

		helmet[] = {
			"VSM_HAT_OD",
			"VSM_HAT_PZJ",
			"VSM_HAT_TAN",
			"VSM_Mich2000_coyote",
			"VSM_Opscore",
			"VSM_SORDIN_coyote",
			"VSM_z110t_coyote",
			"VSM_BackwardsHat_Peltor_black",
			"VSM_BackwardsHat_Peltor_CMMG",
			"VSM_BackwardsHat_Peltor_ION",
			"VSM_BackwardsHat_Peltor_OD",
			"VSM_BackwardsHat_Peltor_Sero",
			"VSM_BackwardsHat_Peltor_tan",
			"VSM_Beanie_Black",
			"VSM_Beanie_OD",
			"VSM_Beanie_tan",
			"VSM_Bowman",
			"VSM_Bowman_cap_Black",
			"VSM_Bowman_cap_Green",
			"VSM_Bowman_cap_Tan",
			"VSM_Mich2000_OGA_OD",
			"VSM_Mich2000_2_CamoSprayOD",
			"VSM_Mich2000_2_OGA_OD",
			"VSM_OD_spray_OPS",
			"VSM_OGA_OD_OPS",
			"VSM_OD_Spray_OPS_2",
			"VSM_OGA_OD_OPS_2"
		};

		goggles[] = {
			"rhsusf_shemagh_od",
			"rhsusf_shemagh2_od",
			"rhsusf_shemagh_tan",
			"rhsusf_shemagh2_tan",
			"rhsusf_shemagh_gogg_od",
			"rhsusf_shemagh2_gogg_od",
			"rhsusf_shemagh_gogg_tan",
			"rhsusf_shemagh2_gogg_tan",
			"PBW_shemagh_beige",
			"VSM_balaclava_olive_Skull",
			"VSM_balaclava_olive",
			"VSM_FaceMask_Ghost_olive",
			"VSM_FaceMask_olive",
			"VSM_Facemask_OD_glasses",
			"VSM_Shemagh_OD",
			"VSM_Shemagh_Balaclava_OD",
			"VSM_Shemagh_Balaclava_OD_Glasses",
			"VSM_Shemagh_Balaclava2_OD",
			"VSM_Shemagh_Balaclava2_OD_Glasses",
			"VSM_Shemagh_Facemask_OD",
			"VSM_Shemagh_Facemask_OD_Glasses",
			"VSM_Shemagh_Glasses_OD"
		};

		primary[] = {
			keko_HK416,
			keko_HK416_PaintedOD,
			keko_HK416_CustomOD
		};

		secondary[] = {
			keko_FIVESEVEN
		};
	};

	class kekoLead: kekoSoldierSpecOpsTropic	{
		name = "Lead";
		rank = "LIEUTENANT";
		backpack[] = {"FRXA_tf_rt1523g_Ranger_Green"};
		backpackInventory[] = {};
		optics[] = {"Rangefinder"};
		primary[] = {
			keko_HK416_GL,
			keko_HK416_GL_PaintedOD,
			keko_HK416_GL_CustomOD
		};
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{6, UGL_MAG},
			{2, GRENADE},
			{2, PRIMARY_MAG}
		};
	};

	class kekoCommand: kekoLead	{
		name = "Command";
		rank = "COLONEL";
		medicClass = 2;
		engineerClass = 2;
	};

	class kekoSQL: kekoSoldierSpecOpsTropic	{
		name = "Squad Leader";
		rank = "SERGEANT";
		primary[] = {
			keko_HK416_GL,
			keko_HK416_GL_PaintedOD,
			keko_HK416_GL_CustomOD
		};
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{6, UGL_MAG},
			{2, GRENADE},
			{2, PRIMARY_MAG}
		};
		backpack[] = {"FRXA_tf_rt1523g_Ranger_Green"};
		backpackInventory[] = {};
		optics[] = {"Rangefinder"};
	};

	class kekoSergeant: kekoSQL	{
		name = "Sergeant";
	};

	class kekoFTL: kekoSoldierSpecOpsTropic	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {"Binocular"};
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{6, UGL_MAG},
			{2, GRENADE},
			{2, PRIMARY_MAG}};
		primary[] = {
			keko_HK416_GL,
			keko_HK416_GL_PaintedOD,
			keko_HK416_GL_CustomOD
		};
	};

	class kekoDoctor: kekoSoldierSpecOpsTropic {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"VSM_OGA_OD_Backpack_Kitbag"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoSoldierSpecOpsTropic {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"VSM_OGA_OD_Backpack_Kitbag"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierSpecOpsTropic	{
		name = "Rifleman";
	};

	class kekoRiflemanAT: kekoSoldierSpecOpsTropic	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_M72};
	};

	class kekoGrenadier: kekoSoldierSpecOpsTropic {
		name = "Grenadier";
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{9, UGL_MAG},
			{2, GRENADE}};
		primary[] = {
			keko_HK416_GL,
			keko_HK416_GL_PaintedOD,
			keko_HK416_GL_CustomOD
		};
	};

	class kekoLMG: kekoSoldierSpecOpsTropic {
		name = "Light Machine Gunner";
		vestInventory[] = {
			{3, PRIMARY_MAG_LMG},
			{1, SMOKE_WHITE},
			{2, GRENADE}};
		primary[] = {
			keko_MINIMI};
		backpack[] = {"fatpack_od"};
		backpackInventory[] = {{2, PRIMARY_MAG_LMG}};
	};

	class kekoLMGAsst: kekoSoldierSpecOpsTropic {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"fatpack_od"};
		backpackInventory[] = {{4, PRIMARY_MAG_LMG}};
		optics[] = {"Binocular"};
	};

	class kekoMarksman: kekoSoldierSpecOpsTropic {
		name = "Marksman";
		vestInventory[] = {
			{1, "ACE_RangeCard"},
			{5, PRIMARY_MAG_MARKSMAN},
			{1, SMOKE_WHITE},
			{2, GRENADE},
			{5, PRIMARY_MAG_MARKSMAN}};
		primary[] = {
			keko_HK417};
	};

	class kekoEOD: kekoSoldierSpecOpsTropic {
		name = "Explosive Specialist";
		backpack[] = {"VSM_OGA_OD_carryall"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineer: kekoSoldierSpecOpsTropic {
		name = "Engineer";
		backpack[] = {"VSM_OGA_OD_carryall"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoDriver: kekoSoldierSpecOpsTropic {
		name = "Driver/Crewman";
		vestInventory[] = {
			{2, SECONDARY_MAG},
			{2, PRIMARY_MAG},
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		optics[] = {"Binocular"};
		engineerClass = 1;
	};

	class kekoHeliPilot: kekoSoldierSpecOpsTropic {
		name = "Helicopter Pilot";
		vestInventory[] = {
			{2, SECONDARY_MAG},
			{2, PRIMARY_MAG},
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		helmet[] = {"H_PilotHelmetHeli_B"};
		optics[] = {"Binocular"};
	};

	class kekoHeliCrew: kekoHeliPilot {
		name = "Helicopter Crew";
		helmet[] = {"H_CrewHelmetHeli_B"};
	};

	class kekoJetPilot: kekoHeliPilot {
		name = "Jet Pilot";
		uniform[] = {"U_B_PilotCoveralls"};
		vest[] = {"V_TacVest_blk"};
		helmet[] = {"H_PilotHelmetFighter_B"};
		optics[] = {"Binocular"};
	};

	class kekoJTAC: kekoGrenadier {
		name = "JTAC";
		primary[] = {
			keko_HK416_GL,
			keko_HK416_GL_PaintedOD,
			keko_HK416_GL_CustomOD
		};
		vestInventory[] = {
			{2,PRIMARY_MAG},
			{2,PRIMARY_MAG_TRACER},
			{4,"UGL_FlareGreen_F"},
			{4,"1Rnd_SmokeRed_Grenade_shell"},
			{4,"1Rnd_SmokeBlue_Grenade_shell"},
			{2,"SmokeShellBlue"},
			{2,"SmokeShellGreen"},
			{2,"SmokeShellOrange"},
			{2,"SmokeShellPurple"},
			{2,"SmokeShellYellow"}
		};
		backpack[] = {"FRXA_tf_rt1523g_big_Ranger_Green"};
		backpackInventory[] = {{4,"Laserbatteries"}};
		optics[] = {"Laserdesignator"};
	};

	class kekoUAVOperator: kekoSoldierSpecOpsTropic	{
		name = "UAV Operator";
		primary[] = {
			keko_W_A3_MX_GL_HUNTIR,
			keko_W_A3_MX_GL_BLACK_HUNTIR};
		vestInventory[] = {
			{2,"ACE_UAVBattery"},
			{3,PRIMARY_MAG},
			{3,PRIMARY_MAG_TRACER}
		};
		backpack[] = {"B_UAV_01_backpack_F"};
		items[] = {"B_UavTerminal"};
	};

	class kekoSurvivor: kekoSoldierSpecOpsTropic {
		name = "Survivor";
		vestInventory[] = {
			{1,PRIMARY_MAG},
			{1,SECONDARY_MAG}};
		helmet[] = {
			"H_HeadBandage_clean_F",
			"H_HeadBandage_stained_F",
			"H_HeadBandage_bloody_F"};
	};
};
