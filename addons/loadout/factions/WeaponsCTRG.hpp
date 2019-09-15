class weapons: weapons {
    // Primary
    class keko_W_A3_HK416: PrimaryWeapon
    {
        cfgName = "arifle_SPAR_01_blk_F";
        scopes[] = {"optic_ERCO_blk_F"};
        rails[] = {"acc_pointer_IR"};
        silencers[] = {"muzzle_snds_m"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow"};
    };
    class keko_W_A3_HK416_SAND: keko_W_A3_HK416
    {
        cfgName = "arifle_SPAR_01_snd_F";
        scopes[] = {"optic_ERCO_snd_F"};
        rails[] = {"acc_pointer_IR"};
        silencers[] = {"muzzle_snds_m_snd_f"};
    };

    // Staff
    class keko_W_A3_P90: PrimaryWeapon
    {
        cfgName = "SMG_03C_black";
        silencers[] = {"muzzle_snds_570"};
        magazines[] = {"50Rnd_570x28_SMG_03"};
    };
    class keko_W_A3_P90_SAND: keko_W_A3_P90
    {
        cfgName = "SMG_03C_khaki";
    };

    // Grenadier
    class keko_W_A3_HK416_GL: keko_W_A3_HK416
    {
        cfgName = "arifle_SPAR_01_GL_blk_F";
        uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
    };
    class keko_W_A3_HK416_GL_SAND: keko_W_A3_HK416_SAND    {
        cfgName = "arifle_SPAR_01_GL_snd_F";
        uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
    };

    // Marksman
    class keko_W_A3_HK417: PrimaryWeapon
    {
        cfgName = "arifle_SPAR_03_blk_F";
        scopes[] = {"optic_SOS"};
        bipods[] = {"bipod_01_F_blk"};
        silencers[] = {"muzzle_snds_b"};
        magazines[] = {"20Rnd_762x51_Mag","ACE_20Rnd_762x51_Mag_Tracer"};
    };
    class keko_W_A3_HK417_SAND: keko_W_A3_HK417
    {
        cfgName = "arifle_SPAR_03_snd_F";
        scopes[] = {"optic_SOS"};
        bipods[] = {"bipod_01_F_snd"};
        silencers[] = {"muzzle_snds_b_snd_f"};
    };

    // LMG
    class keko_W_A3_HK416_DRUM: keko_W_A3_HK416
    {
        cfgName = "arifle_SPAR_02_blk_F";
        scopes[] = {"optic_ERCO_blk_F"};
        rails[] = {"acc_pointer_IR"};
        bipods[] = {"bipod_01_F_blk"};
        magazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_Tracer_F"};
    };
    class keko_W_A3_HK416_DRUM_SAND: keko_W_A3_HK416_DRUM
    {
        cfgName = "arifle_SPAR_02_snd_F";
        scopes[] = {"optic_ERCO_snd_F"};
        rails[] = {"acc_pointer_IR"};
        bipods[] = {"bipod_01_F_snd"};
    };

    // MMG
    class keko_W_A3_MINIMI: PrimaryWeapon
    {
        cfgName = "LMG_03_F";
        scopes[] = {"optic_ERCO_blk_F"};
        rails[] = {"acc_pointer_IR"};
        silencers[] = {"muzzle_snds_m"};
        magazines[] = {"200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Tracer_Red_F"};
    };

    // Sniper
    class keko_W_A3_NOREEN: PrimaryWeapon
    {
        cfgName = "srifle_DMR_02_F";
        scopes[] = {"optic_KHS_blk"};
        silencers[] = {"muzzle_snds_338_black"};
        magazines[] = {"10Rnd_338_Mag"};
    };
    class keko_W_A3_NOREEN_TAN: keko_W_A3_NOREEN
    {
        cfgName = "srifle_DMR_02_sniper_F";
        scopes[] = {"optic_KHS_tan"};
        silencers[] = {"muzzle_snds_338_sand"};
    };



    // Secondary
    class keko_W_P99: SecondaryWeapon
    {
        cfgName = "hgun_P07_F";
        silencers[] = {"muzzle_snds_570"};
        magazines[] = {"16Rnd_9x21_Mag"};
    };
    class keko_W_P99_SPECOPS: keko_W_P99
    {
        silencers[] = {"muzzle_snds_570"};
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
