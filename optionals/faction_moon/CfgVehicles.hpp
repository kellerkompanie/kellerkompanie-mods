class CfgVehicles {

    class SoldierEB;
    class O_Soldier_base_F : SoldierEB {
        class EventHandlers;
        modelsides[] = {3,2,1,0};
    };

    class GVAR(opfor_soldier_base) : O_Soldier_base_F {
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

        class EventHandlers: EventHandlers {
             init = "if (local (_this select 0)) then { _unit = (_this select 0); _unit setFace 'WhiteHead_04';};";
        };
    };

    class GVAR(opfor_soldier1) : GVAR(opfor_soldier_base) {
        scope = 2;
        curatorScope = 2;
        displayName = "Garrison Soldier (StG44)";
        uniform = "GTIS_KER_Uniform";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"LIB_MP44","Throw","Put"};
        magazines[] = {"LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_Shg24","LIB_Shg24"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR","DPC_KER_Helmet","WAINO_BLC_BK","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
    };

    class GVAR(opfor_soldier2) : GVAR(opfor_soldier_base) {
        scope = 2;
        curatorScope = 2;
        displayName = "Garrison Sniper";
        uniform = "GTIS_KER_Uniform";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"LIB_K98ZF39","LIB_M1908","LIB_Binocular_GER","Throw","Put"};
        magazines[] = {"lib_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57","LIB_8Rnd_9x19_P08","LIB_8Rnd_9x19_P08","LIB_8Rnd_9x19_P08","LIB_Shg24","LIB_Shg24","LIB_Shg24"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR","DPC_KER_Helmet","WAINO_BLC_BK","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
    };

    class GVAR(opfor_soldier3) : GVAR(opfor_soldier_base) {
        scope = 2;
        curatorScope = 2;
        displayName = "Garrison Soldier (MP40)";
        uniform = "GTIS_KER_Uniform";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"LIB_MP40","Throw","Put"};
        magazines[] = {"lib_32Rnd_9x19","lib_32Rnd_9x19","lib_32Rnd_9x19","lib_32Rnd_9x19","LIB_Shg24","LIB_Shg24","LIB_Shg24"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR","DPC_KER_Helmet","WAINO_BLC_BK","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
    };

    class GVAR(opfor_soldier4) : GVAR(opfor_soldier_base) {
        scope = 2;
        curatorScope = 2;
        displayName = "Garrison Soldier (MG42)";
        uniform = "GTIS_KER_Uniform";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"LIB_MG42","Throw","Put"};
        magazines[] = {"LIB_50Rnd_792x57","LIB_50Rnd_792x57","LIB_50Rnd_792x57","LIB_Shg24","LIB_Shg24","LIB_Shg24"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR","DPC_KER_Helmet","WAINO_BLC_BK","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
        icon = "iconManMG";
    };

    class GVAR(opfor_soldier5) : GVAR(opfor_soldier_base) {
        scope = 2;
        curatorScope = 2;
        displayName = "Garrison Soldier (Panzerschreck)";
        uniform = "GTIS_KER_Uniform";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"LIB_MP40","LIB_RPzB_w","Throw","Put"};
        magazines[] = {"lib_32Rnd_9x19","lib_32Rnd_9x19","lib_32Rnd_9x19","lib_32Rnd_9x19","LIB_1Rnd_RPzB","LIB_1Rnd_RPzB","LIB_1Rnd_RPzB","LIB_Shg24","LIB_Shg24","LIB_Shg24"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR","DPC_KER_Helmet","WAINO_BLC_BK","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
        icon = "iconManAT";
    };

    class GVAR(opfor_soldier6) : GVAR(opfor_soldier_base) {
        scope = 2;
        curatorScope = 2;
        displayName = "Garrison Soldier (FG42)";
        uniform = "GTIS_KER_Uniform";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"fow_w_fg42","Throw","Put"};
        magazines[] = {"fow_20Rnd_792x57","fow_20Rnd_792x57","fow_20Rnd_792x57","fow_20Rnd_792x57","fow_20Rnd_792x57","fow_20Rnd_792x57","fow_20Rnd_792x57","fow_20Rnd_792x57","fow_20Rnd_792x57","fow_20Rnd_792x57","fow_20Rnd_792x57","LIB_Shg24","LIB_Shg24","LIB_Shg24"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR","DPC_KER_Helmet","WAINO_BLC_BK","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
    };

    class GVAR(opfor_soldier7) : GVAR(opfor_soldier_base) {
        scope = 2;
        curatorScope = 2;
        displayName = "Garrison Soldier (Flamethrower)";
        uniform = "GTIS_KER_Uniform";
        backpack = "B_LIB_US_M2Flamethrower";
        weapons[] = {"LIB_M2_Flamethrower","Throw","Put"};
        magazines[] = {"LIB_Shg24","LIB_Shg24","LIB_Shg24","LIB_Shg24"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR","DPC_KER_Helmet","WAINO_BLC_BK","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
    };

    class GVAR(opfor_soldier8) : GVAR(opfor_soldier_base) {
        scope = 2;
        curatorScope = 2;
        displayName = "Garrison Soldier (Panzerfaust)";
        uniform = "GTIS_KER_Uniform";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"LIB_MP40","fow_w_pzfaust_100","Throw","Put"};
        magazines[] = {"lib_32Rnd_9x19","lib_32Rnd_9x19","lib_32Rnd_9x19","lib_32Rnd_9x19","fow_1Rnd_pzfaust_100","fow_1Rnd_pzfaust_100","LIB_Shg24","LIB_Shg24","LIB_Shg24"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR","DPC_KER_Helmet","WAINO_BLC_BK","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
        icon = "iconManAT";
    };

    class GVAR(opfor_medic) : GVAR(opfor_soldier_base) {
        scope = 2;
        curatorScope = 2;
        displayName = "Garrison Medic";
        uniform = "GTIS_KER_Uniform";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"LIB_MP40","Throw","Put"};
        magazines[] = {"lib_32Rnd_9x19","lib_32Rnd_9x19","lib_32Rnd_9x19","lib_32Rnd_9x19"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR","H_LIB_GER_Helmet_Medic","WAINO_BLC_BK","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
        icon = "iconManMedic";
    };

    class GVAR(opfor_ftl) : GVAR(opfor_soldier_base) {
        scope = 2;
        curatorScope = 2;
        displayName = "Garrison Feldwebel";
        uniform = "GTIS_KER_Uniform";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"LIB_MP44","Throw","Put"};
        magazines[] = {"LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_Shg24","LIB_Shg24","LIB_Shg24"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR","H_LIB_GER_Cap_PZWF002","WAINO_BLC_BK","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
        icon = "iconManLeader";
    };

    class GVAR(opfor_officer) : GVAR(opfor_soldier_base) {
        scope = 2;
        curatorScope = 2;
        displayName = "Garrison Officer";
        uniform = "GTIS_KER_Uniform";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"LIB_MP44","LIB_P08","Throw","Put"};
        magazines[] = {"LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_8Rnd_9x19_P08","LIB_8Rnd_9x19_P08","LIB_Shg24","LIB_Shg24","LIB_Shg24"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR","H_LIB_GER_OfficerCap_PZWF","WAINO_BLC_BK","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
        icon = "iconManOfficer";
    };














    class GVAR(opfor_soldier_base_rs) : O_Soldier_base_F {
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
        identityTypes[] = {"Language_LIB_GER","Head_EURO"};
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
        uniformClass = "GTIS_KER_Uniform2";

        class EventHandlers: EventHandlers {
             init = "if (local (_this select 0)) then { _unit = (_this select 0); _unit setFace 'WhiteHead_04';};";
        };
    };


    class GVAR(opfor_soldier1_rs) : GVAR(opfor_soldier_base_rs) {
        scope = 2;
        curatorScope = 2;
        displayName = "Reichswehr Soldier (StG44)";
        uniform = "GTIS_KER_Uniform2";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"LIB_MP44","Throw","Put"};
        magazines[] = {"LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_Shg24","LIB_Shg24","LIB_NB39"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR_RS","DPC_KER_RS_Helmet","WAINO_BLC_RG","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
    };

    class GVAR(opfor_soldier2_rs) : GVAR(opfor_soldier_base_rs) {
        scope = 2;
        curatorScope = 2;
        displayName = "Reichswehr Sniper";
        uniform = "GTIS_KER_Uniform2";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"LIB_K98ZF39","LIB_M1908","LIB_Binocular_GER","Throw","Put"};
        magazines[] = {"lib_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57","lib_5Rnd_792x57","LIB_8Rnd_9x19_P08","LIB_8Rnd_9x19_P08","LIB_8Rnd_9x19_P08","LIB_8Rnd_9x19_P08"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR_RS","DPC_KER_RS_Helmet2","WAINO_BLC_RG","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
    };

    class GVAR(opfor_soldier3_rs) : GVAR(opfor_soldier_base_rs) {
        scope = 2;
        curatorScope = 2;
        displayName = "Reichswehr Soldier (MP40)";
        uniform = "GTIS_KER_Uniform2";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"LIB_MP40","Throw","Put"};
        magazines[] = {"lib_32Rnd_9x19","lib_32Rnd_9x19","lib_32Rnd_9x19","lib_32Rnd_9x19","LIB_Shg24","LIB_Shg24","LIB_Shg24"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR_RS","DPC_KER_RS_Helmet","WAINO_BLC_RG","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
    };

    class GVAR(opfor_soldier4_rs) : GVAR(opfor_soldier_base_rs) {
        scope = 2;
        curatorScope = 2;
        displayName = "Reichswehr Soldier (MG42)";
        uniform = "GTIS_KER_Uniform2";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"LIB_MG42","Throw","Put"};
        magazines[] = {"LIB_50Rnd_792x57","LIB_50Rnd_792x57","LIB_50Rnd_792x57","LIB_Shg24","LIB_Shg24","LIB_Shg24"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR_RS","DPC_KER_RS_Helmet2","WAINO_BLC_RG","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
        icon = "iconManMG";
    };

    class GVAR(opfor_soldier5_rs) : GVAR(opfor_soldier_base_rs) {
        scope = 2;
        curatorScope = 2;
        displayName = "Reichswehr Soldier (Panzerschreck)";
        uniform = "GTIS_KER_Uniform2";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"LIB_MP40","LIB_RPzB_w","Throw","Put"};
        magazines[] = {"lib_32Rnd_9x19","lib_32Rnd_9x19","lib_32Rnd_9x19","lib_32Rnd_9x19","LIB_1Rnd_RPzB","LIB_1Rnd_RPzB","LIB_1Rnd_RPzB","LIB_Shg24","LIB_Shg24","LIB_Shg24"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR_RS","DPC_KER_RS_Helmet","WAINO_BLC_RG","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
        icon = "iconManAT";
    };

    class GVAR(opfor_soldier6_rs) : GVAR(opfor_soldier_base_rs) {
        scope = 2;
        curatorScope = 2;
        displayName = "Reichswehr Soldier (FG42)";
        uniform = "GTIS_KER_Uniform2";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"fow_w_fg42","Throw","Put"};
        magazines[] = {"fow_20Rnd_792x57","fow_20Rnd_792x57","fow_20Rnd_792x57","fow_20Rnd_792x57","fow_20Rnd_792x57","fow_20Rnd_792x57","fow_20Rnd_792x57","fow_20Rnd_792x57","fow_20Rnd_792x57","fow_20Rnd_792x57","fow_20Rnd_792x57","LIB_Shg24","LIB_Shg24","LIB_Shg24"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR_RS","DPC_KER_RS_Helmet2","WAINO_BLC_RG","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
    };

    class GVAR(opfor_soldier7_rs) : GVAR(opfor_soldier_base_rs) {
        scope = 2;
        curatorScope = 2;
        displayName = "Reichswehr Soldier (Flamethrower)";
        uniform = "GTIS_KER_Uniform2";
        backpack = "B_LIB_US_M2Flamethrower";
        weapons[] = {"LIB_M2_Flamethrower","Throw","Put"};
        magazines[] = {"LIB_Shg24","LIB_Shg24","LIB_Shg24"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR_RS","DPC_KER_RS_Helmet","WAINO_BLC_RG","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
    };

    class GVAR(opfor_soldier8_rs) : GVAR(opfor_soldier_base_rs) {
        scope = 2;
        curatorScope = 2;
        displayName = "Reichswehr Soldier (Panzerfaust)";
        uniform = "GTIS_KER_Uniform2";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"LIB_MP40","fow_w_pzfaust_100","Throw","Put"};
        magazines[] = {"lib_32Rnd_9x19","lib_32Rnd_9x19","lib_32Rnd_9x19","lib_32Rnd_9x19","fow_1Rnd_pzfaust_100","fow_1Rnd_pzfaust_100","LIB_Shg24","LIB_Shg24","LIB_Shg24"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR_RS","DPC_KER_RS_Helmet2","WAINO_BLC_RG","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
        icon = "iconManAT";
    };

    class GVAR(opfor_medic_rs) : GVAR(opfor_soldier_base_rs) {
        scope = 2;
        curatorScope = 2;
        displayName = "Reichswehr Medic";
        uniform = "GTIS_KER_Uniform2";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"LIB_MP40","Throw","Put"};
        magazines[] = {"lib_32Rnd_9x19","lib_32Rnd_9x19","lib_32Rnd_9x19","lib_32Rnd_9x19","LIB_Shg24","LIB_Shg24","LIB_Shg24"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR_RS","H_LIB_GER_Helmet_Medic","WAINO_BLC_RG","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
        icon = "iconManMedic";
    };

    class GVAR(opfor_ftl_rs) : GVAR(opfor_soldier_base_rs) {
        scope = 2;
        curatorScope = 2;
        displayName = "Reichswehr Feldwebel";
        uniform = "GTIS_KER_Uniform2";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"LIB_MP44","Throw","Put"};
        magazines[] = {"LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_Shg24","LIB_Shg24"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR_RS","H_LIB_GER_Cap","WAINO_BLC_RG","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
        icon = "iconManLeader";
    };

    class GVAR(opfor_officer_rs) : GVAR(opfor_soldier_base_rs) {
        scope = 2;
        curatorScope = 2;
        displayName = "Reichswehr Officer";
        uniform = "GTIS_KER_Uniform2";
        backpack = "DPC_KER_BACKPACK";
        weapons[] = {"LIB_MP44","LIB_P08","Throw","Put"};
        magazines[] = {"LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_30Rnd_792x33","LIB_8Rnd_9x19_P08","LIB_8Rnd_9x19_P08","LIB_Shg24","LIB_Shg24","LIB_NB39"};
        items[] = {};
        linkedItems[] = {"DPC_KER_ARMOR_RS","H_LIB_GER_OfficerCap","WAINO_BLC_RG","ItemMap","ItemCompass","ItemWatch","DPC_KER_GASMASK_NV"};
        icon = "iconManOfficer";
    };





};
