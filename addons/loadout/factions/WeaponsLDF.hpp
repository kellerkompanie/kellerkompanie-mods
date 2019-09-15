class weapons: weapons {

    // Primary
    class keko_W_PrometOlive: PrimaryWeapon {
        cfgName = "arifle_MSBS65_F";
        scopes[] = {"optic_ico_01_f"};
        rails[] = {"acc_pointer_ir"};
        silencers[] = {"muzzle_snds_h"};
        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer"};
    };
    class keko_W_PrometOlive_GL: keko_W_PrometOlive {
        cfgName = "arifle_MSBS65_GL_F";
        uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
    };

    // LMG
    class keko_W_Mk200: PrimaryWeapon {
        cfgName = "LMG_Mk200_black_F";
        scopes[] = {"optic_aco"};
        rails[] = {"acc_pointer_ir"};
        silencers[] = {"muzzle_snds_h"};
        bipods[] = {"bipod_01_f_blk"};
        magazines[] = {"200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Tracer"};
    };

    // MMG
    class keko_W_A3_MMG_BLACK: PrimaryWeapon
    {
        cfgName = "MMG_02_black_F";
        scopes[] = {"optic_Arco"};
        rails[] = {"acc_pointer_IR"};
        bipods[] = {"bipod_01_F_blk"};
        silencers[] = {"muzzle_snds_338_black"};
        magazines[] = {"130Rnd_338_Mag"};
    };

    // Marksman
    class keko_W_PrometMR: PrimaryWeapon {
        cfgName = "arifle_MSBS65_Mark_F";
        scopes[] = {"optic_sos"};
        rails[] = {"acc_pointer_ir"};
        silencers[] = {"muzzle_snds_h"};
        bipods[] = {"bipod_01_f_blk"};
        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer"};
    };

    // Crewman/Pilot
    class keko_W_P90: PrimaryWeapon {
        cfgName = "SMG_03C_black";
        magazines[] = {"50Rnd_570x28_SMG_03"};
    };



    // Secondary
    class keko_W_ACP_olive {
        cfgName = "hgun_Pistol_heavy_01_green_F";
        silencers[] = {"muzzle_snds_acp"};
        magazines[] = {"11Rnd_45ACP_Mag"};
    };

    // Launcher
    class keko_W_TITAN_AT: LauncherWeapon
    {
        cfgName = "launch_I_Titan_short_F";
        magazines[] = {"Titan_AT"};
    };
    class keko_W_TITAN_AA: LauncherWeapon
    {
        cfgName = "launch_I_Titan_eaf_F";
        magazines[] = {"Titan_AA"};
    };
    class keko_W_NLAW: LauncherWeapon
    {
        cfgName = "launch_NLAW_F";
    };
};
