class CfgWeapons {

    class ItemCore;
    class InventoryItem_Base_F;

    class UniformItem: InventoryItem_Base_F {
        type = 801;
    };

    class skn_u_nbc_indep_blu: Itemcore {
        class ItemInfo: UniformItem {
            containerClass = "Supply40";
        };
    };

    class skn_u_nbc_indep_blk: skn_u_nbc_indep_blu {
        class ItemInfo: UniformItem {
            containerClass = "Supply40";
        };
    };

    class skn_u_nbc_indep_gre: skn_u_nbc_indep_blu {
        class ItemInfo: UniformItem {
            containerClass = "Supply40";
        };
    };

    class skn_u_nbc_opf_blue: skn_u_nbc_indep_blu {
        class ItemInfo: UniformItem {
            containerClass = "Supply40";
        };
    };

    class skn_u_nbc_opf_red: skn_u_nbc_opf_blue {
        class ItemInfo: UniformItem {
            containerClass = "Supply40";
        };
    };

    class skn_u_nbc_opf_yellow: skn_u_nbc_opf_blue {
        class ItemInfo: UniformItem {
            containerClass = "Supply40";
        };
    };

    class skn_u_nbc_opf_white: skn_u_nbc_opf_blue {
        class ItemInfo: UniformItem {
            containerClass = "Supply40";
        };
    };

    class skn_u_nbc_bluf_mtp: skn_u_nbc_indep_blu {
        class ItemInfo: UniformItem {
            containerClass = "Supply40";
        };
    };

    class skn_u_nbc_bluf_wd: skn_u_nbc_bluf_mtp {
        class ItemInfo: UniformItem {
            containerClass = "Supply40";
        };
    };


    class skn_nbc_vest_base: ItemCore
    {
        class ItemInfo;
    };

    class skn_o_elbv_worn: skn_nbc_vest_base {
        class ItemInfo: ItemInfo {
            maximumLoad = 120;
            containerClass = "Supply120";
        };
    };

    class skn_o_elbv_worn_no_bp: skn_o_elbv_worn {
        class ItemInfo: ItemInfo {
            maximumLoad = 120;
            containerClass = "Supply120";
        };
    };

    class skn_b_nbc_xrt_tac_blu: skn_nbc_vest_base  {
        class ItemInfo: ItemInfo {
            maximumLoad = 120;
            containerClass = "Supply120";
        };
    };

    class skn_b_nbc_xrt_tac_blk: skn_b_nbc_xrt_tac_blu {
        class ItemInfo: ItemInfo {
            maximumLoad = 120;
            containerClass = "Supply120";
        };
    };

    class skn_b_nbc_xrt_tac_brn: skn_b_nbc_xrt_tac_blu {
        class ItemInfo: ItemInfo {
            maximumLoad = 120;
            containerClass = "Supply120";
        };
    };

    class skn_b_nbc_carrier_mtp: skn_nbc_vest_base {
        class ItemInfo: ItemInfo {
            maximumLoad = 120;
            containerClass = "Supply120";
        };
    };

    class skn_b_nbc_carrier_wd: skn_b_nbc_carrier_mtp {
        class ItemInfo: ItemInfo {
            maximumLoad = 120;
            containerClass = "Supply120";
        };
    };


};
