class FactionSystemsAlliance: FactionBase {
    name = "[Sci-Fi] Systems Alliance";
    logisticsHelicopter = "MEOP_veh_kodiak_alliance";

    disposableRocketLauncher = "MEOP_launch_ml78_F";
    antiTankLauncher = "MEOP_launch_ml78_F";
    antiAirLauncher = "MEOP_launch_ml78_F";
    grenade = "MEOP_frag_HandGrenade";
    smokeWhite = "OPTRE_M2_Smoke";
    smokeGreen = "OPTRE_M2_Smoke_Green";

    #include "WeaponsSystemsAlliance.hpp"

    class role {
        Command = "Commander";
        Lead = "Lead";
        SQL = "Sergeant";
        FTL = "Corporal";
        Doctor = "Medic";
        Rifleman = "Rifleman";
        ATSpecialist = "Anti-Tank Specialist";
        AASpecialist = "Anti-Air Specialist";
        EOD = "EOD";
        Engineer = "Engineer";
    };

    class uniform: uniform {
        Default[] = {"Hum_Merc2_Als_F_CombatUniform"};
        EOD[] = {"Hum_AjaxAlianEng_F_CombatUniform"};
        Engineer[] = {"Hum_AjaxAlianEng_F_CombatUniform"};
        Command[] = {"Hum_ClothingUnif_al_F_CombatUniform"};
    };

    class uniformInventory: uniformInventory {
        Default[] = {
            {15, "ACE_fieldDressing"},
            {2, "ACE_morphine"},
            {3, "ACE_tourniquet"}
        };
    };

    class vest: vest {
        Default[] = { "Hum_MercAl_armor_v1" };
        Command[] = {};
        Lead[] = { "Hum_MercAlLt_armor_v1" };
        SQL[] = {"Hum_MercAlSerg_armor_v1"};
        Engineer[] = {"Hum_Ajax_armor_v1_alianEng"};
        EOD[] = {"Hum_Ajax_armor_v1_alianEng"};
        FTL[] = {"Hum_MercAlCorp_armor_v1"};
    };

    class backpack: backpack {
        Doctor[] = { "OPTRE_ILCS_Rucksack_Medical" };
        ATSpecialist[] = { "Hid_back_pack_v1" };
        AASpecialist[] = { "Hid_back_pack_v1" };
        EOD[] = { "OPTRE_ILCS_Rucksack_Heavy" };
        Engineer[] = { "OPTRE_ILCS_Rucksack_Heavy" };
    };

    class helmet: helmet {
        Default[] = { "Hum_helmet_AlianTroop" };
        Command[] = {};
        Lead[] = {"Hum_BeretAl_ser"};
        SQL[] = {"Hum_helmetO_AlianTroop"};
        Engineer[] = {"Hum_helmet_Red"};
        EOD[] = {"Hum_helmet_Red"};
    };

    class primary: primary {
        Default[] = { "M8_Avenger_Blue_Holo" };
        Lead[] = { "M8_Avenger_Blue_Sight" };
        SQL[] = { "M8_Avenger_Blue_Sight" };
        FTL[] = { "M8_Avenger_GL_Blue" };
        EOD[] = {"M8_Avenger"};
        Engineer[] = {"M8_Avenger"};
    };

    class secondary: secondary {
        Default[] = { };
        Lead[] = {"M3_Pistol"};
    };

    class launcher: launcher {
        ATSpecialist[] = { "ML78_Launcher_AT" };
        AASpecialist[] = { "ML78_Launcher_AA" };
    };

    class goggles: goggles {
        Lead[] = {
            "G_MEOP_HeadPhone_1"
        };
        Command[] = {
            "G_MEOP_Visor_1",
            "G_MEOP_Visor_2",
            "G_MEOP_HeadPhone_1"
        };
    };

    class optics: optics{
        Command[] = {"OPTRE_Smartfinder"};
        Lead[] = {"OPTRE_Smartfinder"};
        SQL[] = {"OPTRE_Smartfinder"};
        FTL[] = {"OPTRE_Binoculars"};
    };

    class crates {
        class EmptyCrate {
            name = "Empty Crate";
            cfgName[] = {"MEOP_cont_WargearS_Al","MEOP_cont_WargearS_Al","MEOP_cont_WargearS_Al"};
            inventory[] = {};
        };

        class InfantryCrate: EmptyCrate {
            name = "Ammunition Crate";
            inventory[] =  {
                    {5, "MEOP_5Rnd_HE_TurGrenade_shell"},
                    {10, "MEOP_frag_HandGrenade"},
                    {10, "MEOP_1Rnd_HE_TurGrenade_shell"},
                    {10, "MEOP_2Rnd_M8_mag"},
                    {40, "MEOP_30Rnd_M8_mag"}
                };
        };

        class ATCrate: EmptyCrate {
            name = "Anti-Tank Crate";
            cfgName[] = {"MEOP_cont_WargearS","MEOP_cont_WargearS","MEOP_cont_WargearS"};
            inventory[] = {
                    {1, "MEOP_launch_ml78_F"},
                    {3, "MEOP_ML78Missle_AT_F"}
                };
        };

        class AACrate: ATCrate {
            name = "Anti-Air Crate";
            inventory[] = {
                    {1, "MEOP_launch_ml78_F"},
                    {3, "MEOP_ML78Missle_AA_F"}
                };
        };

        class MedicCrate: EmptyCrate {
            name = "Medic Kiste";
            cfgName[] = {"MEOP_cont_MedBox","MEOP_cont_MedBox","MEOP_cont_MedBox"};
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
                    {30, "ACE_splint"}
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
