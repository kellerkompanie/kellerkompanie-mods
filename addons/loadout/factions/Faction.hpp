class FactionBase {
    name = objNull;
    faces[] = { };
    logisticsHelicopter = "B_Heli_Transport_03_F";

    disposableRocketLauncher = launch_NLAW_F;
    antiTankLauncher = launch_B_Titan_short_F;
    antiAirLauncher = launch_B_Titan_F;
    grenade = HandGrenade;
    smokeWhite = SmokeShell;
    smokeGreen = SmokeShellGreen;

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

        LMGAsst[] = { {2, "keko_MGMag"}, {2, "keko_MGMag_Tracer"} };
        MMGAsst[] = { {1, "keko_MGMag"}, {2, "keko_MGMag_Tracer"} };
        ATSpecialistAsst[] = { {2, "keko_AntiTankMag"} };
        AASpecialistAsst[] = { {2, "keko_AntiAirMag"} };
    };

    class helmet {
        Default[] = { };
        Survivor[] = {
            "H_HeadBandage_clean_F",
            "H_HeadBandage_stained_F",
            "H_HeadBandage_bloody_F"
        };
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
            EOD = 2;
            Engineer = 2;
        };

        class smokeWhite {
            Default = 1;
        };

        class smokeGreen {
            Default = 1;
        };
    };

    class crates {
        class EmptyCrate {
            name = "Leere Kiste";
            cfgName[] = {"B_CargoNet_01_ammo_F","I_CargoNet_01_ammo_F","O_CargoNet_01_ammo_F"};
            inventory[] = {};
        };

        class FireTeamCrate: EmptyCrate {
            name = "Fire Team Kiste";
            cfgName[] = {"Box_NATO_Ammo_F","Box_IND_Ammo_F","Box_East_Ammo_F"};
            inventory[] = {
                    {10, "keko_RifleMag"},
                    {10, "keko_RifleMag_Tracer"},
                    {3, "keko_MGMag"},
                    {3, "keko_MGMag_Tracer"},
                    {2, "keko_PistolMag"},
                    {2, "keko_DisposableRocketLauncher"},
                    {6, "keko_UGLMag"},
                    {6, "HandGrenade"},
                    {4, "SmokeShell"},
                    {4, "SmokeShellGreen"},
                    {20, "ACE_fieldDressing"},
                    {4, "ACE_morphine"},
                    {4, "ACE_epinephrine"},
                    {8, "ACE_tourniquet"},
                    {10, "adv_aceSplint_splint"},
                    {2, "ACE_CableTie"},
                    {2, "KAT_Painkillers"}
                };
        };

        class InfantryCrate: FireTeamCrate {
            name = "Infanterie Kiste";
            inventory[] =  {
                    {30, "keko_RifleMag"},
                    {30, "keko_RifleMag_Tracer"},
                    {5, "keko_MGMag"},
                    {5, "keko_MGMag_Tracer"},
                    {6, "keko_PistolMag"},
                    {10, "keko_UGLMag"}
                };
        };

        class GrenadesCrate: EmptyCrate {
            name = "Granaten Kiste";
            cfgName[] = {"Box_NATO_Grenades_F","Box_Ind_Grenades_F","Box_East_Grenades_F"};
            inventory[] = {
                    {20, "keko_UGLMag"},
                    {10, "HandGrenade"},
                    {10, "SmokeShell"},
                    {10, "SmokeShellGreen"},
                    {10, "SmokeShellRed"},
                    {5, "SmokeShellPurple"},
                    {5, "SmokeShellOrange"},
                    {5, "SmokeShellBlue"}
                };
        };

        class MGCrate: EmptyCrate {
            name = "MG Kiste";
            cfgName[] = {"Box_NATO_WpsSpecial_F","Box_IND_WpsSpecial_F","Box_EAST_WpsSpecial_F"};
            inventory[] = {
                    {10, "keko_MGMag"},
                    {10, "keko_MGMag_Tracer"},
                    {1, "B_Carryall_cbr"},
                    {2, "ACE_SpareBarrel"}
                };
        };

        class ATCrate: EmptyCrate {
            name = "Anti-Tank Kiste";
            cfgName[] = {"Box_NATO_WpsLaunch_F","Box_NATO_WpsLaunch_F","Box_East_WpsLaunch_F"};
            inventory[] = {
                    {1, "keko_AntiTankLauncher"},
                    {3, "keko_AntiTankMag"},
                    {1, "B_FieldPack_cbr"},
                    {2, "keko_DisposableRocketLauncher"}
                };
        };

        class ATGustavCrate: EmptyCrate {
            name = "Anti-Tank Kiste (Gustav)";
            cfgName[] = {"Box_NATO_WpsLaunch_F","Box_NATO_WpsLaunch_F","Box_East_WpsLaunch_F"};
            inventory[] = {
                    {2, "launch_MRAWS_green_rail_F"},
                    {1, "launch_MRAWS_green_F"},
                    {6, "MRAWS_HEAT_F"},
                    {1, "B_FieldPack_cbr"}
                };
        };

        class AACrate: ATCrate {
            name = "Anti-Air Kiste";
            inventory[] = {
                    {1, "keko_AntiAirLauncher"},
                    {3, "keko_AntiAirMag"},
                    {1, "B_FieldPack_cbr"}
                };
        };

        class MedicCrate: EmptyCrate {
            name = "Medic Kiste";
            cfgName[] = {"ACE_medicalSupplyCrate_advanced","ACE_medicalSupplyCrate_advanced","ACE_medicalSupplyCrate_advanced"};
            inventory[] = {
                    {50, "ACE_fieldDressing"},
                    {50, "ACE_elasticBandage"},
                    {20, "ACE_quikclot"},
                    {4, "ACE_bodyBag"},
                    {10, "ACE_epinephrine"},
                    {10, "ACE_morphine"},
                    {10, "ACE_salineIV"},
                    {10, "ACE_salineIV_500"},
                    {2, "ACE_surgicalKit"},
                    {10, "ACE_tourniquet"},
                    {10, "KAT_larynx"},
                    {10, "KAT_guedel"},
                    {1, "KAT_accuvac"},
                    {30, "adv_aceSplint_splint"},
                    {5, "KAT_Painkillers"}
                };
        };

        class SupportCrate: EmptyCrate {
            name = "Support Kiste";
            cfgName[] = {"Box_NATO_Support_F","Box_IND_Support_F","Box_East_Support_F"};
            inventory[] = {
                    {2, "SmokeShell"},
                    {2, "ToolKit"},
                    {2, "ACE_EntrenchingTool"},
                    {2, "ACE_SpraypaintRed"},
                    {1, "ACE_wirecutter"},
                    {2, "ACE_SpraypaintGreen"},
                    {1, "ACE_rangecard"},
                    {10, "ACE_sandbag"},
                    {2, "ACE_MapTools"},
                    {10, "ACE_CableTie"},
                    {2, "ACE_UAVBattery"},
                    {1, "ACE_DefusalKit"},
                    {1, "ACE_minedetector"},
                    {1, "ACE_RangeTable_82mm"},
                    {4, "ACE_IR_Strobe"},
                    {8, "ACE_HandFlare_Red"},
                    {1, "adv_aceCPR_AED"},
                    {1, "ACE_personalAidKit"},
                    {4, "ACE_bodyBag"},
                    {1, "KAT_X_AED"},
                    {5, "KAT_Painkillers"}
                };
        };

        class EODCrate: EmptyCrate {
            name = "Sprengmittel Kiste";
            cfgName[] = {"Box_NATO_AmmoOrd_F","Box_IND_AmmoOrd_F","Box_East_AmmoOrd_F"};
            inventory[] = {
                    {4, "ACE_Cellphone"},
                    {2, "ACE_Clacker"},
                    {2, "ACE_M26_Clacker"},
                    {4, "ACE_DefusalKit"},
                    {2, "ACE_DeadManSwitch"},
                    {1, "MineDetector"},
                    {1, "ToolKit"},
                    {1, "ACE_VMH3"},
                    {1, "ACE_VMM3"},
                    {3, "ATMine_Range_Mag"},
                    {4, "APERSTripMine_Wire_Mag"},
                    {4, "ClaymoreDirectionalMine_Remote_Mag"},
                    {4, "SatchelCharge_Remote_Mag"},
                    {10, "DemoCharge_Remote_Mag"}
                };
        };

        class RationsCrate: SupportCrate {
            name = "Rationen Kiste";
            inventory[] = {
                    {20, "murshun_cigs_matches"},
                    {20, "murshun_cigs_cigpack"},
                    {10, "immersion_pops_poppack"},
                    {10, "ACE_banana"},
                    {10, "KAT_Painkillers"}
                };
        };

        class CQBCrate: GrenadesCrate {
            name = "OHK/CQB Kiste";
            inventory[] =  {
                    {40, "ACE_M84"},
                    {20, "ACE_CableTie"},
                    {10, "ACE_SpraypaintGreen"},
                    {10, "ACE_SpraypaintRed"}
                };
        };

        class SpareWheel: EmptyCrate {
            name = "Ersatzrad";
            cfgName[] = {"ACE_Wheel","ACE_Wheel","ACE_Wheel"};
        };

        class SpareTrack: EmptyCrate {
            name = "Ersatzkette";
            cfgName[] = {"ACE_Track","ACE_Track","ACE_Track"};
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
#include "FactionLDF.hpp"

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
#include "FactionRussiaEMRDesert.hpp"
#include "FactionRussiaEMRSummer.hpp"
#include "FactionRussiaSpeznas.hpp"
#include "FactionBundeswehrFleck.hpp"
#include "FactionBundeswehrTropen.hpp"
#include "FactionBundeswehrSchnee.hpp"
#include "FactionChinesePLAWoodland.hpp"
#include "FactionChinesePLADesert.hpp"
#include "FactionBlackorder.hpp"
#include "FactionBlackorderRedBerets.hpp"
#include "FactionSpecOpsMulticam.hpp"
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
#include "FactionUNSCDFBlack.hpp"
#include "FactionUNSCDFSnow.hpp"
#include "FactionUNSCDFMarines.hpp"
#include "FactionUNSCDFMarinesHCW.hpp"
#include "FactionUNSCDF_ODST.hpp"
#include "FactionSystemsAlliance.hpp"
