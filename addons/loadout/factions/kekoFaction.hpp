#include "kekoWeapons.hpp"

class kekoFaction
{
	class kekoFactionBase {
		name = objNull;
		roles[] = {};
		weaponCfg = objNull;
		crates[] = {};
		faces[] = {};

		logisticsHelicopter = "B_Heli_Transport_03_unarmed_F";

		class kekoSoldier {
			name = "Soldier";
			medicClass = 0;
			engineerClass = 0;
			rank = "PRIVATE";

			uniform[] = {};
			uniformInventory[] = {
				{15, "ACE_fieldDressing"},
				{1, "KAT_Painkiller"},
				{3, "ACE_tourniquet"},
				{1, "ACE_MapTools"},
				{1, "ACE_Flashlight_XL50"},
				{1, "ACE_IR_Strobe_Item"},
				{1, "keko_canteen_canteen"}
			};
			vest[] = {};

			helmet[] = {};

			backpack[] = {};
			backpackInventory[] = {};

			primary[] = {};

			secondary[] = {};

			launcher[] = {};

			items[] = {};

			goggles[] = {};

			optics[] = {};
		};

		class kekoSurvivor: kekoSoldier	{
			name = "Survivor";
			helmet[] = {
				"H_HeadBandage_clean_F",
				"H_HeadBandage_stained_F",
				"H_HeadBandage_bloody_F"
			};
		};

		class Magazines {
			class Primary {
				default = 8;
				kekoCommand = 8;
				kekoLead = 8;
				kekoSergeant = 8;
				kekoSQL = 8;
				kekoFTL = 10;
				kekoDoctor = 6;
				kekoMedic = 6;
				kekoRifleman = 10;
				kekoRiflemanAT = 10;
				kekoGrenadier = 10;
				kekoLMG = 6;
				kekoLMGAsst = 10;
				kekoMMG = 4;
				kekoMMGAsst = 10;
				kekoATSpecialist = 8;
				kekoATSpecialistAsst = 8;
				kekoAASpecialist = 8;
				kekoAASpecialistAsst = 8;
				kekoMarksman = 10;
				kekoSniper = 10;
				kekoSpotter = 10;
				kekoEOD = 8;
				kekoEngineer = 8;
				kekoDriver = 6;
				kekoHeliPilot = 2;
				kekoHeliCrew = 2;
				kekoJetPilot = 2;
				kekoUAVOperator = 6;
				kekoSurvivor = 1;
			};

			class Secondary {
				default = 1;
				kekoLead = 2;
				kekoCommand = 2;
				kekoLMG = 2;
				kekoMMG = 2;
				kekoSniper = 3;
				kekoSpotter = 3;
			};

			class UGL {
				default = 4;
				kekoGrenadier = 8;
			};

			class Launcher {
				default = 0;
				kekoRiflemanAT = 1;
				kekoATSpecialist = 1;
				kekoATSpecialistAsst = 2;
				kekoAASpecialist = 1;
				kekoAASpecialistAsst = 2;
			};

			class Grenade {
				default = 0;
				kekoFTL = 2;
				kekoRifleman = 2;
				kekoRiflemanAT = 2;
				kekoGrenadier = 2;
				kekoMarksman = 2;
				kekoLMG = 2;
				kekoLMGAsst = 2;
				kekoMMG = 2;
				kekoMMGAsst = 2;
				kekoATSpecialist = 2;
				kekoATSpecialistAsst = 2;
				kekoAASpecialist = 2;
				kekoAASpecialistAsst = 2;
			};

			class SmokeWhite {
				default = 1;
			};

			class SmokeGreen {
				default = 1;
			};
		};
	};

	#include "kekoFactionNATO.hpp"
	#include "kekoFactionAAF.hpp"
	#include "kekoFactionCSAT.hpp"
	#include "kekoFactionCTRG.hpp"
	#include "kekoFactionFIA.hpp"
	#include "kekoFactionGuerilla.hpp"
	#include "kekoFactionUSMarines.hpp"
	#include "kekoFactionUSBlackOpsTropic.hpp"
	#include "kekoFactionNATOtropic.hpp"
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
	#include "kekoFactionUNSCDF_ODST.hpp"
};
