class weapons: weapons {
    // Primary
    class keko_W_RHS_M16A4: PrimaryWeapon
    {
        cfgName = "rhs_weap_m16a4_carryhandle";
        scopes[] = {"rhsusf_acc_ACOG_RMR"};
        rails[] = {"rhsusf_acc_anpeq15_bk_light"};
        silencers[] = {"rhsusf_acc_nt4_black"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"};
    };

    class keko_W_RHS_M4A1: PrimaryWeapon
    {
        cfgName = "rhs_weap_m4a1_carryhandle";
        scopes[] = {"rhsusf_acc_ACOG_RMR"};
        rails[] = {"rhsusf_acc_anpeq15_bk_light"};
        silencers[] = {"rhsusf_acc_nt4_black"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"};
    };

    // Grenadier
    class keko_W_RHS_M16A4_GL: keko_W_RHS_M16A4    {
        cfgName = "rhs_weap_m16a4_carryhandle_M203";
        uglMagazines[] = {"rhs_mag_M441_HE"};
    };
    class keko_W_RHS_M16A4_GL_HUNTIR: keko_W_RHS_M16A4_GL {
        uglMagazines[] = {"ACE_HuntIR_M203"};
    };

    class keko_W_RHS_M4A1_GL: keko_W_RHS_M4A1 {
        cfgName = "rhs_weap_m4a1_carryhandle_m203";
        uglMagazines[] = {"rhs_mag_M441_HE"};
    };
    class keko_W_RHS_M4A1_GL_HUNTIR: keko_W_RHS_M4A1_GL {
        uglMagazines[] = {"ACE_HuntIR_M203"};
    };

    // Marksman
    class keko_W_RHS_M14EBR: PrimaryWeapon
    {
        cfgName = "rhs_weap_m14ebrri";
        scopes[] = {"rhsusf_acc_ACOG3"};
        rails[] = {"rhsusf_acc_anpeq15_bk_light"};
        bipods[] = {"rhsusf_acc_harris_bipod"};
        magazines[] = {"rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m118_special_Mag"};
    };

    // LMG
    class keko_W_RHS_M249: PrimaryWeapon
    {
        cfgName = "rhs_weap_m249_pip_L_para";
        scopes[] = {"rhsusf_acc_ACOG3"};
        rails[] = {"rhsusf_acc_anpeq15_bk_light"};
        silencers[] = {"rhsusf_acc_nt4_black"};
        magazines[] = {"rhs_200rnd_556x45_M_SAW"};
    };

    // MMG
    class keko_W_RHS_M240B: PrimaryWeapon
    {
        cfgName = "rhs_weap_m240B";
        scopes[] = {"rhsusf_acc_ACOG3"};
        rails[] = {"acc_pointer_IR"};
        silencers[] = {"muzzle_snds_h_mg"};
        magazines[] = {"rhsusf_100Rnd_762x51_m62_tracer"};
    };

    // Sniper
    // TODO replace with faction specific
    class keko_W_A3_LRR: PrimaryWeapon
    {
        cfgName = "srifle_LRR_F";
        magazines[] = {"ACE_7Rnd_408_305gr_Mag"};
    };



    // Secondary
    class keko_W_RHS_M9: SecondaryWeapon
    {
        cfgName = "rhsusf_weap_m9";
        magazines[] = {"rhsusf_mag_15Rnd_9x19_FMJ"};
    };



    // Launcher
    class keko_W_RHS_SMAW: LauncherWeapon
    {
        cfgName = "rhs_weap_smaw";
        scopes[] = {"rhs_weap_optic_smaw"};
        magazines[] = {"rhs_mag_smaw_HEDP"};
    };
    class keko_W_RHS_STINGER: LauncherWeapon
    {
        cfgName = "rhs_weap_fim92";
        magazines[] = {"rhs_fim92_mag"};
    };
    class keko_W_RHS_M136_HEDP: LauncherWeapon
    {
        cfgName = "rhs_weap_M136";
    };

};
