#include "script_macro.hpp"

#define SMOKE_WHITE "rhs_mag_rdg2_white"
#define SMOKE_GREEN "rhs_mag_nspn_green"
#define SMOKE_RED "rhs_mag_nspn_red"
#define GRENADE "rhs_mag_rgn"

#define PRIMARY_MAG "rhs_30Rnd_545x39_7N22_AK"
#define PRIMARY_MAG_TRACER "rhs_30Rnd_545x39_AK_plum_green"
#define PRIMARY_MAG_AS "rhs_20rnd_9x39mm_SP5"
#define PRIMARY_MAG_MARKSMAN "rhs_10Rnd_762x54mmR_7N1"
#define PRIMARY_MAG_MARKSMAN_TRACER "rhs_10Rnd_762x54mmR_7N1"
#define PRIMARY_MAG_LMG "rhs_75Rnd_762x39mm"
#define PRIMARY_MAG_LMG_TRACER "rhs_75Rnd_762x39mm_tracer"

#define RAT_LAUNCHER "launch_MRAWS_green_rail_F"
#define AT_LAUNCHER "launch_O_Vorona_green_F"
#define AA_LAUNCHER "rhs_weap_igla"

#define RAT_MAG "MRAWS_HEAT_F"
#define AT_MAG "Vorona_HEAT"
#define AA_MAG "rhs_mag_9k38_rocket"
#define UGL_MAG "rhs_VOG25"
#define HUNTIR_MAG "ACE_HuntIR_M203"

class kekoWeaponsRussiaSpeznas {
    // Primary
    class keko_W_AK74MR_GL: kekoPrimaryWeapon
    {
        cfgName = "rhs_weap_ak74mr_gp25";
        items[] = {"rhs_acc_rakurspm","rhs_acc_perst3","rhs_acc_dtk4short"};
        magazines[] = {PRIMARY_MAG, PRIMARY_MAG_TRACER};
    };
    class keko_W_AK74MR: kekoPrimaryWeapon
    {
        cfgName = "rhs_weap_ak74mr";
        items[] = {"rhs_acc_rakurspm","rhs_acc_perst3_2dp_h","rhs_acc_dtk4short","rhs_acc_grip_rk6"};
        magazines[] = {PRIMARY_MAG, PRIMARY_MAG_TRACER};
    };
    class keko_W_AK74M: kekoPrimaryWeapon
    {
        cfgName = "rhs_weap_ak74m_zenitco01_b33";
        items[] = {"rhs_acc_rakurspm","rhs_acc_perst3_2dp_h","rhs_acc_dtk4short","rhs_acc_grip_rk6"};
        magazines[] = {PRIMARY_MAG, PRIMARY_MAG_TRACER};
    };
    class keko_W_AK105: kekoPrimaryWeapon
    {
        cfgName = "rhs_weap_ak105_zenitco01_b33";
        items[] = {"rhs_acc_rakurspm","rhs_acc_perst3_2dp_h","rhs_acc_dtk4short","rhs_acc_grip_rk6"};
        magazines[] = {PRIMARY_MAG, PRIMARY_MAG_TRACER};
    };
    class keko_W_ASVAL: kekoPrimaryWeapon
    {
        cfgName = "rhs_weap_asval_grip_npz";
        items[] = {"rhsusf_acc_eotech_xps3","rhs_acc_2dpzenit_ris"};
        magazines[] = {PRIMARY_MAG_AS};
    };

    //LMG
    class keko_W_RPK: kekoPrimaryWeapon
    {
        cfgName = "rhs_weap_akm_zenitco01_b33";
        items[] = {"rhsusf_acc_grip1", "rhs_acc_1p87", "rhs_acc_dtkakm"};
        magazines[] = {PRIMARY_MAG_LMG, PRIMARY_MAG_LMG_TRACER};
    };


    // Marksman
    class keko_W_SVD: kekoPrimaryWeapon
    {
        cfgName = "rhs_weap_svdp";
        items[] = {"rhs_acc_pso1m21"};
        magazines[] = {PRIMARY_MAG_MARKSMAN};
    };


    // Sniper
    class keko_W_T5000: kekoPrimaryWeapon
    {
        cfgName = "rhs_weap_t5000";
        items[] = {"rhs_acc_dh520x56", "rhs_acc_harris_swivel"};
        magazines[] = {"rhs_5Rnd_338lapua_t5000"};
    };


    // Secondary
    class keko_W_Grach: kekoSecondaryWeapon
    {
        cfgName = "rhs_weap_pya";
        magazines[] = {"rhs_mag_9x19_17"};
    };


    // Launcher
    class keko_W_MAAWS: kekoLauncherWeapon
    {
        cfgName = RAT_LAUNCHER;
        magazines[] = {AT_MAG};
    };
    class keko_W_Vorona: kekoLauncherWeapon
    {
        cfgName = AT_LAUNCHER;
        magazines[] = {RAT_MAG};
    };
    class keko_W_Igla: kekoLauncherWeapon
    {
        cfgName = AA_LAUNCHER;
        magazines[] = {AA_MAG};
    };



    // Throwables
    class keko_W_GRENADE {
        cfgName = GRENADE;
    };
    class keko_W_SMOKE_WHITE {
        cfgName = SMOKE_WHITE;
    };
    class keko_W_SMOKE_GREEN {
        cfgName = SMOKE_GREEN;
    };
    class keko_W_SMOKE_RED {
        cfgName = SMOKE_RED;
    };
};
