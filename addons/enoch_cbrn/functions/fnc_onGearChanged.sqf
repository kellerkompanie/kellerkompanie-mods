#include "script_component.hpp"

params["_unit"];

private _gear            = goggles _unit;
private _backpack        = backpackContainer _unit;
private _backpackType    = backpack _unit;

switch(true) do {
    case (_gear in ["G_AirPurifyingRespirator_01_F", "G_AirPurifyingRespirator_01_nofilter_F"]): {
        switch true do {
            case (_backpackType == "B_CombinationUnitRespirator_01_F"): {
                //Switch to APR without filter
                _unit linkItem "G_AirPurifyingRespirator_01_nofilter_F";

                _backpack setObjectTextureGlobal [1, "a3\supplies_f_enoch\bags\data\b_cur_01_co.paa"];
                _backpack setObjectTextureGlobal [2, "a3\supplies_f_enoch\bags\data\b_cur_01_co.paa"];
                _backpack setObjectTextureGlobal [3, ""];
            };
            case (_backpackType == "B_SCBA_01_F"): {
                //Switch to APR without filter
                _unit linkItem "G_AirPurifyingRespirator_01_nofilter_F";

                _backpack setObjectTextureGlobal [1, "a3\supplies_f_enoch\bags\data\b_scba_01_co.paa"];
                _backpack setObjectTextureGlobal [2, ""];
            };
        };
    };

    case (_gear in ["Mask_02_sand_nofilter"]): {
        switch true do {
            case (_backpackType == "B_CombinationUnitRespirator_01_F"): {
                //Switch to APR without filter
                _unit linkItem "Mask_02_sand_nofilter";

                _backpack setObjectTextureGlobal [1, "a3\supplies_f_enoch\bags\data\b_cur_01_co.paa"];
                _backpack setObjectTextureGlobal [2, "a3\supplies_f_enoch\bags\data\b_cur_01_co.paa"];
                _backpack setObjectTextureGlobal [3, ""];
            };
            case (_backpackType == "B_SCBA_01_F"): {
                //Switch to APR without filter
                _unit linkItem "Mask_02_sand_nofilter";

                _backpack setObjectTextureGlobal [1, "a3\supplies_f_enoch\bags\data\b_scba_01_co.paa"];
                _backpack setObjectTextureGlobal [2, ""];
            };
        };
    };

    case (_gear in ["Mask_02_black_nofilter"]): {
        switch true do {
            case (_backpackType == "B_CombinationUnitRespirator_01_F"): {
                //Switch to APR without filter
                _unit linkItem "Mask_02_black_nofilter";

                _backpack setObjectTextureGlobal [1, "a3\supplies_f_enoch\bags\data\b_cur_01_co.paa"];
                _backpack setObjectTextureGlobal [2, "a3\supplies_f_enoch\bags\data\b_cur_01_co.paa"];
                _backpack setObjectTextureGlobal [3, ""];
            };
            case (_backpackType == "B_SCBA_01_F"): {
                //Switch to APR without filter
                _unit linkItem "Mask_02_black_nofilter";

                _backpack setObjectTextureGlobal [1, "a3\supplies_f_enoch\bags\data\b_scba_01_co.paa"];
                _backpack setObjectTextureGlobal [2, ""];
            };
        };
    };

    case (_gear in ["Mask_02_olive_nofilter"]): {
        switch true do {
            case (_backpackType == "B_CombinationUnitRespirator_01_F"): {
                //Switch to APR without filter
                _unit linkItem "Mask_02_olive_nofilter";

                _backpack setObjectTextureGlobal [1, "a3\supplies_f_enoch\bags\data\b_cur_01_co.paa"];
                _backpack setObjectTextureGlobal [2, "a3\supplies_f_enoch\bags\data\b_cur_01_co.paa"];
                _backpack setObjectTextureGlobal [3, ""];
            };
            case (_backpackType == "B_SCBA_01_F"): {
                //Switch to APR without filter
                _unit linkItem "Mask_02_olive_nofilter";

                _backpack setObjectTextureGlobal [1, "a3\supplies_f_enoch\bags\data\b_scba_01_co.paa"];
                _backpack setObjectTextureGlobal [2, ""];
            };
        };
    };

    case !(_gear in ["G_AirPurifyingRespirator_01_nofilter_F", "G_RegulatorMask_F", "Mask_02_black_nofilter", "Mask_02_olive_nofilter", "Mask_02_sand_nofilter"]): {
        switch true do {
            case (_backpackType == "B_CombinationUnitRespirator_01_F"): {
                _backpack setObjectTextureGlobal [1, ""];
                _backpack setObjectTextureGlobal [2, ""];
                _backpack setObjectTextureGlobal [3, ""];
            };
            case (_backpackType == "B_SCBA_01_F"): {
                _backpack setObjectTextureGlobal [1, ""];
                _backpack setObjectTextureGlobal [2, ""];
            };
        };
    };
    case (_gear == "G_RegulatorMask_F"): {
        switch true do {
            case (_backpackType == "B_CombinationUnitRespirator_01_F"): {
                _backpack setObjectTextureGlobal [1, "a3\supplies_f_enoch\bags\data\b_cur_01_co.paa"];
                _backpack setObjectTextureGlobal [2, ""];
                _backpack setObjectTextureGlobal [3, "a3\supplies_f_enoch\bags\data\b_cur_01_co.paa"];
            };
            case (_backpackType == "B_SCBA_01_F"): {
                _backpack setObjectTextureGlobal [1, ""];
                _backpack setObjectTextureGlobal [2, "a3\supplies_f_enoch\bags\data\b_scba_01_co.paa"];
            };
        };
    };
};
