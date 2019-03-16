class FactionUSArmyUCP: FactionUSArmyOCP {
    name = "[Main] U.S. Army (UCP)";

    class uniform: uniform {
        Default[] = {
                "rhs_uniform_cu_ucp",
                "rhs_uniform_cu_ucp_101st",
                "rhs_uniform_cu_ucp_10th",
                "rhs_uniform_cu_ucp_1stcav",
                "rhs_uniform_cu_ucp_82nd"
            };
        HeliPilot[] = { "rhs_uniform_cu_ucp_1stcav" };
    };

    class vest: vest {
        Default[] = { "rhsusf_iotv_ucp_Rifleman" };
        Lead[] = { "rhsusf_iotv_ucp_Teamleader" };
        Command[] = { "rhsusf_iotv_ucp_Teamleader" };
        Sergeant[] = { "rhsusf_iotv_ucp_Squadleader" };
        SQL[] = { "rhsusf_iotv_ucp_Squadleader" };
        Doctor[] = { "rhsusf_iotv_ucp_Medic" };
        Medic[] = { "rhsusf_iotv_ucp_Medic" };
        Grenadier[] = { "rhsusf_iotv_ucp_Grenadier" };
        LMG[] = { "rhsusf_iotv_ucp_SAW" };
        MMG[] = { "rhsusf_iotv_ucp_SAW" };
        EOD[] = { "rhsusf_iotv_ucp_Repair" };
        Engineer[] = { "rhsusf_iotv_ucp_Repair" };
    };

    class backpack: backpack {
        Doctor[] = { "rhsusf_assault_eagleaiii_ucp" };
        Medic[] = { "rhsusf_assault_eagleaiii_ucp" };
        LMG[] = { "rhsusf_assault_eagleaiii_ucp" };
        LMGAsst[] = { "rhsusf_assault_eagleaiii_ucp" };
        MMG[] = { "rhsusf_assault_eagleaiii_ucp" };
        MMGAsst[] = { "rhsusf_assault_eagleaiii_ucp" };
        AASpecialist[] = { "rhsusf_assault_eagleaiii_ucp" };
        AASpecialistAsst[] = { "rhsusf_assault_eagleaiii_ucp" };
        EOD[] = { "rhsusf_assault_eagleaiii_ucp" };
        Engineer[] = { "rhsusf_assault_eagleaiii_ucp" };
    };

    class helmet: helmet {
        Default[] = {
                "rhsusf_ach_helmet_ucp_norotos",
                "rhsusf_ach_helmet_headset_ess_ucp",
                "rhsusf_ach_helmet_headset_ucp",
                "rhsusf_ach_helmet_ESS_ucp",
                "rhsusf_ach_helmet_ucp"
            };
        Lead[] = { "rhsusf_patrolcap_ucp" };
    };
};
