class weapons: weapons {
    // Primary
    class keko_W_A3_TRG21: PrimaryWeapon
    {
        cfgName = "arifle_TRG21_F";
        scopes[] = {"optic_ACO_grn"};
        rails[] = {"acc_flashlight"};
        silencers[] = {"muzzle_snds_m"};
        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red"};
    };

    // Grenadier
    class keko_W_A3_TRG21_GL: keko_W_A3_TRG21
    {
        cfgName = "arifle_TRG21_GL_F";
        uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
    };

    // Marksman
    class keko_W_A3_DMR: PrimaryWeapon
    {
        cfgName = "srifle_DMR_06_olive_F";
        scopes[] = {"optic_KHS_blk"};
        rails[] = {"acc_flashlight"};
        silencers[] = {"muzzle_snds_b"};
        magazines[] = {"20Rnd_762x51_Mag","ACE_20Rnd_762x51_Mag_Tracer"};
    };

    // LMG
    class keko_W_A3_Mk200: PrimaryWeapon
    {
        cfgName = "LMG_Mk200_F";
        scopes[] = {"optic_aco"};
        rails[] = {"acc_flashlight"};
        bipods[] = {"bipod_03_F_blk"};
        silencers[] = {"muzzle_snds_h_mg"};
        magazines[] = {"200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Tracer"};
    };

    // MMG
    class keko_W_A3_MMG: PrimaryWeapon
    {
        cfgName = "MMG_02_black_F";
        scopes[] = {"optic_Arco"};
        rails[] = {"acc_flashlight"};
        bipods[] = {"bipod_01_F_snd"};
        silencers[] = {"muzzle_snds_338_black"};
        magazines[] = {"130Rnd_338_Mag"};
    };



    // Secondary
    class keko_W_Rook: SecondaryWeapon
    {
        cfgName = "hgun_Rook40_F";
        silencers[] = {"muzzle_snds_l"};
        magazines[] = {"16Rnd_9x21_Mag"};
    };



    // Launcher
    class keko_W_NLAW: LauncherWeapon
    {
        cfgName = "launch_NLAW_F";
    };
    class keko_W_RPG7: LauncherWeapon
    {
        cfgName = "launch_RPG7_F";
        magazines[] = {"RPG7_F"};
    };
    class keko_W_TITAN_AA: LauncherWeapon
    {
        cfgName = "launch_I_Titan_F";
        magazines[] = {"Titan_AA"};
    };
};
