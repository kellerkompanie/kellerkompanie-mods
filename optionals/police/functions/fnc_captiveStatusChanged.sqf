#include "script_component.hpp"

params ["_unit", "_state", "_func"];

private _civilian_handcuffed = [
        "keko_police_15_ich_will_meinen_anwalt",
        "keko_police_12_loslassen_oder_es_knallt",
        "keko_police_10_lasst_mich_in_ruhe",
        "keko_police_10_ich_mach_keine_bewegung",
        "keko_police_09_verdammte_polizei_schiessen_auf_alles",
        "keko_police_09_mehr_aufregung_als_ich_wollte",
        "keko_police_09_jetzt_zufrieden",
        "keko_police_08_ich_mach_keine_bewegung",
        "keko_police_03_ich_will_meinen_anwalt",
        "keko_police_07_lasst_mich_in_ruhe",
        "keko_police_05_was_immer_sie_sagen",
        "keko_police_04_werd_bloss_nicht_frech",
        "keko_police_04_mistkerl",
        "keko_police_03_verdammte_cops"
    ];

private _gangster_handcuffed = [
        "keko_police_15_ich_will_meinen_anwalt",
        "keko_police_14_ah_verdammt",
        "keko_police_12_loslassen_oder_es_knallt",
        "keko_police_12_gottverdammte_cops",
        "keko_police_12_fluchen",
        "keko_police_10_oh_scheisse",
        "keko_police_10_lasst_mich_in_ruhe",
        "keko_police_09_verdammte_polizei_schiessen_auf_alles",
        "keko_police_09_mehr_aufregung_als_ich_wollte",
        "keko_police_09_jetzt_zufrieden",
        "keko_police_03_ich_will_meinen_anwalt",
        "keko_police_06_wir_koennen_uns_wohl_nicht_einigen",
        "keko_police_06_erwischt_verdammt",
        "keko_police_04_mistkerl",
        "keko_police_04_ham_sie_n_haftbefehl",
        "keko_police_04_habt_ihr_jungs_nichts_besseres_zu_tun",
        "keko_police_03_schweine",
        "keko_police_03_verdammte_cops"
    ];

if((_func isEqualTo "SetHandcuffed") && _state) then {
    if(side _unit == civilian) then {
        [_unit, _gangster_handcuffed] spawn {
            params ["_unit", "_gangster_handcuffed"];
            sleep 1.5;
            _unit say3D (selectRandom _gangster_handcuffed);
        };
    } else {
        [_unit, _civilian_handcuffed] spawn {
            params ["_unit", "_civilian_handcuffed"];
            sleep 2;
            _unit say3D (selectRandom _civilian_handcuffed);
        };
    };
};
