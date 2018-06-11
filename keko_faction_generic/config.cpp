class CfgPatches
{
    class keko_faction_generic
    {
        units[] = {
        	/* BLUFOR units */        	
			"keko_blufor_soldier",
			"keko_blufor_command",
			"keko_blufor_lead",
			"keko_blufor_sergeant",
			"keko_blufor_sql",
			"keko_blufor_ftl",
			"keko_blufor_doctor",
			"keko_blufor_medic",

			"keko_blufor_rifleman",
			"keko_blufor_rifleman_at",
			"keko_blufor_rifleman_at_tanks",
			"keko_blufor_grenadier",
			"keko_blufor_lmg",
			"keko_blufor_lmg_asst",

			"keko_blufor_mmg",
			"keko_blufor_mmg_asst",
			"keko_blufor_at",
			"keko_blufor_at_asst",
			"keko_blufor_aa",
			"keko_blufor_aa_asst",

			"keko_blufor_marksman",
			"keko_blufor_sniper",
			"keko_blufor_spotter",
			"keko_blufor_eod",
			"keko_blufor_engineer",
			"keko_blufor_driver",
			"keko_blufor_heli_pilot",
			"keko_blufor_heli_crew",
			"keko_blufor_jet_pilot",
			"keko_blufor_jtac",
			"keko_blufor_uav",
			"keko_blufor_survivor",

			"keko_blufor_custom1",
			"keko_blufor_custom2",
			"keko_blufor_custom3",
			"keko_blufor_custom4",
			"keko_blufor_custom5",
			"keko_blufor_custom6",
			"keko_blufor_custom7",
			"keko_blufor_custom8",
			"keko_blufor_custom9",


			/* Indpendent units */ 
			"keko_indfor_soldier",
			"keko_indfor_command",
			"keko_indfor_lead",
			"keko_indfor_sergeant",
			"keko_indfor_sql",
			"keko_indfor_ftl",
			"keko_indfor_doctor",
			"keko_indfor_medic",

			"keko_indfor_rifleman",
			"keko_indfor_rifleman_at",
			"keko_indfor_rifleman_at_tanks",
			"keko_indfor_grenadier",
			"keko_indfor_lmg",
			"keko_indfor_lmg_asst",

			"keko_indfor_mmg",
			"keko_indfor_mmg_asst",
			"keko_indfor_at",
			"keko_indfor_at_asst",
			"keko_indfor_aa",
			"keko_indfor_aa_asst",

			"keko_indfor_marksman",
			"keko_indfor_sniper",
			"keko_indfor_spotter",
			"keko_indfor_eod",
			"keko_indfor_engineer",
			"keko_indfor_driver",
			"keko_indfor_heli_pilot",
			"keko_indfor_heli_crew",
			"keko_indfor_jet_pilot",
			"keko_indfor_jtac",
			"keko_indfor_uav",
			"keko_indfor_survivor",

			"keko_indfor_custom1",
			"keko_indfor_custom2",
			"keko_indfor_custom3",
			"keko_indfor_custom4",
			"keko_indfor_custom5",
			"keko_indfor_custom6",
			"keko_indfor_custom7",
			"keko_indfor_custom8",
			"keko_indfor_custom9",


			/* OPFOR units */ 
			"keko_opfor_soldier",
			"keko_opfor_command",
			"keko_opfor_lead",
			"keko_opfor_sergeant",
			"keko_opfor_sql",
			"keko_opfor_ftl",
			"keko_opfor_doctor",
			"keko_opfor_medic",

			"keko_opfor_rifleman",
			"keko_opfor_rifleman_at",
			"keko_opfor_rifleman_at_tanks",
			"keko_opfor_grenadier",
			"keko_opfor_lmg",
			"keko_opfor_lmg_asst",

			"keko_opfor_mmg",
			"keko_opfor_mmg_asst",
			"keko_opfor_at",
			"keko_opfor_at_asst",
			"keko_opfor_aa",
			"keko_opfor_aa_asst",

			"keko_opfor_marksman",
			"keko_opfor_sniper",
			"keko_opfor_spotter",
			"keko_opfor_eod",
			"keko_opfor_engineer",
			"keko_opfor_driver",
			"keko_opfor_heli_pilot",
			"keko_opfor_heli_crew",
			"keko_opfor_jet_pilot",
			"keko_opfor_jtac",
			"keko_opfor_uav",
			"keko_opfor_survivor",

			"keko_opfor_custom1",
			"keko_opfor_custom2",
			"keko_opfor_custom3",
			"keko_opfor_custom4",
			"keko_opfor_custom5",
			"keko_opfor_custom6",
			"keko_opfor_custom7",
			"keko_opfor_custom8",
			"keko_opfor_custom9"
		};
        weapons[] = {};
        requiredVersion = 1.80;
        requiredAddons[] = {
        	"A3_Characters_F_BLUFOR",
        	"A3_Characters_F_INDEP",
			"A3_Characters_F_OPFOR",
			"A3_Characters_F"
		};
		version = "1.0";
		versionStr = "1.0";
		author = "Schwaggot";
		authorUrl = "http://kellerkompanie.com/";
    };
};

class cfgFactionClasses {
	class keko_faction_generic_blufor {
		displayName = "Kellerkompanie BLUFOR";
		priority = 1;
		side = 1;
		icon = "\A3\data_f\cfgfactionclasses_blu_ca.paa";
		scopeCurator = 1;
	};
	class keko_faction_generic_indfor {
		displayName = "Kellerkompanie INDFOR";
		priority = 1;
		side = 2;
		icon = "\A3\data_f\cfgfactionclasses_ind_ca.paa";
		scopeCurator = 1;
	};
	class keko_faction_generic_opfor {
		displayName = "Kellerkompanie OPFOR";
		priority = 1;
		side = 0;
		icon = "\A3\data_f\cfgfactionclasses_opf_ca.paa";
		scopeCurator = 1;
	};
};

class CfgVehicleClasses {
	class keko_vehicleclass_generic_blufor {
		displayName = "Men";
		priority = 2;
		scopeCurator = 1;
	};
	class keko_vehicleclass_generic_indfor {
		displayName = "Men";
		priority = 2;
		scopeCurator = 1;
	};
	class keko_vehicleclass_generic_opfor {
		displayName = "Men";
		priority = 2;
		scopeCurator = 1;
	};
};

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"

/*class Cfg3DEN
{
	class EventHandlers
	{
		class keko
		{
			OnMissionSave = "{diag_log _x; diag_log (_x get3DENAttribute 'isPlayable');} forEach (all3DENEntities select 0);";
		};
	};
};*/

class CfgFunctions {
	class keko_faction_generic {
		tag = "keko_faction_generic";
		class functions {
			file = "keko_faction_generic\functions";
			class addRoleDescription;
		};
	};

};
