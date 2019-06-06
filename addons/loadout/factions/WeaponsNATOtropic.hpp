class weapons: weapons {
    // Primary
    class keko_W_A3_MX_TROPIC: PrimaryWeapon
    {
        cfgName = "arifle_MX_khk_F";
        scopes[] = {"optic_Hamr_khk_F"};
        rails[] = {"acc_pointer_IR"};
        silencers[] = {"muzzle_snds_h_khk_f"};
        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer"};
    };

    // Staff
    class keko_W_A3_MXC_TROPIC: keko_W_A3_MX_TROPIC
    {
        cfgName = "arifle_MXC_khk_F";
    };

    // Grenadier
    class keko_W_A3_MX_GL_TROPIC: keko_W_A3_MX_TROPIC {
        cfgName = "arifle_MX_GL_khk_F";
        uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
    };
    class keko_W_A3_MX_GL_TROPIC_HUNTIR: keko_W_A3_MX_GL_TROPIC {
        cfgName = "arifle_MX_GL_khk_F";
        uglMagazines[] = {"ACE_HuntIR_M203"};
    };

    // Marksman
    class keko_W_A3_MXM_TROPIC: keko_W_A3_MX_TROPIC
    {
        cfgName = "arifle_MXM_khk_F";
        scopes[] = {"optic_SOS_khk_F"};
        rails[] = {"acc_pointer_IR"};
        bipods[] = {"bipod_01_F_khk"};
        magazines[] = {"ACE_30Rnd_65x47_Scenar_mag"};
    };

    // LMG
    class keko_W_A3_MX_SW_TROPIC: keko_W_A3_MX_TROPIC
    {
        cfgName = "arifle_MX_SW_khk_F";
        magazines[] = {"100Rnd_65x39_caseless_mag_Tracer"};
    };

    // MMG
    class keko_W_A3_MMG_BLACK: PrimaryWeapon
    {
        cfgName = "MMG_02_black_F";
        scopes[] = {"optic_Arco"};
        rails[] = {"acc_pointer_IR"};
        bipods[] = {"bipod_01_F_blk"};
        magazines[] = {"130Rnd_338_Mag"};
    };

    // Sniper
    class keko_W_A3_LRR: PrimaryWeapon
    {
        cfgName = "srifle_LRR_F";
        scopes[] = {"optic_LRPS_tna_F"};
        magazines[] = {"ACE_7Rnd_408_305gr_Mag"};
    };
    class keko_W_A3_LRR_CAMO: keko_W_A3_LRR
    {
        cfgName = "srifle_LRR_camo_F";
    };



    // Secondary
    class keko_W_P99_TROPIC: SecondaryWeapon
    {
        cfgName = "hgun_P07_khk_F";
        silencers[] = {"muzzle_snds_l"};
        magazines[] = {"16Rnd_9x21_Mag"};
    };
    class keko_W_TACTICAL: SecondaryWeapon
    {
        cfgName = "hgun_Pistol_heavy_01_F";
        silencers[] = {"muzzle_snds_acp"};
        magazines[] = {"11Rnd_45ACP_Mag"};

    };
    class keko_W_TACTICAL_SPECOPS: keko_W_TACTICAL
    {
        scopes[] = {"optic_MRD"};
        rails[] = {"acc_flashlight_pistol"};
        silencers[] = {"muzzle_snds_acp"};
    };



    // Launcher
    class keko_W_TITAN_AT: LauncherWeapon
    {
        cfgName = "launch_B_Titan_short_tna_F";
        magazines[] = {"Titan_AT"};
    };
    class keko_W_TITAN_AA: LauncherWeapon
    {
        cfgName = "launch_B_Titan_tna_F";
        magazines[] = {"Titan_AA"};
    };
    class keko_W_NLAW: LauncherWeapon
    {
        cfgName = "launch_NLAW_F";
    };
};
