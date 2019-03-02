class FactionBase {
	name = objNull;
	faces[] = { };
	logisticsHelicopter = "B_Heli_Transport_03_F";

	class role {
		Command = "Zeus";
		Lead = "Lead";
		Sergeant = "Sergeant";
		SQL = "Squad Leader";
		FTL = "Fire-Team Leader";
		Doctor = "Doctor";
		Medic = "Medic";
		Rifleman = "Rifleman";
		RiflemanAT = "Rifleman Anti-Tank";
		Grenadier = "Grenadier";
		LMG = "Light Machine Gunner";
		LMGAsst = "Light Machine Gunner Asst.";
		MMG = "Medium Machine Gunner";
		MMGAsst = "Medium Machine Asst.";
		ATSpecialist = "Anti-Tank Specialist";
		ATSpecialistAsst = "Anti-Tank Specialist Asst.";
		AASpecialist = "Anti-Air Specialist";
		AASpecialistAsst = "Anti-Air Specialist Asst.";
		Marksman = "Marksman";
		EOD = "EOD";
		Engineer = "Engineer";
		Driver = "Driver";
		HeliPilot = "Heli Pilot";
		HeliCrew = "Heli Crew";
		JetPilot = "Jet Pilot";
		JTAC = "JTAC";
		UAVOperator = "UAV Operator";
		Survivor = "Survivor";
	};

	class rank {
		Default = PRIVATE;
		Command = COLONEL;
		Lead = LIEUTENANT;
		Sergeant = SERGEANT;
		SQL = SERGEANT;
		FTL = CORPORAL;
		Doctor = SERGEANT;
		Medic = CORPORAL;
	};

	class engineerClass {
		Default = 0;
		Command = 2;
		Lead = 2;
		Engineer = 2;
		EOD = 2;
		Driver = 1;
	};

	class medicClass {
		Default = 0;
		Command = 2;
		Lead = 2;
		Doctor = 2;
		Medic = 1;
	};

	class uniform {
		Default[] = { };
	};

	class uniformInventory {
		Default[] = {
			{15, "ACE_fieldDressing"},
			{1, "KAT_Painkiller"},
			{3, "ACE_tourniquet"},
			{1, "ACE_MapTools"},
			{1, "ACE_Flashlight_XL50"},
			{1, "ACE_IR_Strobe_Item"},
			{1, "keko_canteen_canteen"}
		};
	};

	class vest {
		Default[] = { };
	};

	class vestInventory {
		Default[] = { };
		Medic[] = {{10, "ACE_epinephrine"},{10, "ACE_morphine"},{1,"ACE_surgicalKit"},{10, "ACE_quikclot"}};
		Doctor[] = {{10, "ACE_epinephrine"},{10, "ACE_morphine"},{1,"ACE_surgicalKit"},{10, "ACE_quikclot"}};
	};

	class backpack {
		Default[] = { };
	};

	class backpackInventory {
		Default[] = { };
		Medic[] = {{50, "ACE_elasticBandage"},{20, "ACE_fieldDressing"},{6, "ACE_salineIV_500"},{4, "ACE_salineIV"},{10, "ACE_tourniquet"},{20,"adv_aceSplint_splint"},{10, "KAT_guedel"},{1, "KAT_Pulseoximeter"}};
		Doctor[] = {{50, "ACE_elasticBandage"},{20, "ACE_fieldDressing"},{6, "ACE_salineIV_500"},{4, "ACE_salineIV"},{10, "ACE_tourniquet"},{1,"KAT_X_AED"},{20,"adv_aceSplint_splint"},{10, "KAT_larynx"},{1, "KAT_accuvac"}};
		EOD[] = {{6,"DemoCharge_Remote_Mag"},{2,"SatchelCharge_Remote_Mag"},{1,"ACE_DefusalKit"},{1,"ACE_Clacker"}};
		Engineer[] = {{1, "ToolKit"},{1, "ACE_wirecutter"},{1, "ACE_EntrenchingTool"},{1, "ACE_Fortify"}};
	};

	class helmet {
		Default[] = { };
	};

	class optics {
		Default[] = { };
		Lead[] = { Rangefinder };
		SQL[] = { Rangefinder };
		FTL[] = { Binocular };
		LMGAsst[] = { Binocular };
		MMGAsst[] = { Binocular };
		ATSpecialistAsst[] = { Rangefinder };
		AASpecialistAsst[] = { Rangefinder };
		Driver[] = { Binocular };
		JTAC[] = { Laserdesignator };
		HeliPilot[] = { Binocular };
		JetPilot[] = { Binocular };
	};

	class items {
		Default[] = { };
		UAVOperator[] = { B_UavTerminal };
	};

	class goggles {
		Default[] = { };
	};

	class primary {
		Default[] = { };
	};

	class secondary {
		Default[] = { };
	};

	class launcher {
		Default[] = { };
	};

	class weapons {
		class WeaponBase {
			cfgName = objNull;
			scopes[] = {};
			rails[] = {};
			silencers[] = {};
			bipods[] = {};
			magazines[] = {};
		};

		class PrimaryWeapon: WeaponBase {
			uglMagazines[] = {};
		};

		class SecondaryWeapon: WeaponBase {

		};

		class LauncherWeapon: WeaponBase {

		};
	};

	class magazines {
		class primary {
			Default = 8;
			Command = 8;
			Lead = 8;
			Sergeant = 8;
			SQL = 8;
			FTL = 10;
			Doctor = 6;
			Medic = 6;
			Rifleman = 10;
			RiflemanAT = 10;
			Grenadier = 10;
			LMG = 6;
			LMGAsst = 10;
			MMG = 4;
			MMGAsst = 10;
			ATSpecialist = 8;
			ATSpecialistAsst = 8;
			AASpecialist = 8;
			AASpecialistAsst = 8;
			Marksman = 10;
			EOD = 8;
			Engineer = 8;
			Driver = 6;
			HeliPilot = 2;
			HeliCrew = 2;
			JetPilot = 2;
			UAVOperator = 6;
			Survivor = 1;
		};

		class secondary {
			Default = 1;
			Lead = 2;
			Command = 2;
			LMG = 2;
			MMG = 2;
		};

		class ugl {
			Default = 4;
			Grenadier = 8;
		};

		class launcher {
			Default = 0;
			RiflemanAT = 1;
			ATSpecialist = 1;
			ATSpecialistAsst = 2;
			AASpecialist = 1;
			AASpecialistAsst = 2;
		};

		class grenade {
			Default = 0;
			FTL = 2;
			Rifleman = 2;
			RiflemanAT = 2;
			Grenadier = 2;
			Marksman = 2;
			LMG = 2;
			LMGAsst = 2;
			MMG = 2;
			MMGAsst = 2;
			ATSpecialist = 2;
			ATSpecialistAsst = 2;
			AASpecialist = 2;
			AASpecialistAsst = 2;
		};

		class smokeWhite {
			Default = 1;
		};

		class smokeGreen {
			Default = 1;
		};
	};
};

