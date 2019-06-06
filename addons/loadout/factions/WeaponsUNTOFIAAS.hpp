class weapons: weapons {
    // Primary
    class keko_W_A3_Mk20: PrimaryWeapon
    {
        cfgName = "NAA_arifle_Mk20_black_F";
        scopes[] = {"optic_aco"};
        rails[] = {"acc_flashlight"};
        silencers[] = {"muzzle_snds_m"};
        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red"};
    };

    // Staff
    class keko_W_A3_Mk20C: keko_W_A3_Mk20
    {
        cfgName = "NAA_arifle_Mk20C_black_F";
    };

    // Grenadier
    class keko_W_A3_Mk20_GL: keko_W_A3_Mk20    {
        cfgName = "NAA_arifle_Mk20_GL_black_F";
        uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
    };
    class keko_W_A3_Mk20_GL_HuntIR: keko_W_A3_Mk20_GL    {
        uglMagazines[] = {"ACE_HuntIR_M203"};
    };


    // Marksman
    class keko_W_A3_EBR: PrimaryWeapon {
        cfgName = "srifle_EBR_MRCO_LP_BI_F";
        scopes[] = {"optic_SOS"};
        rails[] = {"acc_pointer_IR"};
        bipods[] = {"bipod_03_F_blk"};
        silencers[] = {"muzzle_snds_b"};
        magazines[] = {"20Rnd_762x51_Mag"};

    };

    // LMG
    class keko_W_A3_Stoner: PrimaryWeapon
    {
        cfgName = "LMG_Mk200_F";
        scopes[] = {"optic_aco"};
        rails[] = {"acc_flashlight"};
        magazines[] = {"200Rnd_65x39_cased_Box_Tracer"};
    };

    // MMG
    class keko_W_A3_MMG: PrimaryWeapon
    {
        cfgName = "MMG_02_sand_F";
        scopes[] = {"optic_aco"};
        rails[] = {"acc_flashlight"};
        bipods[] = {"bipod_01_F_blk"};
        silencers[] = {"muzzle_snds_338_black"};
        magazines[] = {"130Rnd_338_Mag"};
    };


    // Secondary
    class keko_W_TACTICAL: SecondaryWeapon
    {
        cfgName = "MYR_pistol_heavy_1_black";
        silencers[] = {"muzzle_snds_acp"};
        magazines[] = {"11Rnd_45ACP_Mag"};
    };



    // Launcher
    class keko_W_TITAN_AT: LauncherWeapon
    {
        cfgName = "launch_B_Titan_short_F";
        magazines[] = {"Titan_AT"};
    };
    class keko_W_TITAN_AA: LauncherWeapon
    {
        cfgName = "launch_B_Titan_F";
        magazines[] = {"Titan_AA"};
    };
    class keko_W_NLAW: LauncherWeapon
    {
        cfgName = "launch_NLAW_F";
    };

};
