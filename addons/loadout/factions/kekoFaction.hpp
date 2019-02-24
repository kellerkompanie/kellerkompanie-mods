#include "kekoWeapons.hpp"

class kekoFaction {
	class FactionBase {
		name = "";
		faces[] = { };
		logisticsHelicopter = "B_Heli_Transport_03_F";

		class Role {
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
			Sniper = "Sniper";
			Spotter = "Spotter";
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

		class Rank {
			Default = PRIVATE;
			Command = COLONEL;
			Lead = LIEUTENANT;
			Sergeant = SERGEANT;
			SQL = SERGEANT;
			FTL = CORPORAL;
			Doctor = SERGEANT;
			Medic = CORPORAL;
		};

		class EngineerClass {
			Default = 0;
			Command = 2;
			Lead = 2;
			Engineer = 2;
			EOD = 2;
			Driver = 1;
		};

		class MedicClass {
			Default = 0;
			Command = 2;
			Lead = 2;
			Doctor = 2;
			Medic = 1;
		};

		class Uniform {
			Default[] = { };
		};

		class UniformInventory {
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

		class Vest {
			Default[] = { };
		};

		class VestInventory {
			Default[] = { };
			Medic[] = {{10, "ACE_epinephrine"},{10, "ACE_morphine"},{1,"ACE_surgicalKit"},{10, "ACE_quikclot"}};
			Doctor[] = {{10, "ACE_epinephrine"},{10, "ACE_morphine"},{1,"ACE_surgicalKit"},{10, "ACE_quikclot"}};
		};

		class Backpack {
			Default[] = { };
		};

		class BackpackInventory {
			Default[] = { };
			Medic[] = {{50, "ACE_elasticBandage"},{20, "ACE_fieldDressing"},{6, "ACE_salineIV_500"},{4, "ACE_salineIV"},{10, "ACE_tourniquet"},{20,"adv_aceSplint_splint"},{10, "KAT_guedel"},{1, "KAT_Pulseoximeter"}};
			Doctor[] = {{50, "ACE_elasticBandage"},{20, "ACE_fieldDressing"},{6, "ACE_salineIV_500"},{4, "ACE_salineIV"},{10, "ACE_tourniquet"},{1,"KAT_X_AED"},{20,"adv_aceSplint_splint"},{10, "KAT_larynx"},{1, "KAT_accuvac"}};
			EOD[] = {{6,"DemoCharge_Remote_Mag"},{2,"SatchelCharge_Remote_Mag"},{1,"ACE_DefusalKit"},{1,"ACE_Clacker"}};
			Engineer[] = {{1, "ToolKit"},{1, "ACE_wirecutter"},{1, "ACE_EntrenchingTool"},{1, "ACE_Fortify"}};
		};

		class Helmet {
			Default[] = { };
		};

		class Optics {
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
			Sniper[] = { Laserdesignator };
			Spotter[] = { Laserdesignator };
		};

		class Items {
			Default[] = { };
			UAVOperator[] = { B_UavTerminal };
		};

		class Goggles {
			Default[] = { };
		};

		class Primary {
			Default[] = { };
		};

		class Secondary {
			Default[] = { };
		};

		class Launcher {
			Default[] = { };
		};

		class Magazines {
			class Primary {
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
				Sniper = 10;
				Spotter = 10;
				EOD = 8;
				Engineer = 8;
				Driver = 6;
				HeliPilot = 2;
				HeliCrew = 2;
				JetPilot = 2;
				UAVOperator = 6;
				Survivor = 1;
			};

			class Secondary {
				Default = 1;
				Lead = 2;
				Command = 2;
				LMG = 2;
				MMG = 2;
				Sniper = 3;
				Spotter = 3;
			};

			class UGL {
				Default = 4;
				Grenadier = 8;
			};

			class Launcher {
				Default = 0;
				RiflemanAT = 1;
				ATSpecialist = 1;
				ATSpecialistAsst = 2;
				AASpecialist = 1;
				AASpecialistAsst = 2;
			};

			class Grenade {
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

			class SmokeWhite {
				Default = 1;
			};

			class SmokeGreen {
				Default = 1;
			};
		};
	};

	#include "FactionNATO.hpp"
	/*#include "FactionAAF.hpp"
	#include "FactionNATOtropic.hpp"
	#include "kekoFactionCSAT.hpp"
	#include "kekoFactionCTRG.hpp"
	#include "kekoFactionFIA.hpp"
	#include "kekoFactionGuerilla.hpp"
	#include "kekoFactionUSMarines.hpp"
	#include "kekoFactionUSBlackOpsTropic.hpp"
	#include "kekoFactionIDAP.hpp"

	#include "kekoFactionAlSirae.hpp"
	#include "kekoFactionHAF.hpp"
	#include "kekoFactionMyrimidones.hpp"
	#include "kekoFactionNAA.hpp"
	#include "kekoFactionUNTOFIAAS.hpp"
	#include "kekoFactionWAM.hpp"
	#include "kekoFactionWAMVolunteers.hpp"

	#include "kekoFactionUSArmyOCP.hpp"
	#include "kekoFactionUSArmyUCP.hpp"
	#include "kekoFactionMarines_Desert.hpp"
	#include "kekoFactionMarines_Woodland.hpp"
	#include "kekoFactionRussiaEMRSummer.hpp"
	#include "kekoFactionRussiaEMRDesert.hpp"
	#include "kekoFactionRussiaSpeznas.hpp"
	#include "kekoFactionBundeswehrFleck.hpp"
	#include "kekoFactionBundeswehrTropen.hpp"
	#include "kekoFactionBundeswehrSchnee.hpp"
	#include "kekoFactionChinesePLAWoodland.hpp"
	#include "kekoFactionChinesePLADesert.hpp"
	#include "kekoFactionBlackorder.hpp"
	#include "kekoFactionBlackorderRedBerets.hpp"
	#include "kekoFactionSpecOpsTropic.hpp"
	#include "kekoFactionHorizonIsland.hpp"

	#include "kekoFactionBAFMTP.hpp"
	#include "kekoFactionBAFArctic.hpp"
	#include "kekoFactionBAFArcticWhite.hpp"
	#include "kekoFactionBAFDesert.hpp"
	#include "kekoFactionBAFTMP.hpp"
	#include "kekoFactionBAFWDL.hpp"

	#include "kekoFactionWehrmacht.hpp"
	#include "kekoFactionArmiaKrajowaPartyzanci.hpp"
	#include "kekoFactionArmiaKrajowaCamo.hpp"
	#include "kekoFactionArmiaKrajowaGrade.hpp"
	#include "kekoFactionCommandos.hpp"
	#include "kekoFactionCBRNMarines.hpp"

	#include "kekoFactionUNSCDF.hpp"
	#include "kekoFactionUNSCDFWoodland.hpp"
	#include "kekoFactionUNSCDFTropical.hpp"
	#include "kekoFactionUNSCDFDesert.hpp"
	#include "kekoFactionUNSCDFUrban.hpp"
	#include "kekoFactionUNSCDFSnow.hpp"
	#include "kekoFactionUNSCDFMarines.hpp"
	#include "kekoFactionUNSCDFMarinesHCW.hpp"
	#include "kekoFactionUNSCDF_ODST.hpp"*/
};
