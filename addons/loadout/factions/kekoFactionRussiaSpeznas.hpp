class kekoFactionRussiaSpeznas : kekoFactionBase {

    name = "[Main] Russia - GRU Speznas";
    roles[] = {
        { "Führung",{
                    kekoCommand,
                    kekoLead,
                    kekoSergeant,
                    kekoSQL,
                    kekoFTL,
                    kekoDoctor,
                    kekoMedic } },
        { "Plebs",{
                    kekoRifleman,
                    kekoRiflemanAT,
                    kekoGrenadier} },
        { "Heavy Weapons",{
                    kekoATSpecialist,
                    kekoATSpecialistAsst,
                    kekoAASpecialist,
                    kekoAASpecialistAsst } },
        { "Support",{
                    kekoMarksman,
                    kekoSniper,
                    kekoSpotter,
                    kekoEOD,
                    kekoEngineer,
                    kekoHeliPilot,
                    kekoHeliCrew,
                    kekoJTAC} }
    };
    weaponCfg = kekoWeaponsRussiaSpeznas;

    // define all weapons and mags
#include "kekoWeaponsRussiaSpeznas.hpp"

#include "kekoSoldier.hpp"
#include "kekoCrate.hpp"

#define KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY {{10, "ACE_epinephrine"},{10, "ACE_morphine"},{1,"ACE_surgicalKit"},{10, "ACE_quikclot"},{8, PRIMARY_MAG_AS}}
#define KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY {{50, "ACE_elasticBandage"},{20, "ACE_fieldDressing"},{6, "ACE_salineIV_500"},{4, "ACE_salineIV"},{10, "ACE_tourniquet"},{20,"adv_aceSplint_splint"}}
#define KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY {{10, "ACE_epinephrine"},{10, "ACE_morphine"},{1,"ACE_surgicalKit"},{10, "ACE_quikclot"},{8, PRIMARY_MAG_AS}}
#define KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY {{50, "ACE_elasticBandage"},{20, "ACE_fieldDressing"},{6, "ACE_salineIV_500"},{4, "ACE_salineIV"},{10, "ACE_tourniquet"},{1,"adv_aceCPR_AED"},{20,"adv_aceSplint_splint"}}

    crates[] = KEKO_LOGISTICS_DEFAULT_CRATE_LIST;
//  class kekoSoldierRussiaSpeznas : kekoSoldier {

    class kekoSoldierRussiaSpeznas: kekoSoldier {
        uniform[] = {
            "rhs_uniform_gorka_r_g" };

        vest[] = {
            "VSM_OGA_OD_Vest_1",
            "VSM_OGA_OD_Vest_2",
            "VSM_OGA_OD_Vest_3"};

        helmet[] = {
            "rhs_6b27m_green_bala",
            "rhs_6b27m_green_ess_bala",
            "rhs_6b28_green_bala",
            "rhs_6b28_green_ess_bala",
            "rhs_6b7_1m_bala2",
            "rhs_6b7_1m_bala1",
            "rhs_6b7_1m_ess_bala",
            "rhs_6b7_1m_bala2_olive",
            "rhs_6b7_1m_bala1_olive",
            "rhs_altyn_bala"
            };

        uniformInventory[] = {
            { 8,"ACE_fieldDressing" },
            { 5,"ACE_quikclot" },
            { 1,"ACE_Flashlight_MX991" },
            { 1,"ACE_MapTools" },
            { 1,"ACE_IR_Strobe_Item" },
            { 1,"ACE_microDAGR" },
            { 2,"ACE_morphine" },
            { 1,"ACE_epinephrine" },
            { 2,"ACE_tourniquet" },
            { 1, "ACE_CableTie"},
            { 1,"rhs_mag_9x19_17"}};

        vestInventory[] = {
            { 4, PRIMARY_MAG },
            { 4, PRIMARY_MAG_TRACER },
            { 2, SMOKE_WHITE},
            { 2, GRENADE } };

        primary[] = {
            keko_W_AK74MR, keko_W_AK74M, keko_W_AK105 };

        secondary[] = {
            keko_W_Grach };
    };

    class kekoSoldierLight : kekoSoldierRussiaSpeznas {
		vestInventory[] = {
            { 8, PRIMARY_MAG_AS },
            { 2, SMOKE_WHITE},
            { 2, GRENADE } };
        primary[] = {
            keko_W_ASVAL };
    };

    class kekoLead : kekoSoldierRussiaSpeznas {
        name = "Lead";
        rank = "LIEUTENANT";
        helmet[] = { "rhs_beret_milp" };
        backpack[] = { "tfw_ilbe_gr" };
        optics[] = { "Rangefinder" };
    };

    class kekoCommand : kekoLead {
        name = "Command";
        rank = "COLONEL";
        medicClass = 2;
        engineerClass = 2;
        helmet[] = { "rhs_beret_milp" };
    };

    class kekoSQL : kekoSoldierRussiaSpeznas {
        name = "Squad Leader";
        rank = "SERGEANT";
        backpack[] = { "tfw_ilbe_gr" };
        optics[] = { "Rangefinder" };
    };

    class kekoSergeant : kekoSQL {
        name = "Sergeant";
    };

    class kekoFTL : kekoSoldierRussiaSpeznas {
        name = "Fire Team Leader";
        rank = "CORPORAL";
        optics[] = { "Binocular" };
    };

    class kekoDoctor : kekoSoldierLight {
        name = "Doctor";
        medicClass = 2;
        rank = "SERGEANT";
        vestInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_VEST_INVENTORY;

        backpack[] = { "rhssaf_kitbag_smb" };
        backpackInventory[] = KEKO_LOADOUT_DOCTOR_DEFAULT_BACKPACK_INVENTORY;
    };

    class kekoMedic : kekoSoldierLight {
        name = "Medic";
        medicClass = 1;
        rank = "CORPORAL";
        vestInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_VEST_INVENTORY;

        backpack[] = { "rhssaf_kitbag_smb" };
        backpackInventory[] = KEKO_LOADOUT_MEDIC_DEFAULT_BACKPACK_INVENTORY;
    };

    class kekoRifleman : kekoSoldierRussiaSpeznas {
        name = "Rifleman";
    };

    class kekoRiflemanAT : kekoSoldierRussiaSpeznas {
        name = "Rifleman Anti-Tank";
        launcher[] = { keko_W_MAAWS };
        backpack[] = { "rhs_assault_umbts" };
        backpackInventory[] = { { 2, RAT_MAG } };
    };

    class kekoGrenadier : kekoSoldierRussiaSpeznas {
        name = "Grenadier";
        vestInventory[] = {
            { 4, PRIMARY_MAG },
            { 4, PRIMARY_MAG_TRACER },
            { 9, UGL_MAG },
            { 2, GRENADE } };
        primary[] = {
            keko_W_AK74MR_GL };
    };

    class kekoATSpecialist : kekoSoldierRussiaSpeznas {
        name = "Anti-Tank Specialist";

        backpack[] = { "B_Kitbag_rgr" };
        backpackInventory[] = { { 2, AT_MAG } };
        launcher[] = { keko_W_Vorona };
    };

    class kekoATSpecialistAsst : kekoSoldierRussiaSpeznas {
        name = "Anti-Tank Specialist Assistant";

        backpack[] = { "B_Kitbag_rgr" };
        backpackInventory[] = { { 2, AT_MAG } };
        optics[] = { "Rangefinder" };
    };

    class kekoAASpecialist : kekoSoldierLight {
        name = "Anti-Air Specialist";
        backpack[] = { "B_Kitbag_rgr" };
        backpackInventory[] = { { 1, AA_MAG } };
        launcher[] = { keko_W_Igla };
    };

    class kekoAASpecialistAsst : kekoSoldierRussiaSpeznas {
        name = "Anti-Air Specialist Assistant";
        backpack[] = { "B_Kitbag_rgr" };
        backpackInventory[] = { { 2, AA_MAG } };
        optics[] = { "Rangefinder" };
    };

    class kekoMarksman : kekoSoldierRussiaSpeznas {
        name = "Marksman";
        vestInventory[] = {
            { 1, "ACE_RangeCard" },
            { 5, PRIMARY_MAG_MARKSMAN },
            { 1, SMOKE_WHITE },
            { 2, GRENADE },
            { 5, PRIMARY_MAG_MARKSMAN_TRACER } };
        primary[] = {
            keko_W_SVD };
    };

    class kekoSniper : kekoSoldierRussiaSpeznas {
        name = "Sniper";
        uniform[] = { "U_B_FullGhillie_sard" };
        uniformInventory[] = {
            { 1,"ACE_ATragMX" },
            { 1,"ACE_Kestrel4500" },
            { 1,"ACE_microDAGR" },
            { 1,"ACE_surgicalKit" },
            { 1,"ACE_RangeCard" },
        vest[] = { "VSM_OGA_OD_Vest_3" };
        vestInventory[] = {
            { 1,SMOKE_WHITE },
            { 1,SMOKE_GREEN },
            { 8,"rhs_5Rnd_338lapua_t5000"},
            { 2,SECONDARY_MAG } };
        helmet[] = { "VSM_Peltor_OD" };
        primary[] = {
            keko_W_T5000 };
        optics[] = { "Laserdesignator" };
    };

    class kekoSpotter : kekoSniper {
        name = "Spotter";
        vestInventory[] = {
            { 1,"SmokeShell" },
            { 1,"SmokeShellGreen" },
            { 10,PRIMARY_MAG },
            { 1,GRENADE } };
        primary[] = { keko_W_AK74MR };
    };

    class kekoEOD : kekoSoldierLight {
        name = "Explosive Specialist";
        backpack[] = { "B_Carryall_oli" };
        backpackInventory[] = KEKO_LOADOUT_EOD_DEFAULT_BACKPACK_INVENTORY;
        engineerClass = 2;
    };

    class kekoEngineer : kekoSoldierLight {
        name = "Engineer";
        backpack[] = { "B_Carryall_oli" };
        backpackInventory[] = KEKO_LOADOUT_ENGINEER_DEFAULT_BACKPACK_INVENTORY;
        engineerClass = 2;
    };

    class kekoHeliPilot : kekoSoldierLight {
        name = "Helicopter Pilot";
        uniform[] = { "rhs_uniform_df15" };
        vest[] = { "rhs_vest_pistol_holster" };
        vestInventory[] = {
            { 2, SECONDARY_MAG },
            { 2, PRIMARY_MAG },
            { 1, "ACE_microDAGR" },
            { 10, "ACE_quikclot" } };
        helmet[] = { "rhs_zsh7a_mike" };
        optics[] = { "Binocular" };
        primary[] = { keko_W_ASVAL };
    };

    class kekoHeliCrew : kekoHeliPilot {
        name = "Helicopter Crew";
        helmet[] = { "rhs_zsh7a_mike_alt" };
    };

    class kekoJTAC : kekoGrenadier {
        name = "JTAC";
        primary[] = {
            keko_W_AK74MR_GL };
        vestInventory[] = {
            { 2,PRIMARY_MAG },
            { 2,PRIMARY_MAG_TRACER },
            { 4,"UGL_FlareGreen_F" },
            { 4,"1Rnd_SmokeRed_Grenade_shell" },
            { 4,"1Rnd_SmokeBlue_Grenade_shell" },
            { 2,"SmokeShellBlue" },
            { 2,"SmokeShellGreen" },
            { 2,"SmokeShellOrange" },
            { 2,"SmokeShellPurple" },
            { 2,"SmokeShellYellow" }
        };
        backpack[] = { "FRXA_tf_rt1523g_big_Ranger_Green" };
        backpackInventory[] = { { 4,"Laserbatteries" } };
        optics[] = { "Laserdesignator" };
    };

};
