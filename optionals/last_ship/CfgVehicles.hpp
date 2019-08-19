class CfgVehicles {
    class plp_ct_base;
    class plp_ct_WoodBoxLightSmall: plp_ct_base {
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 0.8, 0};
        ace_dragging_dragDirection = 0;

        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 0.8, 1};
        ace_dragging_carryDirection = 0;
    };
    class plp_ct_WoodBoxLightTiny:plp_ct_base {
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 0.5, 0};
        ace_dragging_dragDirection = 0;

        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 0.5, 1};
        ace_dragging_carryDirection = 0;
    };

    class plp_ct_PlasticBoxBlack;
    class plp_ct_PlasticBoxGrey: plp_ct_PlasticBoxBlack {
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 0.8, 0};
        ace_dragging_dragDirection = 90;

        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 0.8, 1};
        ace_dragging_carryDirection = 90;
    };
    class plp_ct_PlasticBoxRed: plp_ct_PlasticBoxBlack {
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 0.8, 0};
        ace_dragging_dragDirection = 90;

        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 0.8, 1};
        ace_dragging_carryDirection = 90;
    };
    class plp_ct_PlasticBoxBlue: plp_ct_PlasticBoxBlack {
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 0.8, 0};
        ace_dragging_dragDirection = 90;

        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 0.8, 1};
        ace_dragging_carryDirection = 90;
    };
};