#include "FactionNATO.hpp"
#include "FactionAAF.hpp"
#include "FactionNATOtropic.hpp"
#include "FactionCSAT.hpp"
#include "FactionCTRG.hpp"
#include "FactionFIA.hpp"
#include "FactionGuerilla.hpp"
#include "FactionUSMarines.hpp"
#include "FactionUSBlackOpsTropic.hpp"
#include "FactionIDAP.hpp"

#include "FactionAlSirae.hpp"
#include "FactionHAF.hpp"
#include "FactionMyrimidones.hpp"
#include "FactionNAA.hpp"
#include "FactionUNTOFIAAS.hpp"
#include "FactionWAM.hpp"
#include "FactionWAMVolunteers.hpp"

#include "FactionUSArmyOCP.hpp"
#include "FactionUSArmyUCP.hpp"
#include "FactionMarines_Desert.hpp"
#include "FactionMarines_Woodland.hpp"
#include "FactionRussiaEMRSummer.hpp"
#include "FactionRussiaEMRDesert.hpp"
#include "FactionRussiaSpeznas.hpp"
#include "FactionBundeswehrFleck.hpp"
#include "FactionBundeswehrTropen.hpp"
#include "FactionBundeswehrSchnee.hpp"
#include "FactionChinesePLAWoodland.hpp"
#include "FactionChinesePLADesert.hpp"
#include "FactionBlackorder.hpp"
#include "FactionBlackorderRedBerets.hpp"
#include "FactionSpecOpsTropic.hpp"
#include "FactionHorizonIsland.hpp"

#include "FactionBAFMTP.hpp"
#include "FactionBAFArctic.hpp"
#include "FactionBAFArcticWhite.hpp"
#include "FactionBAFDesert.hpp"
#include "FactionBAFTMP.hpp"
#include "FactionBAFWDL.hpp"

#include "FactionWehrmacht.hpp"
#include "FactionArmiaKrajowaPartyzanci.hpp"
#include "FactionArmiaKrajowaCamo.hpp"
#include "FactionArmiaKrajowaGrade.hpp"
#include "FactionCommandos.hpp"

#include "FactionUNSCDF.hpp"
#include "FactionUNSCDFWoodland.hpp"
#include "FactionUNSCDFTropical.hpp"
#include "FactionUNSCDFDesert.hpp"
#include "FactionUNSCDFUrban.hpp"
#include "FactionUNSCDFSnow.hpp"
#include "FactionUNSCDFMarines.hpp"
#include "FactionUNSCDFMarinesHCW.hpp"
#include "FactionUNSCDF_ODST.hpp"
