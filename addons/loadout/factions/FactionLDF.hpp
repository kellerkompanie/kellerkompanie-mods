class FactionLDF: FactionBase {
    name = "[Minimal] LDF - Livonian Defense Force";
    logisticsHelicopter = "I_E_Heli_light_03_unarmed_F";

    #include "WeaponsLDF.hpp"

    class uniform: uniform {
        Default[] = {
            U_I_E_Uniform_01_sweater_F,
            U_I_E_Uniform_01_tanktop_F,
            U_I_E_Uniform_01_F
        };
        Lead[] = { U_I_E_Uniform_01_shortsleeve_F };
        Command[] = { U_I_E_Uniform_01_shortsleeve_F };
        HeliPilot[] = { U_I_E_Uniform_01_coveralls_F };
        HeliCrew[] = { U_I_E_Uniform_01_coveralls_F };
    };

    class vest: vest {
        Default[] = {
            V_CarrierRigKBT_01_light_EAF_F
        };
        Command[] = { V_BandollierB_oli };
        Doctor[] = { V_CarrierRigKBT_01_heavy_EAF_F };
        Medic[] = { V_CarrierRigKBT_01_heavy_EAF_F };
        EOD[] = { V_CarrierRigKBT_01_heavy_EAF_F };
        Driver[] = { V_CarrierRigKBT_01_EAF_F };
        HeliPilot[] = { V_CarrierRigKBT_01_EAF_F };
    };

    class backpack: backpack {
        Default[] = { };
        Doctor[] = { B_FieldPack_green_F    };
        Medic[] = { B_FieldPack_green_F };
        LMG[] = { B_AssaultPack_eaf_F };
        LMGAsst[] = { B_AssaultPack_eaf_F };
        Lead[] = { B_RadioBag_01_eaf_F };
        Command[] = { B_RadioBag_01_eaf_F };
        Sergeant[] = { B_RadioBag_01_eaf_F };
        SQL[] = { B_RadioBag_01_eaf_F };
        MMG[] = { B_AssaultPack_eaf_F };
        MMGAsst[] = { B_AssaultPack_eaf_F };
        ATSpecialist[] = { B_FieldPack_green_F };
        ATSpecialistAsst[] = { B_FieldPack_green_F };
        AASpecialist[] = { B_FieldPack_green_F };
        AASpecialistAsst[] = { B_FieldPack_green_F };
        EOD[] = { B_Carryall_eaf_F };
        Engineer[] = { B_Carryall_eaf_F };
        JTAC[] = { B_RadioBag_01_eaf_F    };
        UAVOperator[] = { I_E_UAV_01_backpack_F };
    };

    class backpackInventory: backpackInventory {
        Lead[] = {
            {1, ACE_HuntIR_monitor},
            {4, ACE_HuntIR_M203}
        };
        Sergeant[] = {
            {1, ACE_HuntIR_monitor},
            {4, ACE_HuntIR_M203}
        };
        SQL[] = {
            {1, ACE_HuntIR_monitor},
            {4, ACE_HuntIR_M203}
        };
        JTAC[] = {
            {4, Laserbatteries}
        };
    };

    class helmet: helmet {
        default[] = {
            H_HelmetHBK_headset_F,
            H_HelmetHBK_chops_F,
            H_HelmetHBK_ear_F,
            H_HelmetHBK_F
        };
        command[] = { H_Beret_EAF_01_F };
        lead[] = { H_MilCap_eaf };
        Driver[] = { H_HelmetCrew_I_E,H_Tank_eaf_F };
        HeliPilot[] = { H_PilotHelmetHeli_I_E };
        HeliCrew[] = { H_CrewHelmetHeli_I_E };
        JetPilot[] = { H_PilotHelmetFighter_I_E };
    };

    class primary: primary {
        Default[] = { keko_W_PrometOlive };
        Lead[] = { keko_W_PrometOlive_GL_HuntIR };
        SQL[] = { keko_W_PrometOlive_GL_HuntIR };
        FTL[] = { keko_W_PrometOlive_GL };
        Grenadier[] = { keko_W_PrometOlive_GL };
        LMG[] = { keko_W_Mk200 };
        MMG[] = { keko_W_A3_MMG_BLACK };
        Marksman[] = { keko_W_PrometMR };
        JTAC[] = { keko_W_PrometOlive_GL_HuntIR };
        UAVOperator[] = { keko_W_PrometOlive_GL_HuntIR };
        Crewman[] = {keko_W_P90};
        HeliPilot[] = {keko_W_P90};
        HeliCrew[] = {keko_W_P90};
        JetPilot[] = {};
    };

    class secondary: secondary {
        Default[] = { keko_W_ACP_olive };
    };

    class launcher: launcher {
        RiflemanAT[] = { keko_W_NLAW };
        ATSpecialist[] = { keko_W_TITAN_AT };
        AASpecialist[] = { keko_W_TITAN_AA };
    };

};
