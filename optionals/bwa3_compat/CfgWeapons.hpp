class asdg_MuzzleSlot;
class rhs_western_46mmsmg_muzzle_slot: asdg_MuzzleSlot {
    class compatibleItems {
        bwa3_muzzle_snds_rotex_ii = 1;
    };
};

class Mode_FullAuto;
class CfgWeapons {
    
    class Pistol;
    class Pistol_Base_F: Pistol {
        class WeaponSlotsInfo;
    };
    class Rifle_Long_Base_F;
    class Rifle_Base_F;

    class BWA3_MP7: Pistol_Base_F {
        magazineWell[] = {"CBA_46x30_MP7"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: rhs_western_46mmsmg_muzzle_slot{};
        };
    };
    class BWA3_G28: Rifle_Long_Base_F {
        magazineWell[] = {"CBA_762x51_HK417"};
    };
    class BWA3_G38: Rifle_Base_F {
        magazineWell[] = {"STANAG_556x45","CBA_556x45_STANAG_2D_XL"};
    };
    class BWA3_G36A1: Rifle_Base_F {
        magazineWell[] = {"CBA_556x45_G36"};
    };
    class BWA3_G82: Rifle_Long_Base_F {
        magazineWell[] = {"CBA_50BMG_M107"};
    };
    class BWA3_MG4: Rifle_Long_Base_F {
        magazineWell[] = {"CBA_556x45_MINIMI"};
    };
    class BWA3_MG3: Rifle_Long_Base_F {
        magazineWell[] = {"CBA_762x51_LINKS","CBA_762x51_MG3"};
    };
    class BWA3_MG5: Rifle_Long_Base_F {
        magazineWell[] = {"CBA_762x51_LINKS"};
    };
};
