class FactionBundeswehrTropen: FactionBundeswehrFleck {
    name = "[Main] Bundeswehr (Tropentarn)";

    class uniform: uniform {
        Default[] = {
                "PBW_Uniform3_tropen",
                "PBW_Uniform4_tropen",
                "PBW_Uniform4K_tropen"
            };
    };

    class vest: vest {
        Default[] = {
                "BWA3_Vest_JPC_Radioman_Tropen",
                "BWA3_Vest_JPC_Rifleman_Tropen",
                "BWA3_Vest_JPC_Leader_Tropen"
            };
        Driver[] = { "BWA3_Vest_Tropen" };
    };

    class backpack: backpack {
        Lead[] = { "TFAR_rt1523g_big_bwmod_tropen" };
        Command[] = { "TFAR_rt1523g_big_bwmod_tropen" };
        Sergeant[] = { "TFAR_rt1523g_big_bwmod_tropen" };
        SQL[] = { "TFAR_rt1523g_big_bwmod_tropen" };
        Doctor[] = { "BWA3_Kitbag_Tropen_Medic" };
        Medic[] = { "BWA3_Kitbag_Tropen_Medic" };
        RiflemanAT[] = { "BWA3_AssaultPack_Tropen" };
        LMG[] = { "BWA3_FieldPack_Tropen" };
        LMGAsst[] = { "BWA3_FieldPack_Tropen" };
        MMG[] = { "BWA3_FieldPack_Tropen" };
        MMGAsst[] = { "BWA3_FieldPack_Tropen" };
        AASpecialist[] = { "BWA3_FieldPack_Tropen" };
        AASpecialistAsst[] = { "BWA3_FieldPack_Tropen" };
        EOD[] = { "BWA3_Carryall_Tropen" };
        Engineer[] = { "BWA3_Carryall_Tropen" };
        JTAC[] = { "TFAR_rt1523g_big_bwmod_tropen" };
    };

    class helmet: helmet {
        Default[] = {
                "PBW_Helm1_tropen",
                "PBW_Helm1_tropen_HBO",
                "PBW_Helm1_tropen_HBOD",
                "PBW_Helm1_tropen_H",
                "PBW_Helm3_tropen",
                "PBW_Helm4_tropen",
                "PBW_Helm4_tropen_HBO",
                "PBW_Helm4_tropen_HBOD",
                "PBW_Helm4_tropen_H",
                "PBW_Helm6_tropen"
            };
        Lead[] = { "PBW_muetze2_tropen" };
        Command[] = { "PBW_muetze1_tropen" };
    };
};
