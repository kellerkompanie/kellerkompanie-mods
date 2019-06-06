class FactionMarines_Woodland: FactionMarines_Desert {
    name = "[Main] U.S. Marine Corps - Marine Pattern Woodland";
    logisticsHelicopter = "rhsusf_CH53E_USMC";

    class uniform: uniform {
        Default[] = { "rhs_uniform_FROG01_wd" };
    };

    class backpack: backpack {
        Lead[] = { "tfw_ilbe_wd" };
        Command[] = { "tfw_ilbe_wd" };
        Sergeant[] = { "tfw_ilbe_wd" };
        SQL[] = { "tfw_ilbe_wd" };
        JTAC[] = { "tfw_ilbe_a_wd" };
    };

    class helmet: helmet {
        Default[] = {
                "rhsusf_mich_helmet_marpatwd",
                "rhsusf_mich_helmet_marpatwd_alt",
                "rhsusf_mich_helmet_marpatwd_alt_headset",
                "rhsusf_mich_helmet_marpatwd_headset",
                "rhsusf_mich_helmet_marpatwd_norotos",
                "rhsusf_mich_helmet_marpatwd_norotos_arc",
                "rhsusf_mich_helmet_marpatwd_norotos_arc_headset",
                "rhsusf_mich_helmet_marpatwd_norotos_headset",
                "rhsusf_lwh_helmet_marpatwd",
                "rhsusf_lwh_helmet_marpatwd_ess",
                "rhsusf_lwh_helmet_marpatwd_headset"
            };
        Lead[] = { "rhs_8point_marpatwd" };
        Command[] = { "rhs_booniehat2_marpatwd" };
    };
};
