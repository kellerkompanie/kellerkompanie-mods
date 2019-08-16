class weapons: weapons {
    // Primary
    class keko_W_A3_KATIBA: PrimaryWeapon {
        cfgName = "arifle_Katiba_F";
        scopes[] = {"optic_Arco_blk_F"};
        rails[] = {"acc_pointer_IR"};
        silencers[] = {"muzzle_snds_h"};
        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer"};
    };
    class keko_W_A3_KATIBA_SHORT: keko_W_A3_KATIBA {
        cfgName = "arifle_Katiba_C_F";
    };
    class keko_W_A3_KATIBA_GL: keko_W_A3_KATIBA    {
        cfgName = "arifle_Katiba_GL_F";
        uglMagazines[] = {"1Rnd_HE_Grenade_shell"};
    };
    class keko_W_A3_KATIBA_GL_HUNTIR: keko_W_A3_KATIBA_GL    {
        uglMagazines[] = {"ACE_HuntIR_M203"};
    };
    class keko_W_A3_DMR: PrimaryWeapon {
        cfgName = "srifle_DMR_01_F";
        scopes[] = {"optic_DMS"};
        rails[] = {"acc_pointer_IR"};
        bipods[] = {"bipod_02_F_hex"};
        silencers[] = {"muzzle_snds_b"};
        magazines[] = {"10Rnd_762x54_Mag","ACE_10Rnd_762x54_Tracer_mag"};
    };
    class keko_W_A3_ZAFIR: PrimaryWeapon {
        cfgName = "LMG_Zafir_F";
        scopes[] = {"optic_aco"};
        rails[] = {"acc_pointer_IR"};
        bipods[] = {"bipod_02_F_hex"};
        magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box_Tracer"};
    };
    class keko_W_A3_MMG_CSAT: PrimaryWeapon {
        cfgName = "MMG_01_hex_F";
        scopes[] = {"optic_Arco"};
        rails[] = {"acc_pointer_IR"};
        bipods[] = {"bipod_02_F_hex"};
        silencers[] = {"muzzle_snds_93mmg"};
        magazines[] = {"150Rnd_93x64_Mag"};
    };



    // Secondary
    class keko_W_ROOK: SecondaryWeapon {
        cfgName = "hgun_Rook40_F";
        silencers[] = {"muzzle_snds_l"};
        magazines[] = {"16Rnd_9x21_Mag"};
    };
    class keko_W_ROOK_SILENCED: keko_W_ROOK {
        silencers[] = {"muzzle_snds_l"};
    };



    // Launcher
    class keko_W_TITAN_AT_CSAT: LauncherWeapon {
        cfgName = "launch_O_Titan_short_F";
        magazines[] = {"Titan_AT"};
    };
    class keko_W_TITAN_AA_CSAT: LauncherWeapon {
        cfgName = "launch_O_Titan_F";
        magazines[] = {"Titan_AA"};
    };
    class keko_W_RPG32: LauncherWeapon {
        cfgName = "launch_RPG32_F";
        magazines[] = {"RPG32_F"};
    };
};
