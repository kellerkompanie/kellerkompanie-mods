class CfgVehicles {

    class SoldierEB;
    class O_Soldier_base_F : SoldierEB {
        class EventHandlers;
        modelsides[] = {3,2,1,0};
    };

    class GVAR(opfor_bandit_base) : O_Soldier_base_F {
        author = "Schwaggot";
        scope = 1;
        curatorScope = 1;
        side = 0;
        faction = QGVAR(opfor);
        vehicleClass = "Men";
        model = "\a3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
        modelSides[]={3,2,1,0};
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"};
        identityTypes[] = {"Language_LIB_GER","Head_Euro"};
        faceType = "Man_A3";
        genericNames = "LIB_GermanMen";
        nakedUniform = "U_BasicBody";
        displayName = "Soldier";
        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        Items[] = {};
        RespawnItems[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        uniformClass = "GTIS_KER_Uniform";
    };

    class GVAR(opfor_bandit1) : GVAR(opfor_bandit_base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "Bandit 1";
        uniformClass = "U_FRITH_RUIN_coffgrn";
        backpack = "";
        weapons[] = {"rhs_weap_m3a1","Throw","Put"};
        magazines[] = {"rhs_mag_nspn_red","rhsgref_30rnd_1143x23_M1T_SMG","rhsgref_30rnd_1143x23_M1T_SMG","rhsgref_30rnd_1143x23_M1T_SMG","rhsgref_30rnd_1143x23_M1T_SMG","rhsgref_30rnd_1143x23_M1T_SMG"};
        items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","KEKO_painkiller","KEKO_painkiller","KEKO_painkiller","KEKO_painkiller","KEKO_painkiller","KEKO_painkiller"};
        linkedItems[] = {"V_TacVest_camo","H_Shemag_olive","","ItemMap","ItemCompass","ItemWatch","ItemRadio","","","","","","","",""};
    };

    class GVAR(opfor_bandit2) : GVAR(opfor_bandit1) {
        displayName = "Bandit 2";
        uniformClass = "U_FRITH_RUIN_sdr_faboli_rs";
        backpack = "";
        weapons[] = {"rhs_weap_type94_new","Throw","Put"};
        magazines[] = {"rhs_mag_nspn_red","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_9x19_17"};
        items[] = {"ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","KEKO_painkiller","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine"};
        linkedItems[] = {"V_BandollierB_cbr","","G_Bandanna_aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","","","","","","","",""};
    };

    class GVAR(opfor_bandit3) : GVAR(opfor_bandit1) {
        displayName = "Bandit 3";
        uniformClass = "U_FRITH_RUIN_TSH_oli";
        backpack = "";
        weapons[] = {"rhs_weap_M590_8RD","Throw","Put"};
        magazines[] = {"rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck"};
        items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","KEKO_painkiller","KEKO_painkiller","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
        linkedItems[] = {"V_TacVest_blk","H_Cap_blk","VSM_FaceMask_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","","","","","","","",""};
    };

    class GVAR(opfor_bandit4) : GVAR(opfor_bandit1) {
        displayName = "Bandit 4";
        uniformClass = "U_FRITH_RUIN_TSH_blk_drj";
        backpack = "";
        weapons[] = {"rhs_weap_kar98k","rhs_weap_type94_new","Throw","Put"};
        magazines[] = {"rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k"};
        items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","KEKO_painkiller","KEKO_painkiller","ACE_tourniquet","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine"};
        linkedItems[] = {"V_Chestrig_blk","H_Shemag_olive","","ItemMap","ItemCompass","ItemWatch","ItemRadio","","","","","","","",""};
    };

    class GVAR(opfor_bandit5) : GVAR(opfor_bandit1) {
        displayName = "Bandit 5";
        uniformClass = "U_FRITH_RUIN_WKR_lite";
        backpack = "";
        weapons[] = {"rhs_weap_m3a1","Throw","Put"};
        magazines[] = {"rhsgref_30rnd_1143x23_M1T_SMG","rhsgref_30rnd_1143x23_M1T_SMG","rhsgref_30rnd_1143x23_M1T_SMG","rhsgref_30rnd_1143x23_M1T_SMG","rhsgref_30rnd_1143x23_M1T_SMG","rhsgref_30rnd_1143x23_M1T_SMG","SmokeShell","SmokeShell","SmokeShell"};
        items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_quikclot","ACE_quikclot","ACE_epinephrine","ACE_epinephrine"};
        linkedItems[] = {"V_HarnessO_gry","","G_AirPurifyingRespirator_02_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","","","","","","","",""};
    };

    class GVAR(opfor_bandit6) : GVAR(opfor_bandit1) {
        displayName = "Bandit 6";
        uniformClass = "U_FRITH_RUIN_sdr_ltrred_rs";
        backpack = "";
        weapons[] = {"sgun_HunterShotgun_01_F","Throw","Put"};
        magazines[] = {"2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","ACE_2Rnd_12Gauge_Pellets_No0_Buck","ACE_2Rnd_12Gauge_Pellets_No0_Buck","ACE_2Rnd_12Gauge_Pellets_No0_Buck","ACE_2Rnd_12Gauge_Pellets_No0_Buck","ACE_2Rnd_12Gauge_Pellets_No0_Buck","ACE_2Rnd_12Gauge_Pellets_No0_Buck"};
        items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","KEKO_painkiller","ACE_tourniquet","ACE_tourniquet"};
        linkedItems[] = {"V_BandollierB_rgr","H_Bandanna_khk","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","","","","","","","",""};
    };

    class GVAR(opfor_bandit7) : GVAR(opfor_bandit1) {
        displayName = "Bandit 7";
        uniformClass = "U_FRITH_RUIN_sdr_ltr";
        backpack = "";
        weapons[] = {"rhs_weap_m38","Throw","Put"};
        magazines[] = {"rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38"};
        items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_morphine"};
        linkedItems[] = {"V_BandollierB_rgr","H_MilCap_gry","G_Respirator_white_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","","","","","","","",""};
    };

    class GVAR(opfor_bandit8) : GVAR(opfor_bandit1) {
        displayName = "Bandit 8";
        uniformClass = "U_FRITH_RUIN_sdr_ltr";
        backpack = "";
        weapons[] = {"rhs_weap_m38","Throw","Put"};
        magazines[] = {"rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38"};
        items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_morphine","ACE_salineIV_500"};
        linkedItems[] = {"V_I_G_resistanceLeader_F","H_Booniehat_oli","G_AirPurifyingRespirator_02_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","","","","","","","",""};
    };

    class GVAR(opfor_bandit9) : GVAR(opfor_bandit1) {
        displayName = "Bandit 9";
        uniformClass = "U_FRITH_RUIN_TSH_oli";
        backpack = "";
        weapons[] = {"rhs_weap_savz61","Throw","Put"};
        magazines[] = {"rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61"};
        items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","KEKO_painkiller","KEKO_painkiller","KEKO_painkiller","KEKO_painkiller","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
        linkedItems[] = {"V_Chestrig_rgr","","VSM_balaclava_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio","","","","","","","",""};
    };

    class GVAR(opfor_bandit10) : GVAR(opfor_bandit1) {
        displayName = "Bandit 10";
        uniformClass = "U_FRITH_RUIN_sdr_ltr";
        backpack = "";
        weapons[] = {"rhs_weap_pya","Throw","Put"};
        magazines[] = {"rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_9x19_17"};
        items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_morphine"};
        linkedItems[] = {"V_BandollierB_rgr","FRITH_ruin_modhat_mettan","avon_fm12","ItemMap","ItemCompass","ItemWatch","ItemRadio","","","","","","","",""};
    };

    class GVAR(opfor_bandit11) : GVAR(opfor_bandit1) {
        displayName = "Bandit 11";
        uniformClass = "U_FRITH_RUIN_sdr_fabtan";
        backpack = "";
        weapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
        magazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"};
        items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","KEKO_painkiller","KEKO_painkiller","KEKO_painkiller","KEKO_painkiller","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_salineIV","ACE_salineIV","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_surgicalKit","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_epinephrine","KEKO_painkiller","KEKO_painkiller","KEKO_painkiller","keko_common_cigpack_generic","keko_common_matches_generic"};
        linkedItems[] = {"V_TacVestIR_blk","H_ShemagOpen_tan","PBW_shemagh_gruen","ItemMap","ItemCompass","ItemWatch","ItemRadio","","","","","","","",""};
    };

    class GVAR(opfor_bandit12) : GVAR(opfor_bandit1) {
        displayName = "Bandit 12";
        uniformClass = "U_FRITH_RUIN_sdr_fab_rs";
        backpack = "";
        weapons[] = {"rhs_weap_Izh18","Throw","Put"};
        magazines[] = {"rhsgref_1Rnd_Slug","rhsgref_1Rnd_Slug","rhsgref_1Rnd_Slug","rhsgref_1Rnd_Slug","rhsgref_1Rnd_Slug","rhsgref_1Rnd_Slug","rhsgref_1Rnd_Slug","rhsgref_1Rnd_Slug","rhsgref_1Rnd_Slug","rhsgref_1Rnd_Slug","rhsgref_1Rnd_Slug","rhsgref_1Rnd_Slug","rhsgref_1Rnd_Slug","rhsgref_1Rnd_Slug","rhsgref_1Rnd_Slug","rhsgref_1Rnd_Slug","rhsgref_1Rnd_Slug","rhsgref_1Rnd_Slug","rhsgref_1Rnd_Slug","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhssaf_mag_br_m75","rhssaf_mag_br_m75","rhssaf_mag_brd_m83_white","rhssaf_mag_brd_m83_white"};
        items[] = {"ACE_elasticBandage","KEKO_painkiller","KEKO_painkiller","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_salineIV_250","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot"};
        linkedItems[] = {"rhsgref_alice_webbing","H_Cap_oli","VSM_Facemask_black_Goggles","ItemMap","ItemCompass","ItemWatch","ItemRadio","","","","","","","",""};
    };




    class GVAR(opfor_stalker1)  : GVAR(opfor_bandit_base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "Stalker 1";
        uniformClass = "U_FRITH_RUIN_SDR_snip_hawk";
        backpack = "";
        weapons[] = {"rhs_weap_m1garand_sa43","Throw","Put"};
        magazines[] = {"rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhssaf_mag_brd_m83_white","rhssaf_mag_brd_m83_white","rhssaf_mag_brd_m83_white","rhssaf_mag_br_m75"};
        items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_quikclot","ACE_quikclot","ACE_epinephrine","ACE_epinephrine"};
        linkedItems[] = {"V_HarnessO_gry","","G_AirPurifyingRespirator_02_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","","","","","","","",""};
    };

    class GVAR(opfor_stalker2)  : GVAR(opfor_stalker1) {
        displayName = "Stalker 2";
        uniformClass = "U_FRITH_RUIN_SDR_snip_crow";
        backpack = "";
        weapons[] = {"rhs_weap_m38","rhs_weap_type94_new","Throw","Put"};
        magazines[] = {"rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38"};
        items[] = {"KEKO_painkiller","KEKO_painkiller","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_salineIV_500"};
        linkedItems[] = {"V_TacVest_blk","H_Hat_brown","G_Balaclava_TI_tna_F","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","","","","","","","",""};
    };

    class GVAR(opfor_stalker3)  : GVAR(opfor_stalker1) {
        displayName = "Stalker 3";
        uniformClass = "U_FRITH_RUIN_SDR_snip_hawk";
        backpack = "";
        weapons[] = {"rhs_weap_aks74u","Throw","Put"};
        magazines[] = {"rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_AK_plum_green"};
        items[] = {"ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","KEKO_painkiller","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine"};
        linkedItems[] = {"V_EOD_olive_F","H_Bandanna_gry","","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_acc_dtk","","","","","","",""};
    };

    class GVAR(opfor_stalker4)  : GVAR(opfor_stalker1) {
        displayName = "Stalker 4";
        uniformClass = "U_FRITH_RUIN_SDR_snip_hawk";
        backpack = "";
        weapons[] = {"rhs_weap_m1garand_sa43","Throw","Put"};
        magazines[] = {"rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle","rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle"};
        items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","KEKO_painkiller","KEKO_painkiller","KEKO_painkiller","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","keko_common_matches_generic","keko_common_cigpack_generic"};
        linkedItems[] = {"V_TacVest_camo","FRITH_ruin_modhat_ltrpntred","rhssaf_veil_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio","","","","","","","",""};
    };

    class GVAR(opfor_stalker5)  : GVAR(opfor_stalker1) {
        displayName = "Stalker 5";
        uniformClass = "U_FRITH_RUIN_SDR_snip_hawk";
        backpack = "";
        weapons[] = {"rhs_weap_kar98k","rhs_weap_type94_new","Throw","Put"};
        magazines[] = {"rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k"};
        items[] = {"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","KEKO_painkiller","KEKO_painkiller","ACE_tourniquet","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine"};
        linkedItems[] = {"V_Chestrig_blk","H_Shemag_olive","","ItemMap","ItemCompass","ItemWatch","ItemRadio","","","","","","","",""};
    };
};
