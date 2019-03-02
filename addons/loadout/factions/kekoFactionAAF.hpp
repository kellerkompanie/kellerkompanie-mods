class kekoFactionAAF: kekoFactionBase {

	name = "[Minimal] AAF - Altis Armed Forces";
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
			kekoRiflemanATTanks,
			kekoGrenadier,
			kekoLMG,
			kekoLMGAsst}},
		{"Heavy Weapons", {
			kekoMMG,
			kekoMMGAsst,
			kekoATSpecialist,
			kekoATSpecialistAsst,
			kekoAASpecialist,
			kekoAASpecialistAsst}},
		{"Support", {
			kekoMarksman,
			kekoSniper,
			kekoSpotter,
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
	weaponCfg = kekoWeaponsAAF;

	logisticsHelicopter = "I_Heli_Transport_02_F";

	// define all weapons and mags
	#include "kekoWeaponsAAF.hpp"

	#include "kekoSoldier.hpp"
	#include "kekoCrate.hpp"

	crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;

	class kekoSoldierAAF: kekoSoldier {
		uniform[] = {
			"U_I_CombatUniform",
			"U_I_CombatUniform_shortsleeve"};

		vest[] = {
			"V_PlateCarrierIA1_dgtl",
			"V_PlateCarrierIA2_dgtl"};

		helmet[] = {
			"H_HelmetIA"};

		primary[] = {
			keko_W_A3_F2000};

		secondary[] = {
			keko_W_A3_ACP};
	};

	class kekoSoldierLight: kekoSoldierAAF {
		primary[] = {
			keko_W_A3_F2000_SHORT};
	};

	class kekoLead: kekoSoldierAAF	{
		name = "Lead";
		rank = "LIEUTENANT";
		uniform[] = {"U_I_OfficerUniform"};
		vest[] = {"V_TacVest_oli"};
		helmet[] = {"H_MilCap_dgtl"};
		backpack[] = {"TFAR_anprc155"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"}};
		optics[] = {"Rangefinder"};
		primary[] = {
			keko_W_A3_F2000_UGL_HUNTIR};
	};

	class kekoCommand: kekoLead	{
		name = "Command";
		rank = "COLONEL";
		medicClass = 2;
		engineerClass = 2;
		helmet[] = {"H_Cap_blk_Raven"};
	};

	class kekoSQL: kekoSoldierAAF	{
		name = "Squad Leader";
		rank = "SERGEANT";
		backpack[] = {"TFAR_anprc155"};
		backpackInventory[] = {
			{1,"ACE_HuntIR_monitor"}};
		optics[] = {"Rangefinder"};
		primary[] = {
			keko_W_A3_F2000_UGL_HUNTIR};
	};

	class kekoSergeant: kekoSQL	{
		name = "Sergeant";
	};

	class kekoFTL: kekoSoldierAAF	{
		name = "Fire Team Leader";
		rank = "CORPORAL";
		optics[] = {"Binocular"};
		primary[] = {
			keko_W_A3_F2000_UGL};
	};

	class kekoDoctor: kekoSoldierLight {
		name = "Doctor";
		medicClass = 2;
		rank = "SERGEANT";
		vest[] = {"V_PlateCarrierIA2_dgtl"};
		vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_Kitbag_rgr"};
		backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoMedic: kekoSoldierLight {
		name = "Medic";
		medicClass = 1;
		rank = "CORPORAL";
		vest[] = {"V_PlateCarrierIA2_dgtl"};
		vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

		backpack[] = {"B_Kitbag_rgr"};
		backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
	};

	class kekoRifleman: kekoSoldierAAF	{
		name = "Rifleman";
	};

	class kekoRiflemanAT: kekoSoldierAAF	{
		name = "Rifleman Anti-Tank";
		launcher[] = {keko_W_NLAW};
	};

	class kekoRiflemanATTanks: kekoRiflemanAT	{
		name = "Rifleman Anti-Tank (Tanks DLC)";
		launcher[] = {keko_W_MAAWS};
		backpack[] = {"B_AssaultPack_dgtl"};
		backpackInventory[] = {{2, AT_MAG_TANKS}};
	};

	class kekoGrenadier: kekoSoldierAAF {
		name = "Grenadier";
		primary[] = {keko_W_A3_F2000_UGL};
	};

	class kekoLMG: kekoSoldierAAF {
		name = "Light Machine Gunner";
		primary[] = {keko_W_A3_STONER};

		backpack[] = {"B_FieldPack_oli"};
	};

	class kekoLMGAsst: kekoSoldierAAF {
		name = "Light Machine Gunner Asst.";
		backpack[] = {"B_FieldPack_oli"};
		optics[] = {"Binocular"};
	};

	class kekoMMG: kekoSoldierAAF {
		name = "Medium Machine Gunner";
		primary[] = {keko_W_A3_MMG_AAF};
		backpack[] = {"B_FieldPack_oli"};
	};

	class kekoMMGAsst: kekoSoldierAAF {
		name = "Medium Machine Gunner Asst.";
		backpack[] = {"B_FieldPack_oli"};
		optics[] = {"Binocular"};
	};

	class kekoATSpecialist: kekoSoldierAAF {
		name = "Anti-Tank Specialist";
		backpack[] = {"B_FieldPack_oli"};
		launcher[] = {keko_W_TITAN_AT_AAF};
	};

	class kekoATSpecialistAsst: kekoSoldierAAF {
		name = "Anti-Tank Specialist Assistant";
		backpack[] = {"B_FieldPack_oli"};
	};

	class kekoAASpecialist: kekoSoldierLight {
		name = "Anti-Air Specialist";
		backpack[] = {"B_FieldPack_oli"};
		launcher[] = {keko_W_TITAN_AA_AAF};
	};

	class kekoAASpecialistAsst: kekoSoldierAAF {
		name = "Anti-Air Specialist Assistant";
		backpack[] = {"B_FieldPack_oli"};
	};

	class kekoMarksman: kekoSoldierAAF {
		name = "Marksman";
		vestInventory[] = {
			{1, "ACE_RangeCard"}
		};
		primary[] = {keko_W_A3_EBR};
	};

	class kekoSniper: kekoSoldierAAF {
		name = "Sniper";
		uniform[] = {"U_I_GhillieSuit"};
		uniformInventory[] = {
			{1,"ACE_ATragMX"},
			{10,"ACE_quikclot"},
			{1,"ACE_Flashlight_MX991"},
			{1,"ACE_IR_Strobe_Item"},
			{1,"ACE_Kestrel4500"},
			{1,"ACE_MapTools"},
			{1,"ACE_microDAGR"},
			{2,"ACE_morphine"},
			{3,"ACE_tourniquet"},
			{1,"ACE_surgicalKit"},
			{1,"ACE_RangeCard"},
			{2,"ACE_epinephrine"},
			{1,"ACE_salineIV"},
			{8,"ACE_fieldDressing"}};
		vest[] = {"V_Chestrig_oli"};
		vestInventory[] = {
			{1,"SmokeShell"},
			{1,"SmokeShellGreen"},
			{8,"5Rnd_127x108_Mag"},
			{2,"9Rnd_45ACP_Mag"}};
		helmet[] = {"H_HelmetIA"};
		primary[] = {keko_W_A3_GM6};
		secondary[] = {keko_W_A3_ACP_SILENCED};
		optics[] = {"Laserdesignator"};
	};

	class kekoSpotter: kekoSniper {
		name = "Spotter";
		primary[] = {keko_W_A3_F2000};
	};

	class kekoEOD: kekoSoldierLight {
		name = "Explosive Specialist";
		backpack[] = {"B_Carryall_oli"};
		backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoEngineer: kekoSoldierLight	{
		name = "Engineer";
		backpack[] = {"B_Carryall_oli"};
		backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
		engineerClass = 2;
	};

	class kekoDriver: kekoSoldierLight {
		name = "Driver/Crewman";
		vest[] = {"V_BandollierB_oli"};
		vestInventory[] = {
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}
		};
		helmet[] = {"H_HelmetCrew_I"};
		optics[] = {"Binocular"};
		engineerClass = 1;
	};

	class kekoHeliPilot: kekoSoldierLight {
		name = "Heli Pilot";
		uniform[] = {"U_I_HeliPilotCoveralls"};
		vest[] = {"V_TacVest_blk"};
		vestInventory[] = {
			{1, "ACE_microDAGR"},
			{10, "ACE_quikclot"}
		};
		helmet[] = {"H_PilotHelmetHeli_I"};
		optics[] = {"Binocular"};
	};

	class kekoHeliCrew: kekoHeliPilot {
		name = "Helicopter Crew";
		helmet[] = {"H_CrewHelmetHeli_I"};
	};

	class kekoJetPilot: kekoHeliPilot {
		name = "Jet Pilot";
		uniform[] = {"U_I_pilotCoveralls"};
		vest[] = {"V_TacVest_blk"};
		helmet[] = {"H_PilotHelmetFighter_I"};
		optics[] = {"Binocular"};
	};

	class kekoJTAC: kekoGrenadier {
		name = "JTAC";
		primary[] = {
			keko_W_A3_F2000_UGL_HUNTIR};
		vestInventory[] = {
			{4,"UGL_FlareGreen_F"},
			{4,"1Rnd_SmokeRed_Grenade_shell"},
			{4,"1Rnd_SmokeBlue_Grenade_shell"},
			{2,"SmokeShellBlue"},
			{2,"SmokeShellGreen"},
			{2,"SmokeShellOrange"},
			{2,"SmokeShellPurple"},
			{2,"SmokeShellYellow"}
		};
		backpack[] = {"TFAR_anprc155"};
		backpackInventory[] = {{4,"Laserbatteries"}};
		optics[] = {"Laserdesignator"};
	};

	class kekoUAVOperator: kekoSoldierLight	{
		name = "UAV Operator";
		primary[] = {
			keko_W_A3_F2000_UGL_HUNTIR};
		vestInventory[] = {
			{2,"ACE_UAVBattery"},
			{1,"ACE_HuntIR_monitor"}
		};
		backpack[] = {"I_UAV_01_backpack_F"};
		items[] = {"I_UavTerminal"};
	};

	class kekoSurvivor: kekoSoldierLight	{
		name = "Survivor";
		helmet[] = {
			"H_HeadBandage_clean_F",
			"H_HeadBandage_stained_F",
			"H_HeadBandage_bloody_F"};
	};
};
