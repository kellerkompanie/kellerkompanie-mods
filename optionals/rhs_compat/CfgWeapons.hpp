class asdg_MuzzleSlot;
class rhs_western_46mmsmg_muzzle_slot: asdg_MuzzleSlot {
    class compatibleItems {
        rhsusf_acc_rotex_mp7 = 1;
        rhsusf_acc_rotex_mp7_aor1 = 1;
        rhsusf_acc_rotex_mp7_desert = 1;
        rhsusf_acc_rotex_mp7_winter = 1;
    };
};

class Mode_FullAuto;
class CfgWeapons {
    class Rifle_Base_F;
    class Rifle_Short_Base_F;
    class arifle_MX_Base_F;
    class DMR_03_base_F;
    class GM6_base_F;
    class SMG_02_base_F;
    class Pistol;
    class Pistol_Base_F: Pistol {
        class WeaponSlotsInfo;
    };
    class hgun_P07_F;
    class UGL_F;
    class SMG_05_base_F: Rifle_Short_Base_F {
        magazineWell[] = {"CBA_9x19_MP5"};
    };
    class srifle_DMR_03_F: DMR_03_base_F {
        magazineWell[] = {"CBA_762x51_AR10","CBA_762x51_AR10_L","CBA_762x51_AR10_XL"};
    };
    class rhs_weap_m4_Base: arifle_MX_Base_F {
        magazineWell[] = {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
        class M203_GL: UGL_F {
            magazineWell[] = {"CBA_40mm_M203"};
        };
        class M320_GL: M203_GL {
            magazineWell[] = {"CBA_40mm_M203","CBA_40mm_EGLM"};
        };
    };
    class rhs_weap_saw_base;
    class rhs_weap_lmg_minimipara: rhs_weap_saw_base {
        magazineWell[] = {"CBA_556x45_MINIMI","STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
    };
    class rhsusf_weap_glock17g4: hgun_P07_F {
        magazines[] += {"UK3CB_BAF_9_17Rnd"};
    };
    class rhs_weap_M107_Base_F: GM6_base_F {
        magazineWell[] = {"CBA_50BMG_M107"};
    };
    class rhs_weap_M590_5RD;
    class rhs_weap_M590_8RD: rhs_weap_M590_5RD {
        magazines[] += {"UK3CB_BAF_12G_Slugs","UK3CB_BAF_12G_Pellets"};
    };
    class rhs_weap_M249_base;
    class rhs_weap_m240_base: rhs_weap_M249_base {
        magazineWell[] = {"CBA_762x51_LINKS"};
        UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
    };
    class rhs_weap_M320_Base_F: Pistol_Base_F {
        magazineWell[] = {"CBA_40mm_M203","CBA_40mm_EGLM"};
    };
    class rhs_weap_m79: Rifle_Base_F {
        magazineWell[] = {"CBA_40mm_M203","CBA_40mm_EGLM"};
    };
    class rhs_weap_mg42_base: Rifle_Base_F {
        magazineWell[] = {"CBA_792x57_LINKS"};
        UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
    };
    class rhs_weap_m14ebrri;
    class rhs_weap_sr25: rhs_weap_m14ebrri {
        magazineWell[] = {"CBA_762x51_AR10","CBA_762x51_AR10_L","CBA_762x51_AR10_XL"};
    };
    class rhs_weap_XM2010_Base_F: Rifle_Base_F {
        magazineWell[] = {"CBA_300WM_AI"};
    };
    class rhs_weap_m24sws: rhs_weap_XM2010_Base_F {
        magazineWell[] = {};
    };
    class rhs_weap_m40a5: rhs_weap_XM2010_Base_F {
        magazineWell[] = {};
    };
    class rhsusf_weap_MP7A1_base_f: SMG_02_base_F {
        inertia = 0.3;
        magazineWell[] = {"CBA_46x30_MP7"};
    };
    class rhs_weap_g36_base: Rifle_Base_F {
        magazineWell[] = {"CBA_556x45_G36"};
    };
    class rhs_weap_vhs2_base: Rifle_Base_F {
        magazineWell[] = {"CBA_556x45_G36"};
        class VHS_BG: UGL_F {
            magazineWell[] = {"CBA_40mm_M203","CBA_40mm_EGLM"};
        };
    };
};
