class weapons: weapons {
    // Primary
    class keko_W_AK74M: PrimaryWeapon
    {
        cfgName = "rhs_weap_ak74m_zenitco01_b33";
        scopes[] = {"rhs_acc_rakurspm"};
        rails[] = {"rhs_acc_perst3_2dp_h"};
        bipods[] = {"rhs_acc_grip_rk6"};
        silencers[] = {"rhs_acc_dtk4short"};
        magazines[] = {"rhs_30Rnd_545x39_7N6M_plum_AK", "rhs_30Rnd_545x39_AK_plum_green"};
    };
    class keko_W_AK74MR_GL: keko_W_AK74M
    {
        cfgName = "rhs_weap_ak74mr_gp25";
        scopes[] = {"rhs_acc_rakurspm"};
        rails[] = {"rhs_acc_perst3"};
        silencers[] = {"rhs_acc_dtk4short"};
        uglMagazines[] = {"rhs_VOG25"};
    };
    class keko_W_AK74MR: keko_W_AK74M
    {
        cfgName = "rhs_weap_ak74mr";
        scopes[] = {"rhs_acc_rakurspm"};
        rails[] = {"rhs_acc_perst3_2dp_h"};
        bipods[] = {"rhs_acc_grip_rk6"};
        silencers[] = {"rhs_acc_dtk4short"};
    };

    class keko_W_AK105: keko_W_AK74M
    {
        cfgName = "rhs_weap_ak105_zenitco01_b33";
        scopes[] = {"rhs_acc_rakurspm"};
        rails[] = {"rhs_acc_perst3_2dp_h"};
        bipods[] = {"rhs_acc_grip_rk6"};
        silencers[] = {"rhs_acc_dtk4short"};
    };
    class keko_W_ASVAL: PrimaryWeapon
    {
        cfgName = "rhs_weap_asval_grip_npz";
        scopes[] = {"rhsusf_acc_eotech_xps3"};
        rails[] = {"rhs_acc_2dpzenit_ris"};
        magazines[] = {"rhs_20rnd_9x39mm_SP5"};
    };

    //LMG
    class keko_W_RPK: PrimaryWeapon
    {
        cfgName = "rhs_weap_akm_zenitco01_b33";
        scopes[] = {"rhs_acc_1p87"};
        rails[] = {"rhs_acc_dtkakm"};
        bipods[] = {"rhsusf_acc_grip1"};
        magazines[] = {"rhs_75Rnd_762x39mm_89", "rhs_75Rnd_762x39mm_tracer"};
    };


    // Marksman
    class keko_W_SVD: PrimaryWeapon
    {
        cfgName = "rhs_weap_svdp";
        scopes[] = {"rhs_acc_pso1m21"};
        silencers[] = {"rhs_acc_tgpv"};
        magazines[] = {"10Rnd_762x54_Mag","ACE_10Rnd_762x54_Tracer_mag"};
    };


    // Sniper
    class keko_W_T5000: PrimaryWeapon
    {
        cfgName = "rhs_weap_t5000";
        scopes[] = {"rhs_acc_dh520x56"};
        bipods[] = {"rhs_acc_harris_swivel"};
        magazines[] = {"rhs_5Rnd_338lapua_t5000"};
    };


    // Secondary
    class keko_W_Grach: SecondaryWeapon
    {
        cfgName = "rhs_weap_pya";
        magazines[] = {"rhs_mag_9x19_17"};
    };


    // Launcher
    class keko_W_MAAWS: LauncherWeapon
    {
        cfgName = "launch_MRAWS_green_rail_F";
        magazines[] = {"MRAWS_HEAT_F"};
    };
    class keko_W_RPG: LauncherWeapon
    {
        cfgName = "rhs_weap_rpg7";
        scopes[] = {"rhs_acc_pgo7v3"};
        magazines[] = {"rhs_rpg7_PG7V_mag"};
    };
    class keko_W_Vorona: LauncherWeapon
    {
        cfgName = "launch_O_Vorona_green_F";
        magazines[] = {"Vorona_HEAT"};
    };
    class keko_W_Igla: LauncherWeapon
    {
        cfgName = "rhs_weap_igla";
        magazines[] = {"rhs_mag_9k38_rocket"};
    };
};
