#include "script_component.hpp"

class CfgPatches {
    class ADDON {
		name = COMPONENT_NAME;
      	units[] = {
			QGVAR(moduleLocation3den),
			QGVAR(modulePOI3den),
			QGVAR(moduleSpawnPoint3den),
			QGVAR(moduleStorePoint3den),

			/* Civilians */
			QGVAR(civilian_pharmacist),
			QGVAR(civilian_hangar),
			QGVAR(civilian_parking),
			QGVAR(civilian_garage),
			QGVAR(civilian_cardealer),
			QGVAR(civilian_trader),
			QGVAR(civilian_weapon_shop),
			QGVAR(civilian_item_shop),
			QGVAR(civilian_doctor),
			QGVAR(civilian_mechanic),
			QGVAR(civilian_gear_shop),
			QGVAR(civilian_fuel_shop),
			QGVAR(civilian_atm),
			QGVAR(civilian_vehicle_shop),
			QGVAR(civilian_helipilot),
			QGVAR(civilian_pilot),
			QGVAR(civilian_builder),

	        /* BLUFOR units */
	        QGVAR(blufor_soldier1),
	        QGVAR(blufor_soldier2),
	        QGVAR(blufor_soldier3),
	        QGVAR(blufor_soldier4),
	        QGVAR(blufor_soldier5),
	        QGVAR(blufor_soldier6),
	        QGVAR(blufor_soldier7),
	        QGVAR(blufor_grenadier1),
	        QGVAR(blufor_grenadier2),
	        QGVAR(blufor_rifleman_at),
	        QGVAR(blufor_minimi),
	        QGVAR(blufor_m60),
	        QGVAR(blufor_medic),
	        QGVAR(blufor_sniper),
	        QGVAR(blufor_sniper_sws),
	        QGVAR(blufor_marksman),
	        QGVAR(blufor_ftl),
	        QGVAR(blufor_pilot),

	        QGVAR(blufor_offroad),
	        QGVAR(blufor_offroad_mg),
	        QGVAR(blufor_jeep),
	        QGVAR(blufor_jeep_mg),
	        QGVAR(blufor_truck_cargo),
	        QGVAR(blufor_quadbike),
	        QGVAR(blufor_van_cargo),
	        QGVAR(blufor_van_transport),
	        QGVAR(blufor_humvee),
	        QGVAR(blufor_suv),
	        QGVAR(blufor_kamaz),
	        QGVAR(blufor_yamaha),

	        QGVAR(blufor_md500),
	        QGVAR(blufor_orca),
	        QGVAR(blufor_uh1h),
	        QGVAR(blufor_uh1h_gunship),
	        QGVAR(blufor_uh1h_unarmed),

	        QGVAR(blufor_cessna),
	        QGVAR(blufor_doppeldecker),

	        QGVAR(blufor_mg_high),
	        QGVAR(blufor_mg_low),
	        QGVAR(blufor_mortar),
	        QGVAR(blufor_antiair),

	        QGVAR(blufor_paratrike),
	        QGVAR(blufor_paraglider),
	        QGVAR(blufor_gladiator),
	        QGVAR(blufor_mustang),
	        QGVAR(blufor_texan),
	        QGVAR(blufor_ultralight),
	        QGVAR(blufor_mozzie_black),
	        QGVAR(blufor_mozzie_red),



	        /* INDFOR units */
	        QGVAR(indfor_soldier1),
	        QGVAR(indfor_soldier2),
	        QGVAR(indfor_soldier3),
	        QGVAR(indfor_soldier4),
	        QGVAR(indfor_soldier5),
	        QGVAR(indfor_soldier6),
	        QGVAR(indfor_soldier7),
	        QGVAR(indfor_grenadier1),
	        QGVAR(indfor_grenadier2),
	        QGVAR(indfor_rifleman_at),
	        QGVAR(indfor_minimi),
	        QGVAR(indfor_m60),
	        QGVAR(indfor_medic),
	        QGVAR(indfor_sniper),
	        QGVAR(indfor_sniper_sws),
	        QGVAR(indfor_marksman),
	        QGVAR(indfor_ftl),
	        QGVAR(indfor_pilot),

	        QGVAR(indfor_offroad),
	        QGVAR(indfor_offroad_mg),
	        QGVAR(indfor_jeep),
	        QGVAR(indfor_jeep_mg),
	        QGVAR(indfor_truck_cargo),
	        QGVAR(indfor_quadbike),
	        QGVAR(indfor_van_cargo),
	        QGVAR(indfor_van_transport),
	        QGVAR(indfor_humvee),
	        QGVAR(indfor_suv),
	        QGVAR(indfor_kamaz),
	        QGVAR(indfor_yamaha),

	        QGVAR(indfor_md500),
	        QGVAR(indfor_orca),
	        QGVAR(indfor_uh1h),
	        QGVAR(indfor_uh1h_gunship),
	        QGVAR(indfor_uh1h_unarmed),

	        QGVAR(indfor_cessna),
	        QGVAR(indfor_doppeldecker),

	        QGVAR(indfor_mg_high),
	        QGVAR(indfor_mg_low),
	        QGVAR(indfor_mortar),
	        QGVAR(indfor_antiair),

	        QGVAR(indfor_paratrike),
	        QGVAR(indfor_paraglider),
	        QGVAR(indfor_gladiator),
	        QGVAR(indfor_mustang),
	        QGVAR(indfor_texan),
	        QGVAR(indfor_ultralight),
	        QGVAR(indfor_mozzie_black),
	        QGVAR(indfor_mozzie_red),



	        /* OPFOR units */
	        QGVAR(opfor_soldier1),
	        QGVAR(opfor_soldier2),
	        QGVAR(opfor_soldier3),
	        QGVAR(opfor_soldier4),
	        QGVAR(opfor_soldier5),
	        QGVAR(opfor_soldier6),
	        QGVAR(opfor_soldier7),
	        QGVAR(opfor_grenadier1),
	        QGVAR(opfor_grenadier2),
	        QGVAR(opfor_rifleman_at),
	        QGVAR(opfor_minimi),
	        QGVAR(opfor_m60),
	        QGVAR(opfor_medic),
	        QGVAR(opfor_sniper),
	        QGVAR(opfor_sniper_sws),
	        QGVAR(opfor_marksman),
	        QGVAR(opfor_ftl),
	        QGVAR(opfor_pilot),

	        QGVAR(opfor_offroad),
	        QGVAR(opfor_offroad_mg),
	        QGVAR(opfor_jeep),
	        QGVAR(opfor_jeep_mg),
	        QGVAR(opfor_truck_cargo),
	        QGVAR(opfor_quadbike),
	        QGVAR(opfor_van_cargo),
	        QGVAR(opfor_van_transport),
	        QGVAR(opfor_humvee),
	        QGVAR(opfor_suv),
	        QGVAR(opfor_kamaz),
	        QGVAR(opfor_yamaha),

	        QGVAR(opfor_md500),
	        QGVAR(opfor_orca),
	        QGVAR(opfor_uh1h),
	        QGVAR(opfor_uh1h_gunship),
	        QGVAR(opfor_uh1h_unarmed),

	        QGVAR(opfor_cessna),
	        QGVAR(opfor_doppeldecker),

	        QGVAR(opfor_mg_high),
	        QGVAR(opfor_mg_low),
	        QGVAR(opfor_mortar),
	        QGVAR(opfor_antiair),

	        QGVAR(opfor_paratrike),
	        QGVAR(opfor_paraglider),
	        QGVAR(opfor_gladiator),
	        QGVAR(opfor_mustang),
	        QGVAR(opfor_texan),
	        QGVAR(opfor_ultralight),
	        QGVAR(opfor_mozzie_black),
	        QGVAR(opfor_mozzie_red)
		};
	  	weapons[] = {"SMA_556_RIFLEBASE","SMA_762_RIFLEBASE"};
		requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
        	"3den",
          	"keko_common",
          	"ace_main",
          	"cba_main",
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
          	"A3_boat_F",
          	"sab_paraglider",
          	"sab_gladiator",
          	"sab_mustang",
          	"sab_texan",
          	"sab_ultralight",
          	"rhsgref_air",
          	"rhsgref_c_air",
          	"RwG_Addon_Choppers_Mozzie",
			"rhsusf_weapons",
			"rhsusf_weapons2",
			"rhsusf_weapons3",
			//"SMA_StandardAmmo",
			"A3_Weapons_F",
			"SMA_Weapons",
			"SMA_Weapons_Magazines"
       };
	   author = ECSTRING(common,KEKOTeam);
	   authors[] = {"Schwaggot"};
	   url = ECSTRING(main,URL);
	   VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicleClasses.hpp"
#include "CfgMarkerClasses.hpp"
#include "CfgMarkers.hpp"
#include "CfgWeapons.hpp"

#include "defines.hpp"

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
