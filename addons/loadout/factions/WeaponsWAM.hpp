class weapons: weapons {
    // Primary
    class keko_W_A3_CTAR: PrimaryWeapon
    {
        cfgName = "arifle_TRG21_F";
        scopes[] = {"optic_aco"};
        rails[] = {"acc_flashlight"};
        silencers[] = {"muzzle_snds_m"};
        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red"};
    };

    // Staff
    class keko_W_A3_CTARC: keko_W_A3_CTAR
    {
        cfgName = "arifle_TRG20_F";
        scopes[] = {};
    };

    // Grenadier
    class keko_W_A3_CTAR_GL: keko_W_A3_CTAR    {
        cfgName = "arifle_TRG21_GL_F";
        uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
    };
    class keko_W_A3_CTAR_GL_HuntIR: keko_W_A3_CTAR_GL    {
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
        scopes[] = {"optic_holosight"};
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
    class keko_W_Grach: SecondaryWeapon
    {
        cfgName = "hgun_Rook40_F";
        silencers[] = {"muzzle_snds_l"};
        magazines[] = {"16Rnd_9x21_Mag"};
    };



    // Launcher
    class keko_W_RPG32: LauncherWeapon
    {
        cfgName = "RPG32_Brown";
        magazines[] = {"RPG32_F"};
    };
    class keko_W_TITAN_AA: LauncherWeapon
    {
        cfgName = "launch_B_Titan_F";
        magazines[] = {"Titan_AA"};
    };
    class keko_W_RPG: LauncherWeapon
    {
        cfgName = "launch_RPG7_F";
        magazines[] = {"RPG7_F"};
    };
};
