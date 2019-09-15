class weapons: weapons {
    // Primary
    class keko_W_BAF_L85A2: PrimaryWeapon
    {
        cfgName = "UK3CB_BAF_L85A2";
        scopes[] = {"RKSL_optic_LDS"};
        magazines[] = {"UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd_T"};
    };

    // Grenadier
    class keko_W_BAF_L85A2_UGL: keko_W_BAF_L85A2
    {
        cfgName = "UK3CB_BAF_L85A2_UGL";
        uglMagazines[] = {"UK3CB_BAF_1Rnd_HE_Grenade_Shell"};
    };
    class keko_W_BAF_L85A2_UGL_SMOKE: keko_W_BAF_L85A2_UGL
    {
        uglMagazines[] = {"1Rnd_Smoke_Grenade_shell"};
    };

    // Marksman
    class keko_W_BAF_L129A1: PrimaryWeapon
    {
        cfgName = "UK3CB_BAF_L129A1";
        scopes[] = {"UK3CB_BAF_TA648_308"};
        magazines[] = {"UK3CB_BAF_762_L42A1_20Rnd","UK3CB_BAF_762_L42A1_20Rnd_T"};
    };

    // LMG
    class keko_W_BAF_L110: PrimaryWeapon
    {
        cfgName = "UK3CB_BAF_L110A3";
        magazines[] = {"UK3CB_BAF_556_200Rnd","UK3CB_BAF_556_200Rnd_T"};
    };

    // MMG
    class keko_W_BAF_L7A2: PrimaryWeapon
    {
        cfgName = "UK3CB_BAF_L7A2";
        magazines[] = {"UK3CB_BAF_762_200Rnd","UK3CB_BAF_762_200Rnd_T"};
    };


    // Secondary
    class keko_W_BAF_L131A1: SecondaryWeapon
    {
        cfgName = "UK3CB_BAF_L131A1";
        magazines[] = {"UK3CB_BAF_9_17Rnd"};
    };



    // Launcher
    class keko_W_BAF_JAVELIN: LauncherWeapon
    {
        cfgName = "UK3CB_BAF_Javelin_Slung_Tube";
        magazines[] = {"UK3CB_BAF_Javelin_Slung_Tube"};
        scopes[] = {"UK3CB_BAF_Javelin_CLU"};
    };
    class keko_W_STRINGER: LauncherWeapon
    {
        cfgName = "rhs_weap_fim92";
        magazines[] = {"rhs_fim92_mag"};
    };
    class keko_W_AT4: LauncherWeapon
    {
        cfgName = "UK3CB_BAF_AT4_CS_AP_Launcher";
    };
};
