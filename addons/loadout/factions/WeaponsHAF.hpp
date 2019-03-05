class weapons: weapons {
    // Primary
    class keko_W_A3_MX: PrimaryWeapon
    {
        cfgName = "arifle_MX_Black_F";
        scopes[] = {"optic_Hamr"};
        rails[] = {"acc_pointer_IR"};
        silencers[] = {"muzzle_snds_h"};
        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer"};
    };

    // Staff
    class keko_W_A3_MXC: keko_W_A3_MX
    {
        cfgName = "arifle_MXC_Black_F";
        scopes[] = {"optic_Aco"};
        rails[] = {"acc_pointer_IR"};
    };

    // Grenadier
    class keko_W_A3_MX_GL: keko_W_A3_MX    {
        cfgName = "arifle_MX_GL_Black_F";
        uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
    };
    class keko_W_A3_MX_GL_HUNTIR: keko_W_A3_MX_GL    {
        uglMagazines[] = {"ACE_HuntIR_M203"};
    };

    // Marksman
    class keko_W_A3_MXM: PrimaryWeapon
    {
        cfgName = "arifle_MXM_Black_F";
        scopes[] = {"optic_SOS"};
        rails[] = {"acc_pointer_IR"};
        magazines[] = {"ACE_30Rnd_65x47_Scenar_mag"};
    };

    // LMG
    class keko_W_A3_MX_SW: keko_W_A3_MX
    {
        cfgName = "arifle_MX_SW_Black_F";
        magazines[] = {"100Rnd_65x39_caseless_mag_Tracer"};
    };

    // MMG
    class keko_W_A3_MMG: PrimaryWeapon
    {
        cfgName = "MMG_02_black_F";
        scopes[] = {"optic_Arco"};
        rails[] = {"acc_pointer_IR"};
        bipods[] = {"bipod_01_F_blk"};
        silencers[] = {"muzzle_snds_338_black"};
        magazines[] = {"130Rnd_338_Mag"};
    };

    // Sniper
    class keko_W_A3_LRR: keko_W_A3_MX
    {
        cfgName = "srifle_LRR_F";
        magazines[] = {"ACE_7Rnd_408_305gr_Mag"};
    };



    // Secondary
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
