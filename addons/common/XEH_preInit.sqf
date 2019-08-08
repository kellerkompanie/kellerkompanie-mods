#include "script_component.hpp"
#include "\a3\editor_f\Data\Scripts\dikCodes.h"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

enableSaving [false, false];


if(isServer) then {
    GVAR(aiKilled) = 0;
    GVAR(fragsOut) = 0;
    GVAR(shotsFired) = 0;
    GVAR(bandagesApplied) = 0;
    GVAR(pulseChecked) = 0;
    GVAR(cprPerformed) = 0;

    GVAR(peoplePunched) = 0;
    GVAR(civsKilled) = 0;
    GVAR(corpsesHidden) = 0;
    GVAR(windowsBroken) = 0;

    addMissionEventHandler ["EntityKilled", {
        params ["_unit"];

        if (_unit isKindOf "Man") then {
            if (!(isPlayer _unit)) then {
                GVAR(aiKilled) = GVAR(aiKilled) + 1;
            };
            private _faction = faction _unit;
            if ( _faction in ["CIV_F","CIV_IDAP_F","LOP_AFR_Civ","LOP_CHR_Civ","LOP_TAK_Civ","ISC_Civs","rds_rus_civ"]) then {
                GVAR(civsKilled) = GVAR(civsKilled) + 1;
            };
        };
    }];

    [QEGVAR(punch,onPunched), { GVAR(peoplePunched) = GVAR(peoplePunched) + 1; }] call CBA_fnc_addEventHandler;
    [QEGVAR(punch,onCorpseHidden), { GVAR(corpsesHidden) = GVAR(corpsesHidden) + 1; }] call CBA_fnc_addEventHandler;
    [QGVAR(onWindowBroken), { GVAR(windowsBroken) = GVAR(windowsBroken) + 1; }] call CBA_fnc_addEventHandler;
};

if(hasInterface) then {
    [
        "Kellerkompanie",
        QGVAR(breakWindow),
        [localize LSTRING(actionBreakWindow), localize LSTRING(actionBreakWindowTooltip)],
        {
            call FUNC(breakWindow)
        },
        {},
        [DIK, [false,false,false]]
    ] call cba_fnc_addKeybind;
};


GVAR(machineGuns) = [
    "LMG_Zafir_F",
    "LMG_Mk200_F",
    "arifle_MX_SW_F",
    "arifle_MX_SW_Black_F",
    "MMG_01_hex_F",
    "MMG_01_tan_F",
    "MMG_02_black_F",
    "MMG_02_camo_F",
    "MMG_02_sand_F",
    "LMG_03_F",
    "arifle_SPAR_02_blk_F",
    "arifle_SPAR_02_khk_F",
    "arifle_SPAR_02_snd_F",
    "arifle_CTARS_blk_F",
    "arifle_CTARS_ghex_F",
    "arifle_CTARS_hex_F",
    "sma_minimi_mk3_762tlb",
    "sma_minimi_mk3_762tlb_des",
    "sma_minimi_mk3_762tlb_wdl",
    "sma_minimi_mk3_762tsb",
    "sma_minimi_mk3_762tsb_des",
    "sma_minimi_mk3_762tsb_wdl",
    "vme_pla_qjb95_1",
    "ffaa_armas_minimi",
    "ffaa_armas_mg3",
    "ffaa_armas_mg4",
    "rhs_weap_m240B",
    "rhs_weap_m240G",
    "rhs_weap_m249",
    "rhs_weap_m249_pip_L",
    "rhs_weap_m249_pip_L_para",
    "rhs_weap_m249_pip_L_vfg",
    "rhs_weap_m249_pip_S",
    "rhs_weap_m249_pip_S_para",
    "rhs_weap_m249_pip_S_vfg",
    "rhs_weap_m249_pip",
    "rhs_weap_m27iar",
    "rhs_weap_m27iar_grip",
    "rhs_weap_pkm",
    "rhs_weap_pkp",
    "rhs_weap_mg42",
    "rhs_weap_m84",
    "rhs_weap_minimi_para_railed",
    "hlc_rifle_rpk",
    "hlc_rifle_RPK12",
    "hlc_rifle_rpk74n",
    "hlc_lmg_MG42",
    "hlc_lmg_mg42_bakelite",
    "hlc_lmg_MG3_optic",
    "hlc_lmg_MG3",
    "hlc_lmg_MG3KWS_b",
    "hlc_lmg_MG3KWS_g",
    "hlc_lmg_MG3KWS",
    "hlc_lmg_mg42kws_b",
    "hlc_lmg_mg42kws_g",
    "hlc_lmg_MG42KWS_t",
    "PSZ_PKM",
    "PSZ_UKM_D",
    "PSZ_UKM_P",
    "UK3CB_BAF_L110_762",
    "UK3CB_BAF_L110A1",
    "UK3CB_BAF_L110A2",
    "UK3CB_BAF_L110A2RIS",
    "UK3CB_BAF_L110A3",
    "UK3CB_BAF_L7A2",
    "UK3CB_BAF_L86A2",
    "BWA3_MG3",
    "BWA3_MG4",
    "BWA3_MG5",
    "BWA3_MG5_tan",
    "BWAdd_MG3",
    "BWAdd_MG4",
    "BWAdd_MG5",
    "OPTRE_M73"
];

GVAR(atLaunchers) = [
    "launch_RPG32_F",
    "launch_O_Titan_short_F",
    "launch_I_Titan_short_F",
    "launch_B_Titan_short_F",
    "launch_RPG32_ghex_F",
    "launch_RPG7_F",
    "launch_O_Titan_short_ghex_F",
    "launch_B_Titan_short_tna_F",
    "vme_pla_PF97",
    "vme_pla_PF89",
    "vme_pla_PF89A_AST",
    "vme_pla_PF89A",
    "vme_pla_PF89B",
    "vme_pla_PF98",
    "vme_pla_WPF89_2",
    "rhs_weap_fgm148",
    "rhs_weap_maaws",
    "rhs_weap_smaw",
    "rhs_weap_smaw_green",
    "rhs_weap_rpg7",
    "PSZ_RPG7V",
    "PSZ_Spike_LR",
    "BWA3_CarlGustav",
    "launch_MRAWS_green_rail_F",
    "launch_MRAWS_olive_rail_F",
    "launch_MRAWS_sand_rail_F",
    "launch_MRAWS_green_F",
    "launch_MRAWS_olive_F",
    "launch_MRAWS_sand_F",
    "launch_O_Vorona_brown_F",
    "launch_O_Vorona_green_F",
    "OPTRE_M41_SSR"
];

GVAR(aaLaunchers) = [
    "launch_I_Titan_F",
    "launch_O_Titan_F",
    "launch_B_Titan_F",
    "launch_O_Titan_ghex_F",
    "launch_B_Titan_tna_F",
    "vme_pla_FN6",
    "rhs_weap_fim92",
    "rhs_weap_igla",
    "PSZ_Grom",
    "BWA3_Fliegerfaust",
    "OPTRE_M41_SSR_G"
];

ADDON = true;
