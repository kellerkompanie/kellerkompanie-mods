class FactionBundeswehrSchnee: FactionBundeswehrFleck {
    name = "[Main] Bundeswehr (Schneetarn)";

    class uniform: uniform {
        Default[] = { "PzBrig17_Uniform_Snow", "PzBrig17_Uniform_idz_Snow" };
    };

    class backpack: backpack {
        Lead[] = { "FRXA_tf_rt1523g_Ranger_Green" };
        Command[] = { "FRXA_tf_rt1523g_Ranger_Green" };
        Sergeant[] = { "FRXA_tf_rt1523g_Ranger_Green" };
        SQL[] = { "FRXA_tf_rt1523g_Ranger_Green" };
        JTAC[] = { "tf_rt1523g_big_bwmod" };
    };

    class helmet: helmet {
        Default[] = {
                "PzBrig17_M92_Snow",
                "PzBrig17_M92_Snow",
                "PzBrig17_M92_Snow",
                "PzBrig17_M92_Snow",
                "PBW_Helm1_fleck",
                "PBW_Helm2_fleck",
                "PBW_Helm2_fleck_H",
                "PBW_Helm1_fleck_HBOD",
                "PBW_Helm1_fleck_HBO",
                "PBW_Helm1_fleck_H"
            };
    };
};
