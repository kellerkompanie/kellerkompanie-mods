class weapons: weapons {
    // Primary
    class keko_W_G36: PrimaryWeapon
    {
        cfgName = "BWA3_G36A2";
        scopes[] = {"bwa3_optic_eotech"};
        rails[] = {"bwa3_acc_varioray_irlaser"};
        silencers[] = {"bwa3_muzzle_snds_rotex_iiic"};
        magazines[] = {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36_Tracer"};
    };
    class keko_W_G36_D: keko_W_G36
    {
        cfgName = "BWA3_G36A2_tan";
    };

    // Grenadier
    class keko_W_G36_GL: keko_W_G36
    {
        cfgName = "BWA3_G36A2_AG40";
        uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
    };
    class keko_W_G36_GL_D: keko_W_G36_GL
    {
        cfgName = "BWA3_G36A2_AG40_tan";
    };

    class keko_W_G36_GL_JTAC: keko_W_G36
    {
        cfgName = "BWA3_G36A2_AG40";
        uglMagazines[] = {"1Rnd_SmokeGreen_Grenade_shell"};
    };
    class keko_W_G36_GL_JTAC_D: keko_W_G36_GL_JTAC
    {
        cfgName = "BWA3_G36A2_AG40_tan";
    };

    // Marksman
    class keko_W_G28: PrimaryWeapon
    {
        cfgName = "BWA3_G28";
        scopes[] = {"bwa3_optic_zo4x30_microt2_brown"};
        rails[] = {"bwa3_acc_varioray_irlaser"};
        silencers[] = {"bwa3_muzzle_snds_rotex_iia"};
        magazines[] = {"BWA3_10Rnd_762x51_G28","BWA3_10Rnd_762x51_G28_Tracer"};
    };

    // LMG
    class keko_W_MG4: PrimaryWeapon
    {
        cfgName = "BWA3_MG4";
        scopes[] = {"bwa3_optic_zo4x30"};
        silencers[] = {"bwa3_muzzle_snds_rotex_iiic"};
        magazines[] = {"BWA3_200Rnd_556x45","BWA3_200Rnd_556x45_Tracer"};
    };
    class keko_W_MG4_snow: keko_W_MG4
    {
        cfgName = "BWAdd_MG4";
    };


    // MMG
    class keko_W_MG3: PrimaryWeapon
    {
        cfgName = "BWA3_MG3";
        magazines[] = {"BWA3_120Rnd_762x51_soft","BWA3_120Rnd_762x51_Tracer_soft"};
    };
    class keko_W_MG3_snow: keko_W_MG3
    {
        cfgName = "BWAdd_MG3";
    };
    class keko_W_MG5: PrimaryWeapon
    {
        cfgName = "BWA3_MG5";
        silencers[] = {"bwa3_muzzle_snds_rotex_iia"};
        magazines[] = {"BWA3_120Rnd_762x51_soft","BWA3_120Rnd_762x51_Tracer_soft"};
    };
    class keko_W_MG5_tan: keko_W_MG5
    {
        cfgName = "BWA3_MG5_tan";
    };
    class keko_W_MG5_snow: keko_W_MG5
    {
        cfgName = "BWAdd_MG5";
    };



    // Sniper
    class keko_W_G29: PrimaryWeapon
    {
        cfgName = "BWA3_G29";
        scopes[] = {"bwa3_optic_m5xi_msr_microt2"};
        rails[] = {"bwa3_acc_varioray_irlaser"};
        silencers[] = {"bwa3_muzzle_snds_rotex_monoblock"};
        magazines[] = {"BWA3_10Rnd_86x70_G29"};
    };
    class keko_W_G82: PrimaryWeapon
    {
        cfgName = "BWA3_G82";
        scopes[] = {"bwa3_optic_hensoldt"};
        magazines[] = {"BWA3_10Rnd_127x99_G82"};
    };


    // Secondary
    class keko_W_P8: SecondaryWeapon
    {
        cfgName = "BWA3_P8";
        magazines[] = {"BWA3_15Rnd_9x19_P8"};
    };



    // Launcher
    class keko_W_PZF3: LauncherWeapon
    {
        cfgName = "BWA3_PzF3_Tandem_Loaded";
        magazines[] = {"BWA3_PzF3_Tandem"};
    };
    class keko_W_RGW90: LauncherWeapon
    {
        cfgName = "BWA3_RGW90_Loaded";
    };
    class keko_W_Fliegerfaust: LauncherWeapon
    {
        cfgName = "BWA3_Fliegerfaust";
        magazines[] = {"BWA3_Fliegerfaust_Mag"};
    };
};
