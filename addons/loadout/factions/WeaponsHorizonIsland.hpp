class weapons: weapons {
    // Primary
    class keko_W_RHS_M16A4: PrimaryWeapon
    {
        cfgName = "rhs_weap_m16a4_carryhandle";
        silencers[] = {"rhsusf_acc_nt4_black"};
        magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"};
    };

    // Grenadier
    class keko_W_RHS_M16A4_GL: keko_W_RHS_M16A4    {
        cfgName = "rhs_weap_m16a4_carryhandle_M203";
        uglMagazines[] = {"rhs_mag_M441_HE"};
    };
    class keko_W_RHS_M16A4_GL_SMOKE: keko_W_RHS_M16A4_GL    {
        uglMagazines[] = {"1Rnd_SmokeRed_Grenade_shell"};
    };

    // Marksman
    class keko_W_RHS_M14EBR: PrimaryWeapon
    {
        cfgName = "rhs_weap_m14ebrri";
        scopes[] = {"rhsusf_acc_harris_bipod"};
        bipods[] = {"rhsusf_acc_leupoldmk4"};
        magazines[] = {"rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m62_Mag"};
    };

    // LMG
    class keko_W_RHS_M249: PrimaryWeapon
    {
        cfgName = "rhs_weap_m249";
        silencers[] = {"rhsusf_acc_nt4_black"};
        magazines[] = {"rhsusf_100Rnd_556x45_M855_soft_pouch_coyote","rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote"};
    };

    // MMG
    class keko_W_RHS_M240B: PrimaryWeapon
    {
        cfgName = "rhs_weap_m240B";
        silencers[] = {"muzzle_snds_h_mg"};
        magazines[] = {"rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m62_tracer"};
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
    class keko_W_RHS_M136_HEAT: LauncherWeapon
    {
        cfgName = "rhs_weap_M136";
    };

};
