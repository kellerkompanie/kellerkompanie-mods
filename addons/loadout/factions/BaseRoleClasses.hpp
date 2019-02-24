class Command_base: Soldier {
	name = "Command";
	rank = "COLONEL";
	medicClass = 2;
	engineerClass = 2;
};

class Lead_base: Soldier	{
	name = "Lead";
	rank = "LIEUTENANT";
	medicClass = 2;
	engineerClass = 2;
};

class Sergeant_base: Soldier	{
	name = "Sergeant";
	rank = "SERGEANT";
};

class SQL_base: Soldier	{
	name = "Squad Leader";
	rank = "SERGEANT";
};

class FTL_base: Soldier	{
	name = "Fire Team Leader";
	rank = "CORPORAL";
};

class Doctor_base: Soldier {
	name = "Doctor";
	medicClass = 2;
	rank = "SERGEANT";

	vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;
	backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
};

class Medic_base: Soldier {
	name = "Medic";
	medicClass = 1;
	rank = "CORPORAL";

	vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;
	backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
};

class Rifleman_base: Soldier	{
	name = "Rifleman";
};

class RiflemanAT_base: Soldier {
	name = "Rifleman Anti-Tank";
};

class Grenadier_base: Soldier {
	name = "Grenadier";
};

class LMG_base: Soldier {
	name = "Light Machine Gunner";
};

class LMGAsst_base: Soldier {
	name = "Light Machine Gunner Asst.";
};

class MMG_base: Soldier {
	name = "Medium Machine Gunner";
};

class MMGAsst_base: Soldier {
	name = "Medium Machine Gunner Asst.";
};

class ATSpecialist_base: Soldier {
	name = "Anti-Tank Specialist";
};

class ATSpecialistAsst_base: Soldier {
	name = "Anti-Tank Specialist Assistant";
};

class AASpecialist_base: Soldier {
	name = "Anti-Air Specialist";
};

class AASpecialistAsst_base: Soldier {
	name = "Anti-Air Specialist Assistant";
};

class Marksman_base: Soldier {
	name = "Marksman";
	vestInventory[] = {
		{1, "ACE_RangeCard"}
	};
};

class Sniper_base: Soldier {
	name = "Sniper";
};

class Spotter_base: Soldier {
	name = "Spotter";
};

class EOD_base: Soldier {
	name = "Explosive Specialist";
	backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
	engineerClass = 2;
};

class Engineer_base: Soldier {
	name = "Engineer";
	backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
	engineerClass = 2;
};

class Driver_base: Soldier {
	name = "Driver/Crewman";
	engineerClass = 1;
};

class HeliPilot_base: Soldier {
	name = "Helicopter Pilot";
};

class HeliCrew_base: Soldier {
	name = "Helicopter Crew";
};

class JetPilot_base: Soldier {
	name = "Jet Pilot";
};

class JTAC_base: Soldier {
	name = "JTAC";
};

class UAVOperator_base: Soldier	{
	name = "UAV Operator";
};

class Survivor_base: Soldier	{
	name = "Survivor";
	helmet[] = {
		"H_HeadBandage_clean_F",
		"H_HeadBandage_stained_F",
		"H_HeadBandage_bloody_F"
	};
};
