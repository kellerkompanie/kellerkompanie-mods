class FactionUSBlackOpsTropic: FactionBase {
    name = "[Minimal] U.S. BlackOps (Tropic)";
    logisticsHelicopter = "B_CTRG_Heli_Transport_01_tropic_F";

    #include "WeaponsUSBlackOpsTropic.hpp"

    class role: role {
        Lead = "Lead (MX)";
        Lead416 = "Lead (HK416)";
        Command = "Command (MX)";
        Command416 = "Command (HK416)";
        SQL = "Squad Leader (MX)";
        SQL416 = "Squad Leader (HK416)";
        Sergeant = "Sergeant (MX)";
        Sergeant416 = "Sergeant (HK416)";
        FTL = "Fire Team Leader (MX)";
        FTL416 = "Fire Team Leader (HK416)";
        Doctor = "Doctor (MX)";
        DoctorP90 = "Doctor (P90)";
        Medic = "Medic (MX)";
        MedicP90 = "Medic (P90)";
        Rifleman = "Rifleman (MX)";
        Rifleman416 = "Rifleman (HK416)";
        RiflemanAT = "Rifleman Anti-Tank (MX + NLAW)";
        RiflemanAT416 = "Rifleman Anti-Tank (HK416 + NLAW)";
        RiflemanATGustav = "Rifleman Anti-Tank (MX + Gustav)";
        RiflemanATGustav416 = "Rifleman Anti-Tank (HK416 + Gustav)";
        Grenadier = "Grenadier (MX)";
        Grenadier416 = "Grenadier (HK416)";
        LMG = "LMG (MX)";
        LMG416 = "LMG (HK416)";
        LMGStoner = "LMG (Stoner)";
        LMGAsst = "LMG Asst. (MX + MX)";
        LMGAsstMX416 = "LMG Asst. (MX + HK416)";
        LMGAsstMXStoner = "LMG Asst. (MX + Stoner)";
        LMGAsst416MX = "LMG Asst. (HK416 + MX)";
        LMGAsst416416 = "LMG Asst. (HK416 + HK416)";
        LMGAsst416Stoner = "LMG Asst. (HK416 + Stoner)";
        MMG = "MMG (Vanilla)";
        MMGMinimi = "MMG (Minimi)";
        MMGAsst = "MMG Asst. (MX + Vanilla)";
        MMGAsstMXMinimi = "MMG Asst. (MX + Minimi)";
        MMGAsst416Vanilla = "MMG Asst. (HK416 + Vanilla)";
        MMGAsst416Minimi = "MMG Asst. (HK416 + Minimi)";
        ATSpecialist = "Anti-Tank Specialist (MX + Titan)";
        ATSpecialist416 = "Anti-Tank Specialist (HK416 + Titan)";
        ATSpecialistAsst = "Anti-Tank Specialist Asst. (MX)";
        ATSpecialistAsst416 = "Anti-Tank Specialist Asst. (HK416)";
        AASpecialist = "Anti-Air Specialist (MX)";
        AASpecialist416 = "Anti-Air Specialist (HK416)";
        AASpecialistAsst = "Anti-Air Specialist Asst. (MX)";
        AASpecialistAsst416 = "Anti-Air Specialist Asst. (HK416)";
        Marksman = "Marksman (MXM)";
        Marksman417 = "Marksman (HK417)";
        EOD = "Explosive Specialist (MX)";
        EOD416 = "Explosive Specialist (HK416)";
        Engineer = "Engineer (MX)";
        Engineer416 = "Engineer (HK416)";
        Driver = "Driver/Crewman (MX)";
        DriverP90 = "Driver/Crewman (P90)";
        HeliPilot = "Helicopter Pilot (MX)";
        HeliPilotP90 = "Helicopter Pilot (P90)";
        HeliCrew = "Helicopter Crew (MX)";
        HeliCrewP90 = "Helicopter Crew (P90)";
        JetPilot = "Jet Pilot (MX)";
        JetPilotP90 = "Jet Pilot (P90)";
        JTAC = "JTAC (MX)";
        JTAC416 = "JTAC (HK416)";
        UAVOperator = "UAV Operator (MX)";
        UAVOperator416 = "UAV Operator (HK416)";
    };

    class rank: rank {
        Lead416 = "LIEUTENANT";
        Command416 = "COLONEL";
        SQL416 = "SERGEANT";
        DoctorP90 = "SERGEANT";
        MedicP90 = "CORPORAL";
    };

    class uniform: uniform {
        Default[] = {
                "U_MU_B_soldier_wdl",
                "U_MU_B_soldier_wdl_vest",
                "U_MU_B_soldier_wdl_tshirt"
            };
        Lead[] = { "U_MU_B_soldier_wdl" };
        Lead416[] = { "U_MU_B_soldier_wdl" };
        Command[] = { "U_MU_B_soldier_wdl" };
        HeliPilot[] = { "U_B_HeliPilotCoveralls" };
        HeliPilotP90[] = { "U_B_HeliPilotCoveralls" };
        JetPilot[] = { "U_B_PilotCoveralls" };
        JetPilotP90[] = { "U_B_PilotCoveralls" };
    };

    class uniformInventory: uniformInventory {
        Default[] = {
                { 15, "ACE_fieldDressing" },
                { 1, "ACE_morphine" },
                { 3, "ACE_tourniquet" },
                { 1, "ACE_MapTools" },
                { 1, "ACE_Flashlight_XL50" },
                { 1, "ACE_IR_Strobe_Item" }
            };
    };

    class vest: vest {
        Default[] = { "V_PlateCarrier1_rgr", "V_PlateCarrier2_rgr" };
        Lead[] = { "V_Chestrig_rgr" };
        Lead416[] = { "V_Chestrig_rgr" };
        Command[] = { "V_Chestrig_rgr" };
        Driver[] = { "V_BandollierB_rgr" };
        DriverP90[] = { "V_BandollierB_rgr" };
        HeliPilot[] = { "V_TacVest_camo" };
        HeliPilotP90[] = { "V_TacVest_camo" };
        JetPilot[] = { "V_TacVest_camo" };
        JetPilotP90[] = { "V_TacVest_camo" };
    };

    class backpack: backpack {
        Default[] = {  };
        Lead[] = { "TFAR_rt1523g_black" };
        Lead416[] = { "TFAR_rt1523g_black" };
        Command[] = { "TFAR_rt1523g_black" };
        Sergeant[] = { "TFAR_rt1523g_black" };
        SQL[] = { "TFAR_rt1523g_black" };
        SQL416[] = { "TFAR_rt1523g_black" };
        Doctor[] = { "B_Kitbag_rgr" };
        DoctorP90[] = { "B_Kitbag_rgr" };
        Medic[] = { "B_Kitbag_rgr" };
        MedicP90[] = { "B_Kitbag_rgr" };
        RiflemanATGustav[] = { "B_Kitbag_rgr" };
        RiflemanATGustav416[] = { "B_Kitbag_rgr" };
        LMG[] = { "B_FieldPack_khk" };
        LMGAsst[] = { "B_FieldPack_khk" };
        LMGAsstMX416[] = { "B_FieldPack_khk" };
        LMGAsstMXStoner[] = { "B_FieldPack_khk" };
        LMGAsst416MX[] = { "B_FieldPack_khk" };
        LMGAsst416416[] = { "B_FieldPack_khk" };
        LMGAsst416Stoner[] = { "B_FieldPack_khk" };
        MMG[] = { "B_FieldPack_khk" };
        MMGMinimi[] = { "B_FieldPack_khk" };
        MMGAsst[] = { "B_FieldPack_khk" };
        MMGAsstMXMinimi[] = { "B_FieldPack_khk" };
        MMGAsst416Vanilla[] = { "B_FieldPack_khk" };
        MMGAsst416Minimi[] = { "B_FieldPack_khk" };
        ATSpecialist[] = { "B_FieldPack_cbr" };
        ATSpecialist416[] = { "B_FieldPack_cbr" };
        ATSpecialistAsst[] = { "B_FieldPack_cbr" };
        ATSpecialistAsst416[] = { "B_FieldPack_cbr" };
        AASpecialist[] = { "B_FieldPack_cbr" };
        AASpecialist416[] = { "B_FieldPack_cbr" };
        AASpecialistAsst[] = { "B_FieldPack_cbr" };
        AASpecialistAsst416[] = { "B_FieldPack_cbr" };
        EOD[] = { "B_Carryall_cbr" };
        EOD416[] = { "B_Carryall_cbr" };
        Engineer[] = { "B_Carryall_cbr" };
        Engineer416[] = { "B_Carryall_cbr" };
        JTAC[] = { "TFAR_rt1523g_black" };
        JTAC416[] = { "TFAR_rt1523g_black" };
        UAVOperator[] = { "B_UAV_01_backpack_F" };
        UAVOperator416[] = { "B_UAV_01_backpack_F" };
    };

    class backpackInventory: backpackInventory {
        Default[] = {  };
        RiflemanATGustav[] = { { 1, "MRAWS_HEAT_F" } };
        RiflemanATGustav416[] = { { 1, "MRAWS_HEAT_F" } };
        JTAC[] = { { 4, "Laserbatteries" } };
        JTAC416[] = { { 4, "Laserbatteries" } };
    };

    class helmet: helmet {
        Default[] = {
                "H_HelmetB",
                "H_HelmetB_black",
                "H_HelmetB_camo",
                "H_HelmetB_snakeskin",
                "H_HelmetSpecB",
                "H_HelmetSpecB_blk",
                "H_HelmetSpecB_snakeskin"
            };
        Lead[] = { "H_Booniehat_khk_hs" };
        Lead416[] = { "H_Booniehat_khk_hs" };
        Command[] = { "H_Cap_usblack" };
        Command416[] = { "H_Cap_usblack" };
        Driver[] = { "H_HelmetCrew_I" };
        DriverP90[] = { "H_HelmetCrew_I" };
        HeliPilot[] = { "H_PilotHelmetHeli_B" };
        HeliPilotP90[] = { "H_PilotHelmetHeli_B" };
        HeliCrew[] = { "H_CrewHelmetHeli_B" };
        HeliCrewP90[] = { "H_CrewHelmetHeli_B" };
        JetPilot[] = { "H_PilotHelmetFighter_B" };
        JetPilotP90[] = { "H_PilotHelmetFighter_B" };
    };

    class primary: primary {
        Default[] = { "keko_W_A3_P90", "keko_W_A3_P90_TROPIC" };
        Lead[] = { "keko_W_A3_MX_GL_BLACK", "keko_W_A3_MX_GL_TROPIC" };
        Lead416[] = { "keko_W_A3_HK416_GL", "keko_W_A3_HK416_GL_TROPIC" };
        SQL[] = { "keko_W_A3_MX_GL_BLACK", "keko_W_A3_MX_GL_TROPIC" };
        SQL416[] = { "keko_W_A3_HK416_GL", "keko_W_A3_HK416_GL_TROPIC" };
        FTL[] = { "keko_W_A3_MX_GL_BLACK", "keko_W_A3_MX_GL_TROPIC" };
        FTL416[] = { "keko_W_A3_HK416_GL", "keko_W_A3_HK416_GL_TROPIC" };
        Grenadier[] = { "keko_W_A3_MX_GL_BLACK", "keko_W_A3_MX_GL_TROPIC" };
        Grenadier416[] = { "keko_W_A3_HK416_GL", "keko_W_A3_HK416_GL_TROPIC" };
        LMG[] = { "keko_W_A3_MX_SW_TROPIC", "keko_W_A3_MX_SW_BLACK" };
        LMG416[] = { "keko_W_A3_HK416_DRUM", "keko_W_A3_HK416_DRUM_TROPIC" };
        LMGStoner[] = { "keko_W_A3_STONER" };
        MMG[] = { "keko_W_A3_MMG_BLACK" };
        MMGMinimi[] = { "keko_W_A3_MINIMI" };
        Marksman[] = { "keko_W_A3_MXM_BLACK", "keko_W_A3_MXM_TROPIC" };
        Marksman417[] = { "keko_W_A3_HK417", "keko_W_A3_HK417_TROPIC" };
        JTAC[] = { "keko_W_A3_MX_GL_BLACK", "keko_W_A3_MX_GL_TROPIC" };
        JTAC416[] = { "keko_W_A3_HK416_GL", "keko_W_A3_HK416_GL_TROPIC" };
        UAVOperator[] = { "keko_W_A3_MX_GL_BLACK", "keko_W_A3_MX_GL_TROPIC" };
        UAVOperator416[] = { "keko_W_A3_HK416_GL", "keko_W_A3_HK416_GL_TROPIC" };
    };

    class secondary: secondary {
        Default[] = { "keko_W_P99_TROPIC" };
    };

    class launcher: launcher {
        Default[] = {  };
        RiflemanAT[] = { "keko_W_NLAW" };
        RiflemanAT416[] = { "keko_W_NLAW" };
        RiflemanATGustav[] = { "keko_W_GUSTAV" };
        RiflemanATGustav416[] = { "keko_W_GUSTAV" };
        ATSpecialist[] = { "keko_W_TITAN_AT" };
        ATSpecialist416[] = { "keko_W_TITAN_AT" };
        AASpecialist[] = { "keko_W_TITAN_AA" };
        AASpecialist416[] = { "keko_W_TITAN_AA" };
    };

};
