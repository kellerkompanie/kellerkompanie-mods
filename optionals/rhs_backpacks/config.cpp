class CfgPatches
{
	class keko_rhs_backpacks
	{
		units[]= {};
		requiredVersion= 1.80;
		requiredAddons[]= {
            "rhs_main",
            "rhssaf_main",
            "rhssaf_backpacks",
            "rhsgref_main",
			"rhsusf_main",
            "A3_Weapons_F_Ammoboxes",
            "rhsusf_c_troops",
            "rhsusf_c_uav",
            "rhs_c_troops"
		};
		author = "Schwaggot";
		version = 1.0;
	};
};

class CfgVehicles {

    class B_AssaultPack_Base;

    class rhsusf_assault_eagleaiii_ucp: B_AssaultPack_Base {
        maximumLoad = 280;
    }

    class rhsusf_assault_eagleaiii_ocp: rhsusf_assault_eagleaiii_ucp {
        maximumLoad = 280;
    }

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