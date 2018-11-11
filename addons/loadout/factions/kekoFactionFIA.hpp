class kekoFactionFIA: kekoFactionBase {

	name = "[Minimal] FIA - Freedom and Independence Alliance";
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
		{"Heavy Weapons", {
			kekoMMG,
			kekoMMGAsst}},
		{"Support", {
			kekoMarksman,
			kekoEOD,
			kekoEngineer,
			kekoDriver,
			kekoHeliPilot,
			kekoSurvivor}}
	};
	weaponCfg = kekoWeaponsFIA;

	// define all weapons and mags
	#include "kekoWeaponsFIA.hpp"

	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierFIA: kekoSoldier {
		uniform[] = {
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla3_1",
			"U_IG_Guerrilla_6_1"};

		uniformInventory[] = {
			{15, "ACE_fieldDressing"},
			{1, "ACE_morphine"},
			{2, "ACE_tourniquet"},
			{1, "ACE_Flashlight_XL50"},
			{1, SECONDARY_MAG},
			{1, SMOKE_WHITE},
			{1, SMOKE_GREEN}};

		vest[] = {
			"V_Chestrig_oli",
			"V_BandollierB_oli",
			"V_Chestrig_blk",
			"V_TacVest_blk",
			"V_BandollierB_blk",
			"V_BandollierB_khk"};

		vestInventory[] = {
			{3, PRIMARY_MAG},
			{3, PRIMARY_MAG_TRACER},
			{1, SMOKE_WHITE},
			{2, GRENADE}};

		helmet[] = {
			"H_Shemag_olive",
			"H_Booniehat_khk",
			"H_Bandanna_khk",
			"H_Cap_oli",
			"H_Watchcap_camo",
			"H_Watchcap_blk"};

		primary[] = {
			keko_W_A3_Mk20,
			keko_W_A3_TRG21};

		secondary[] = {
			keko_W_M1911};

		goggles[] = {" ", " ", " ", "G_Shades_Black","G_Shades_Blue","G_Sport_Checkered"};
	};

	class kekoSoldierLight: kekoSoldierFIA {
		primary[] = {
			keko_W_A3_Mk20C};
	};

	class kekoLead: kekoSoldierFIA	{
		name = "Lead";
		rank = "LIEUTENANT";
		uniform[] = {"U_IG_leader"};
		backpack[] = {"TFAR_rt1523g"};
		backpackInventory[] = {{6,"UGL_FlareWhite_F"},{3,"UGL_FlareGreen_F"},{3,"UGL_FlareRed_F"}};
		optics[] = {"Binocular"};
		primary[] = {
			keko_W_A3_Mk20_GL,
			keko_W_A3_TRG21_GL};
	};

	class kekoCommand: kekoLead	{
		name = "Command";
		rank = "COLONEL";
		medicClass = 2;
		engineerClass = 2;
	};

	class kekoSQL: kekoSoldierFIA	{
		name = "Squad Leader";
		rank = "SERGEANT";
		primary[] = {
			keko_W_A3_Mk20_GL,
			keko_W_A3_TRG21_GL};
		backpack[] = {"TFAR_rt1523g"};
		backpackInventory[] = {{6,"UGL_FlareWhite_F"},{3,"UGL_FlareGreen_F"},{3,"UGL_FlareRed_F"}};
		optics[] = {"Binocular"};
	};

	class kekoSergeant: kekoSQL	{
		name = "Sergeant";
	};

	class kekoFTL: kekoSoldierFIA	{
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
			keko_W_A3_Mk20_GL,
			keko_W_A3_TRG21_GL};
	};

	class kekoDoctor: kekoSoldierLight {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_Kitbag_rgr"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoSoldierLight {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_Kitbag_rgr"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierFIA	{
		name = "Rifleman";
	};

	class kekoRiflemanAT: kekoSoldierFIA	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_RPG32};
		backpack[] = {"B_TacticalPack_blk"};
		backpackInventory[] = {{2, RAT_MAG}};
	};

	class kekoGrenadier: kekoSoldierFIA {
		name = "Grenadier";
		vestInventory[] = {
			{4, PRIMARY_MAG},
			{4, PRIMARY_MAG_TRACER},
			{4, UGL_MAG},
			{5, "UGL_FlareWhite_F"},
			{2, GRENADE}};
		primary[] = {
			keko_W_A3_Mk20_GL,
			keko_W_A3_TRG21_GL};
	};

	class kekoLMG: kekoSoldierFIA {
		name = "Light Machine Gunner";
		vestInventory[] = {
			{3, PRIMARY_MAG_LMG},
			{1, SMOKE_WHITE},
			{1, GRENADE}};
		primary[] = {
			keko_W_A3_Mk200};
		backpack[] = {"B_TacticalPack_blk"};
		backpackInventory[] = {{2, PRIMARY_MAG_LMG}};
	};

	class kekoLMGAsst: kekoSoldierFIA {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"B_TacticalPack_blk"};
		backpackInventory[] = {{4, PRIMARY_MAG_LMG}};
		optics[] = {"Binocular"};
	};

	class kekoMMG: kekoSoldierFIA {
		name = "Medium Machine Gunner";
		vestInventory[] = {
			{2, PRIMARY_MAG_MMG},
			{1, GRENADE}};
		primary[] = {
			keko_W_A3_MMG};
		backpack[] = {"B_TacticalPack_blk"};
	};

	class kekoMMGAsst: kekoSoldierFIA {
		name = "Medium Machine Gunner Asst.";

		backpack[] = {"B_TacticalPack_blk"};
		backpackInventory[] = {{3, PRIMARY_MAG_MMG}};
		optics[] = {"Binocular"};
	};

	class kekoMarksman: kekoSoldierFIA {
		name = "Marksman";
		vestInventory[] = {
			{1, "ACE_RangeCard"},
			{3, PRIMARY_MAG_MARKSMAN},
			{1, SMOKE_WHITE},
			{2, GRENADE},
			{3, PRIMARY_MAG_MARKSMAN}};
		primary[] = {
			keko_W_A3_DMR};
	};

	class kekoEOD: kekoSoldierLight {
		name = "Explosive Specialist";
		backpack[] = {"B_Carryall_oli"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineer: kekoSoldierLight {
		name = "Engineer";
		backpack[] = {"B_Carryall_oli"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoDriver: kekoSoldierLight {
		name = "Driver/Crewman";
		vestInventory[] = {
			{2, SECONDARY_MAG},
			{2, PRIMARY_MAG},
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		optics[] = {"Binocular"};
		engineerClass = 1;
	};

	class kekoHeliPilot: kekoSoldierLight {
		name = "Helicopter Pilot";
		vest[] = {"V_TacVest_blk"};
		vestInventory[] = {
			{2, SECONDARY_MAG},
			{2, PRIMARY_MAG},
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}};
		optics[] = {"Binocular"};
		helmet[] = {"H_Cap_marshal"};
	};

	class kekoSurvivor: kekoSoldierLight	{
		name = "Survivor";
		vestInventory[] = {
			{1,PRIMARY_MAG},
			{1,SECONDARY_MAG}};
		helmet[] = {
			"H_HeadBandage_clean_F",
			"H_HeadBandage_stained_F",
			"H_HeadBandage_bloody_F"};
	};

	class kekoSniper: kekoSoldierFIA {
		name = "Sniper";
		uniform[] = {"U_B_FullGhillie_sard"};
		vest[] = {"V_Chestrig_khk"};
		vestInventory[] = {
			{8, PRIMARY_MAG_SNIPER},
			{1, "ACE_RangeCard"}
		};
		helmet[] = {"H_HelmetSpecB"};
		primary[] = {keko_W_A3_GM6_CSAT};
		secondary[] = {keko_W_M1911};
		backpack[] = {"B_AssaultPack_cbr"};
		backpackInventory[] = {
			{8, PRIMARY_MAG_SNIPER},
			{2, "ACE_salineIV_500"},
			{6, "adv_aceSplint_splint"}
		};
		optics[] = {"Rangefinder"};
	};

	class kekoSpotter: kekoMarksman {
		name = "Spotter";
		uniform[] = {"U_I_FullGhillie_ard"};
		vest[] = {"V_Chestrig_rgr"};
		vestInventory[] = {
			{1, "ACE_RangeCard"},
			{5, PRIMARY_MAG_MARKSMAN},
			{1, SMOKE_WHITE},
			{2, GRENADE},
			{5, PRIMARY_MAG_MARKSMAN}
		};
		helmet[] = {"H_HelmetSpecB"};
		secondary[] = {keko_W_M1911};
		backpack[] = {"B_AssaultPack_cbr"};
		backpackInventory[] = {
			{1, "ACE_surgicalKit"},
			{1, "ACE_EntrenchingTool"},
			{2, "ACE_salineIV"},
			{20, "ACE_quikclot"},
			{1, "ACE_ATragMX"},
			{1, "ACE_Kestrel4500"},
			{1, "ACE_Tripod"},
			{1, "ACE_SpottingScope"},
			{14, "ACE_fieldDressing"}
		};
		optics[] = {"Rangefinder"};
		primary[] = {keko_W_A3_DMR_SILENCED};
	};
};
