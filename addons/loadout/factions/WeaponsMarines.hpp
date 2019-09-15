class weapons: weapons {
    // Primary
    class keko_W_RHS_M16A4: PrimaryWeapon
    {
        cfgName = "rhs_weap_m16a4_carryhandle";
        scopes[] = {"rhsusf_acc_ACOG_RMR"};
        rails[] = {"rhsusf_acc_anpeq15_bk_light"};
        silencers[] = {"rhsusf_acc_nt4_black"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red"};
    };

    class keko_W_RHS_M4A1: PrimaryWeapon
    {
        cfgName = "rhs_weap_m4a1_carryhandle";
        scopes[] = {"rhsusf_acc_ACOG_RMR"};
        rails[] = {"rhsusf_acc_anpeq15_bk_light"};
        silencers[] = {"rhsusf_acc_nt4_black"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red"};
    };

    // Grenadier
    class keko_W_RHS_M16A4_GL: keko_W_RHS_M16A4    {
        cfgName = "rhs_weap_m16a4_carryhandle_M203";
        uglMagazines[] = {"rhs_mag_M441_HE"};
    };

    class keko_W_RHS_M4A1_GL: keko_W_RHS_M4A1 {
        cfgName = "rhs_weap_m4a1_carryhandle_m203";
        uglMagazines[] = {"rhs_mag_M441_HE"};
    };

    // Marksman
    class keko_W_RHS_M14EBR: PrimaryWeapon
    {
        cfgName = "rhs_weap_m14ebrri";
        scopes[] = {"rhsusf_acc_ACOG3"};
        rails[] = {"rhsusf_acc_anpeq15_bk_light"};
        bipods[] = {"rhsusf_acc_harris_bipod"};
        magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m62_Mag"};
    };

    // LMG
    class keko_W_RHS_M249: PrimaryWeapon
    {
        cfgName = "rhs_weap_m249_pip_L_para";
        scopes[] = {"rhsusf_acc_ACOG3"};
        rails[] = {"rhsusf_acc_anpeq15_bk_light"};
        silencers[] = {"rhsusf_acc_nt4_black"};
        magazines[] = {"rhsusf_100Rnd_556x45_M855_soft_pouch_coyote","rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote"};
    };

    // MMG
    class keko_W_RHS_M240B: PrimaryWeapon
    {
        cfgName = "rhs_weap_m240B";
        scopes[] = {"rhsusf_acc_ACOG3"};
        rails[] = {"acc_pointer_IR"};
        silencers[] = {"muzzle_snds_h_mg"};
        magazines[] = {"rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m62_tracer"};
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
