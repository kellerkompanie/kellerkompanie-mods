#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        units[] = {
            /* BLUFOR units */
            QGVAR(blufor_soldier),
            QGVAR(blufor_command),
            QGVAR(blufor_lead),
            QGVAR(blufor_sergeant),
            QGVAR(blufor_sql),
            QGVAR(blufor_ftl),
            QGVAR(blufor_doctor),
            QGVAR(blufor_medic),

            QGVAR(blufor_rifleman),
            QGVAR(blufor_rifleman_at),
            QGVAR(blufor_rifleman_at_tanks),
            QGVAR(blufor_grenadier),
            QGVAR(blufor_lmg),
            QGVAR(blufor_lmg_asst),

            QGVAR(blufor_mmg),
            QGVAR(blufor_mmg_asst),
            QGVAR(blufor_at),
            QGVAR(blufor_at_asst),
            QGVAR(blufor_aa),
            QGVAR(blufor_aa_asst),

            QGVAR(blufor_marksman),
            QGVAR(blufor_sniper),
            QGVAR(blufor_spotter),
            QGVAR(blufor_eod),
            QGVAR(blufor_engineer),
            QGVAR(blufor_driver),
            QGVAR(blufor_heli_pilot),
            QGVAR(blufor_heli_crew),
            QGVAR(blufor_jet_pilot),
            QGVAR(blufor_jtac),
            QGVAR(blufor_uav),
            QGVAR(blufor_survivor),

            QGVAR(blufor_custom1),
            QGVAR(blufor_custom2),
            QGVAR(blufor_custom3),
            QGVAR(blufor_custom4),
            QGVAR(blufor_custom5),
            QGVAR(blufor_custom6),
            QGVAR(blufor_custom7),
            QGVAR(blufor_custom8),
            QGVAR(blufor_custom9),


            /* Indpendent units */
            QGVAR(indfor_soldier),
            QGVAR(indfor_command),
            QGVAR(indfor_lead),
            QGVAR(indfor_sergeant),
            QGVAR(indfor_sql),
            QGVAR(indfor_ftl),
            QGVAR(indfor_doctor),
            QGVAR(indfor_medic),

            QGVAR(indfor_rifleman),
            QGVAR(indfor_rifleman_at),
            QGVAR(indfor_rifleman_at_tanks),
            QGVAR(indfor_grenadier),
            QGVAR(indfor_lmg),
            QGVAR(indfor_lmg_asst),

            QGVAR(indfor_mmg),
            QGVAR(indfor_mmg_asst),
            QGVAR(indfor_at),
            QGVAR(indfor_at_asst),
            QGVAR(indfor_aa),
            QGVAR(indfor_aa_asst),

            QGVAR(indfor_marksman),
            QGVAR(indfor_sniper),
            QGVAR(indfor_spotter),
            QGVAR(indfor_eod),
            QGVAR(indfor_engineer),
            QGVAR(indfor_driver),
            QGVAR(indfor_heli_pilot),
            QGVAR(indfor_heli_crew),
            QGVAR(indfor_jet_pilot),
            QGVAR(indfor_jtac),
            QGVAR(indfor_uav),
            QGVAR(indfor_survivor),

            QGVAR(indfor_custom1),
            QGVAR(indfor_custom2),
            QGVAR(indfor_custom3),
            QGVAR(indfor_custom4),
            QGVAR(indfor_custom5),
            QGVAR(indfor_custom6),
            QGVAR(indfor_custom7),
            QGVAR(indfor_custom8),
            QGVAR(indfor_custom9),


            /* OPFOR units */
            QGVAR(opfor_soldier),
            QGVAR(opfor_command),
            QGVAR(opfor_lead),
            QGVAR(opfor_sergeant),
            QGVAR(opfor_sql),
            QGVAR(opfor_ftl),
            QGVAR(opfor_doctor),
            QGVAR(opfor_medic),

            QGVAR(opfor_rifleman),
            QGVAR(opfor_rifleman_at),
            QGVAR(opfor_rifleman_at_tanks),
            QGVAR(opfor_grenadier),
            QGVAR(opfor_lmg),
            QGVAR(opfor_lmg_asst),

            QGVAR(opfor_mmg),
            QGVAR(opfor_mmg_asst),
            QGVAR(opfor_at),
            QGVAR(opfor_at_asst),
            QGVAR(opfor_aa),
            QGVAR(opfor_aa_asst),

            QGVAR(opfor_marksman),
            QGVAR(opfor_sniper),
            QGVAR(opfor_spotter),
            QGVAR(opfor_eod),
            QGVAR(opfor_engineer),
            QGVAR(opfor_driver),
            QGVAR(opfor_heli_pilot),
            QGVAR(opfor_heli_crew),
            QGVAR(opfor_jet_pilot),
            QGVAR(opfor_jtac),
            QGVAR(opfor_uav),
            QGVAR(opfor_survivor),

            QGVAR(opfor_custom1),
            QGVAR(opfor_custom2),
            QGVAR(opfor_custom3),
            QGVAR(opfor_custom4),
            QGVAR(opfor_custom5),
            QGVAR(opfor_custom6),
            QGVAR(opfor_custom7),
            QGVAR(opfor_custom8),
            QGVAR(opfor_custom9),


            /* Legacy Units DEPRECATED - DO NOT USE */
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


            /* Legacy Indpendent units */
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


            /* Legacy OPFOR units */
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
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Characters_F_BLUFOR",
            "A3_Characters_F_INDEP",
            "A3_Characters_F_OPFOR",
            "A3_Characters_F"
        };
        author = ECSTRING(common,Schwaggot);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicleClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
#include "CfgEventHandlers.hpp"
