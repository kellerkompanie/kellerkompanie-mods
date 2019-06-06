class weapons: weapons {
    // Primary
    class keko_W_A3_F2000: PrimaryWeapon {
        cfgName = "NAA_arifle_Mk20_alpat_ard1";
        scopes[] = {"optic_aco"};
        rails[] = {"acc_pointer_IR"};
        silencers[] = {"muzzle_snds_m"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Green"};
    };
    class keko_W_A3_F2000_UGL: keko_W_A3_F2000 {
        cfgName = "NAA_arifle_Mk20_GL_alpat_ard1";
        uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
    };
    class keko_W_A3_F2000_UGL_HUNTIR: keko_W_A3_F2000_UGL {
        uglMagazines[] = {"ACE_HuntIR_M203"};
    };
    class keko_W_A3_F2000_SHORT: keko_W_A3_F2000 {
        cfgName = "NAA_arifle_Mk20C_alpat_ard1";
    };
    class keko_W_A3_STONER: PrimaryWeapon {
        cfgName = "NAA_LMG_03_alpat_F";
        scopes[] = {"optic_aco"};
        rails[] = {"acc_pointer_IR"};
        bipods[] = {"bipod_03_F_blk"};
        silencers[] = {"muzzle_snds_h_mg"};
        magazines[] = {"200Rnd_556x45_Box_Red_F"};
    };
    class keko_W_A3_MMG_AAF: PrimaryWeapon {
        cfgName = "NAA_MMG_02_alpat_F";
        scopes[] = {"optic_aco"};
        rails[] = {"acc_pointer_IR"};
        bipods[] = {"bipod_03_F_blk"};
        silencers[] = {"muzzle_snds_338_black"};
        magazines[] = {"130Rnd_338_Mag"};
    };
    class keko_W_A3_EBR: PrimaryWeapon {
        cfgName = "NAA_EBR_alpat";
        scopes[] = {"optic_SOS"};
        rails[] = {"acc_pointer_IR"};
        bipods[] = {"bipod_03_F_blk"};
        silencers[] = {"muzzle_snds_b"};
        magazines[] = {"20Rnd_762x51_Mag"};
    };
    class keko_W_A3_GM6: PrimaryWeapon {
        cfgName = "srifle_GM6_LRPS_F";
        scopes[] = {"optic_LRPS"};
        rails[] = {"acc_pointer_IR"};
        bipods[] = {"bipod_03_F_blk"};
        magazines[] = {"5Rnd_127x108_Mag"};
    };



    // Secondary
    class keko_W_A3_ACP: SecondaryWeapon {
        cfgName = "hgun_ACPC2_F";
        silencers[] = {"muzzle_snds_acp"};
        magazines[] = {"9Rnd_45ACP_Mag"};
    };
    class keko_W_A3_ACP_SILENCED: keko_W_A3_ACP {
        silencers[] = {"muzzle_snds_acp"};
    };



    // Launcher
    class keko_W_NLAW: LauncherWeapon {
        cfgName = "launch_NLAW_F";
    };
    class keko_W_TITAN_AT_AAF: LauncherWeapon {
        cfgName = "launch_I_Titan_short_F";
        magazines[] = {"Titan_AT"};
    };
    class keko_W_TITAN_AA_AAF: LauncherWeapon {
        cfgName = "launch_I_Titan_F";
        magazines[] = {"Titan_AA"};
    };
    class keko_W_MAAWS: LauncherWeapon {
        cfgName = "launch_MRAWS_olive_rail_F";
        magazines[] = {"MRAWS_HEAT_F"};
    };
};
