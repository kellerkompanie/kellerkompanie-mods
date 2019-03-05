class weapons: weapons {
    // Primary
    class keko_W_A3_MX_TROPIC: PrimaryWeapon
    {
        cfgName = "arifle_MX_khk_F";
        scopes[] = {"optic_Hamr_khk_F"};
        rails[] = {"acc_pointer_IR"};
        silencers[] = {"muzzle_snds_h"};
        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer"};
    };
    class keko_W_A3_MX_BLACK: keko_W_A3_MX_TROPIC
    {
        cfgName = "arifle_MX_Black_F";
        scopes[] = {"optic_Hamr"};
        rails[] = {"acc_pointer_IR"};
    };

    class keko_W_A3_HK416: PrimaryWeapon
    {
        cfgName = "arifle_SPAR_01_blk_F";
        scopes[] = {"optic_ERCO_blk_F"};
        rails[] = {"acc_pointer_IR"};
        silencers[] = {"muzzle_snds_m"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red"};
    };
    class keko_W_A3_HK416_TROPIC: keko_W_A3_HK416
    {
        cfgName = "arifle_SPAR_01_khk_F";
        scopes[] = {"optic_erco_khk_f"};
        rails[] = {"acc_pointer_IR"};
    };



    // Staff
    class keko_W_A3_MXC_TROPIC: keko_W_A3_MX_TROPIC
    {
        cfgName = "arifle_MXC_khk_F";
        scopes[] = {"optic_Aco"};
        rails[] = {"acc_pointer_IR"};
    };
    class keko_W_A3_MXC_BLACK: keko_W_A3_MXC_TROPIC
    {
        cfgName = "arifle_MXC_Black_F";
    };

    class keko_W_A3_P90: PrimaryWeapon
    {
        cfgName = "SMG_03C_black";
        silencers[] = {"muzzle_snds_570"};
        magazines[] = {"50Rnd_570x28_SMG_03"};
    };
    class keko_W_A3_P90_TROPIC: keko_W_A3_P90
    {
        cfgName = "SMG_03C_khaki";
    };





    // Grenadier
    class keko_W_A3_MX_GL_TROPIC: keko_W_A3_MX_TROPIC {
        cfgName = "arifle_MX_GL_khk_F";
        uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
    };
    class keko_W_A3_MX_GL_TROPIC_HUNTIR: keko_W_A3_MX_GL_TROPIC {
        uglMagazines[] = {"ACE_HuntIR_M203"};
    };
    class keko_W_A3_MX_GL_BLACK: keko_W_A3_MX_GL_TROPIC {
        cfgName = "arifle_MX_GL_Black_F";
        scopes[] = {"optic_Hamr"};
        rails[] = {"acc_pointer_IR"};
    };
    class keko_W_A3_MX_GL_BLACK_HUNTIR: keko_W_A3_MX_GL_BLACK {
        uglMagazines[] = {"ACE_HuntIR_M203"};
    };

    class keko_W_A3_HK416_GL: keko_W_A3_HK416 {
        cfgName = "arifle_SPAR_01_GL_blk_F";
        uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
    };
    class keko_W_A3_HK416_GL_HUNTIR: keko_W_A3_HK416_GL {
        uglMagazines[] = {"ACE_HuntIR_M203"};
    };
    class keko_W_A3_HK416_GL_TROPIC: keko_W_A3_HK416_TROPIC {
        cfgName = "arifle_SPAR_01_GL_khk_F";
        uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
    };
    class keko_W_A3_HK416_GL_TROPIC_HUNTIR: keko_W_A3_HK416_GL_TROPIC {
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
    class keko_W_A3_MXM_BLACK: keko_W_A3_MXM_TROPIC
    {
        cfgName = "arifle_MXM_Black_F";
        scopes[] = {"optic_SOS"};
        rails[] = {"acc_pointer_IR"};
    };

    class keko_W_A3_HK417: PrimaryWeapon
    {
        cfgName = "arifle_SPAR_03_blk_F";
        scopes[] = {"optic_SOS"};
        bipods[] = {"bipod_01_F_blk"};
        silencers[] = {"muzzle_snds_b"};
        magazines[] = {"20Rnd_762x51_Mag","ACE_20Rnd_762x51_Mag_Tracer"};
    };
    class keko_W_A3_HK417_TROPIC: keko_W_A3_HK417
    {
        cfgName = "arifle_SPAR_03_khk_F";
        scopes[] = {"optic_SOS"};
        bipods[] = {"bipod_01_F_snd"};
    };



    // LMG
    class keko_W_A3_MX_SW_TROPIC: keko_W_A3_MX_TROPIC
    {
        cfgName = "arifle_MX_SW_khk_F";
        magazines[] = {"100Rnd_65x39_caseless_mag_Tracer"};
    };
    class keko_W_A3_MX_SW_BLACK: keko_W_A3_MX_SW_TROPIC
    {
        cfgName = "arifle_MX_SW_Black_F";
    };

    class keko_W_A3_HK416_DRUM: keko_W_A3_HK416
    {
        cfgName = "arifle_SPAR_02_blk_F";
        scopes[] = {"optic_ERCO_blk_F"};
        rails[] = {"acc_pointer_IR"};
        bipods[] = {"bipod_01_F_blk"};
        magazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_Tracer_F"};
    };
    class keko_W_A3_HK416_DRUM_TROPIC: keko_W_A3_HK416_DRUM
    {
        cfgName = "arifle_SPAR_02_khk_F";
        scopes[] = {"optic_erco_khk_f"};
        rails[] = {"acc_pointer_IR"};
        bipods[] = {"bipod_01_F_snd"};
    };

    class keko_W_A3_STONER: PrimaryWeapon {
        cfgName = "LMG_Mk200_F";
        rails[] = {"acc_pointer_IR"};
        bipods[] = {"bipod_03_F_blk"};
        silencers[] = {"muzzle_snds_h_mg"};
        magazines[] = {"200Rnd_65x39_cased_Box_Tracer"};
    };




    // MMG
    class keko_W_A3_MMG_BLACK: PrimaryWeapon
    {
        cfgName = "MMG_02_black_F";
        silencers[] = {"muzzle_snds_338_black"};
        magazines[] = {"130Rnd_338_Mag"};
    };

    class keko_W_A3_MINIMI: PrimaryWeapon
    {
        cfgName = "LMG_03_F";
        silencers[] = {"muzzle_snds_m"};
        magazines[] = {"200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Tracer_Red_F"};
    };



    // Secondary
    class keko_W_P99: SecondaryWeapon
    {
        cfgName = "hgun_P07_F";
        silencers[] = {"muzzle_snds_L"};
        magazines[] = {"16Rnd_9x21_Mag"};
    };
    class keko_W_P99_TROPIC: keko_W_P99
    {
        cfgName = "hgun_P07_khk_F";
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
    class keko_W_GUSTAV: LauncherWeapon
    {
        cfgName = "launch_MRAWS_green_F";
        rails[] = {"ACE_acc_pointer_green"};
        magazines[] = {"MRAWS_HEAT_F"};
    };

};
