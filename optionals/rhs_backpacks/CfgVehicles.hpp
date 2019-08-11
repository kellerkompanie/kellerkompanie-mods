class CfgVehicles {

    class B_AssaultPack_Base;

    class rhsusf_assault_eagleaiii_ucp: B_AssaultPack_Base {
        maximumLoad = 280;
    };

    class rhsusf_assault_eagleaiii_ocp: rhsusf_assault_eagleaiii_ucp {
        maximumLoad = 280;
    };

    class B_rhsusf_B_BACKPACK: rhsusf_assault_eagleaiii_ocp {
        maximumLoad = 280;
        mass = 100;
    };

    class rhsusf_assault_eagleaiii_coy: rhsusf_assault_eagleaiii_ucp {
        maximumLoad = 280;
    };

    class rhs_medic_bag: B_AssaultPack_Base {
        maximumLoad = 280;
    };
    class keko_rhs_bag: rhs_medic_bag {
        author = "Schwaggot";
        displayName = "Bag";
        maximumLoad = 280;
        picture = "\x\keko\addons\rhs_backpacks\data\inventory\gear_icon_medic_bag_ca.paa";
        hiddenSelectionsTextures[] = {"x\keko\addons\rhs_backpacks\data\gearpack3_ranets_co.paa"};
        hiddenSelectionsMaterials[] = {"x\keko\addons\rhs_backpacks\data\gearpack3_ranets.rvmat"};
    };

    class rhs_sidor: B_AssaultPack_Base {
        maximumLoad = 280;
    };

    class rhs_assault_umbts: B_AssaultPack_Base {
        maximumLoad = 280;
    };

    class rhs_assault_umbts_engineer: rhs_assault_umbts {
        maximumLoad = 280;
    };

    class rhs_assault_umbts_engineer_empty: rhs_assault_umbts_engineer {
        maximumLoad = 280;
    };

};
