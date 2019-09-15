class FactionAAF: FactionBase {
    name = "[Minimal] AAF - Altis Armed Forces";
    logisticsHelicopter = "I_Heli_Transport_02_F";

    antiTankLauncher = launch_I_Titan_short_F;
    antiAirLauncher = launch_I_Titan_F;

    #include "WeaponsAAF.hpp"

    class role: role {
        RiflemanATTanks = "Rifleman Anti-Tank (Tanks DLC)";
    };

    class uniform: uniform {
        Default[] = { "U_I_CombatUniform", "U_I_CombatUniform_shortsleeve" };
        Lead[] = { "U_I_OfficerUniform" };
        Command[] = { "U_I_OfficerUniform" };
        HeliPilot[] = { "U_I_HeliPilotCoveralls" };
        JetPilot[] = { "U_I_pilotCoveralls" };
    };

    class vest: vest {
        Default[] = { "V_PlateCarrierIA1_dgtl", "V_PlateCarrierIA2_dgtl" };
        Lead[] = { "V_TacVest_oli" };
        Command[] = { "V_TacVest_oli" };
        Doctor[] = { "V_PlateCarrierIA2_dgtl" };
        Medic[] = { "V_PlateCarrierIA2_dgtl" };
        Driver[] = { "V_BandollierB_oli" };
        HeliPilot[] = { "V_TacVest_oli" };
        JetPilot[] = { "V_TacVest_oli" };
    };

    class backpack: backpack {
        Lead[] = { "TFAR_anprc155" };
        Command[] = { "TFAR_anprc155" };
        Sergeant[] = { "TFAR_anprc155" };
        SQL[] = { "TFAR_anprc155" };
        Doctor[] = { "B_Kitbag_rgr" };
        Medic[] = { "B_Kitbag_rgr" };
        RiflemanATTanks[] = { "B_AssaultPack_dgtl" };
        LMG[] = { "B_FieldPack_oli" };
        LMGAsst[] = { "B_FieldPack_oli" };
        MMG[] = { "B_FieldPack_oli" };
        MMGAsst[] = { "B_FieldPack_oli" };
        ATSpecialist[] = { "B_FieldPack_oli" };
        ATSpecialistAsst[] = { "B_FieldPack_oli" };
        AASpecialist[] = { "B_FieldPack_oli" };
        AASpecialistAsst[] = { "B_FieldPack_oli" };
        EOD[] = { "B_Carryall_oli" };
        Engineer[] = { "B_Carryall_oli" };
        JTAC[] = { "TFAR_anprc155" };
        UAVOperator[] = { "I_UAV_01_backpack_F" };
    };

    class backpackInventory: backpackInventory {
        RiflemanATTanks[] = { { 2, "MRAWS_HEAT_F" } };
        JTAC[] = { { 4, "Laserbatteries" } };
    };

    class helmet: helmet {
        Default[] = { "H_HelmetIA" };
        Lead[] = { "H_MilCap_dgtl" };
        Command[] = { "H_Cap_blk_Raven" };
        Driver[] = { "H_HelmetCrew_I" };
        HeliPilot[] = { "H_PilotHelmetHeli_I" };
        HeliCrew[] = { "H_CrewHelmetHeli_I" };
        JetPilot[] = { "H_PilotHelmetFighter_I" };
        Survivor[] = {
                "H_HeadBandage_clean_F",
                "H_HeadBandage_stained_F",
                "H_HeadBandage_bloody_F"
            };
    };

    class primary: primary {
        Default[] = { keko_W_A3_F2000_SHORT };
        Lead[] = { keko_W_A3_F2000_UGL };
        SQL[] = { keko_W_A3_F2000_UGL };
        FTL[] = { keko_W_A3_F2000_UGL };
        Grenadier[] = { keko_W_A3_F2000_UGL };
        LMG[] = { keko_W_A3_STONER };
        MMG[] = { keko_W_A3_MMG_AAF };
        Marksman[] = { keko_W_A3_EBR };
        JTAC[] = { keko_W_A3_F2000_UGL };
        UAVOperator[] = { keko_W_A3_F2000_UGL };
    };

    class secondary: secondary {
        Default[] = { keko_W_A3_ACP };
    };

    class launcher: launcher {
        RiflemanAT[] = { keko_W_NLAW };
        RiflemanATTanks[] = { keko_W_MAAWS };
        ATSpecialist[] = { keko_W_TITAN_AT_AAF };
        AASpecialist[] = { keko_W_TITAN_AA_AAF };
    };

};
