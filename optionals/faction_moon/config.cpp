class CfgPatches
{
    class keko_faction_moon
    {
        units[] = {
          /* OPFOR units */
			"keko_moon_opfor_soldier1",
			"keko_moon_opfor_soldier2",
			"keko_moon_opfor_soldier3",
			"keko_moon_opfor_soldier4",
			"keko_moon_opfor_soldier5",
			"keko_moon_opfor_soldier6",
			"keko_moon_opfor_soldier7",
			"keko_moon_opfor_soldier8",
			"keko_moon_opfor_medic",
			"keko_moon_opfor_ftl",
			"keko_moon_opfor_officer",

			"keko_moon_opfor_soldier1_rs",
			"keko_moon_opfor_soldier2_rs",
			"keko_moon_opfor_soldier3_rs",
			"keko_moon_opfor_soldier4_rs",
			"keko_moon_opfor_soldier5_rs",
			"keko_moon_opfor_soldier6_rs",
			"keko_moon_opfor_soldier7_rs",
			"keko_moon_opfor_soldier8_rs",
			"keko_moon_opfor_medic_rs",
			"keko_moon_opfor_ftl_rs",
			"keko_moon_opfor_officer_rs"


		    };
        weapons[] = {};
        requiredVersion = 1.80;
        requiredAddons[] = {
        	"A3_Characters_F_BLUFOR",
        	"A3_Characters_F_INDEP",
    			"A3_Characters_F_OPFOR",
    			"A3_Characters_F",
          "MU_core",
          "A3_Weapons_F",
          "A3_Air_F",
          "A3_Air_F_beta",
          "A3_Soft_F",
          "A3_Soft_F_Offroad_01",
          "A3_Static_F",
          "A3_boat_F"
        };
    		version = "1.0";
    		versionStr = "1.0";
    		author = "Schwaggot";
    		authorUrl = "http://kellerkompanie.com/";
    };
};

class cfgFactionClasses {
	class keko_faction_moon_opfor {
		displayName = "Kellerkompanie Moon";
		priority = 1;
		side = 0;
		icon = "\A3\data_f\cfgfactionclasses_opf_ca.paa";
		scopeCurator = 1;
	};
};

class CfgVehicleClasses {
	class keko_vehicleclass_moon_opfor {
		displayName = "Men";
		priority = 2;
		scopeCurator = 1;
	};
};

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
