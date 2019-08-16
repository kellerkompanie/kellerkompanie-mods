class weapons: weapons {
    // Primary
    class keko_W_A3_MX: PrimaryWeapon
    {
        cfgName = "GUR_arifle_MX_blkANDkhk_F";
        scopes[] = {"optic_Hamr"};
        rails[] = {"acc_flashlight"};
        silencers[] = {"muzzle_snds_h"};
        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer"};
    };

    // Staff
    class keko_W_A3_MXC: keko_W_A3_MX
    {
        cfgName = "GUR_arifle_MXC_blkANDkhk_F";
        scopes[] = {"optic_Aco"};
        rails[] = {"acc_flashlight"};
    };

    // Grenadier
    class keko_W_A3_MX_GL: keko_W_A3_MX    {
        cfgName = "GUR_arifle_MX_GL_blkANDkhk_F";
        uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
    };
    class keko_W_A3_MX_GL_HUNTIR: keko_W_A3_MX_GL    {
        uglMagazines[] = {"ACE_HuntIR_M203"};
    };

    // Marksman
    class keko_W_A3_MXM: PrimaryWeapon
    {
        cfgName = "arifle_MXM_F";
        scopes[] = {"optic_SOS"};
        rails[] = {"acc_flashlight"};
        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer"};
    };

    // LMG
    class keko_W_A3_MX_SW: keko_W_A3_MX
    {
        cfgName = "arifle_MX_SW_F";
        magazines[] = {"100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag_Tracer"};
    };

    // MMG
    class keko_W_A3_MMG: PrimaryWeapon
    {
        cfgName = "GUR_navid_black_F";
        scopes[] = {"optic_Arco"};
        rails[] = {"acc_flashlight"};
        bipods[] = {"bipod_01_F_blk"};
        silencers[] = {"muzzle_snds_338_black"};
         magazines[] = {"150Rnd_93x64_Mag"};
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
