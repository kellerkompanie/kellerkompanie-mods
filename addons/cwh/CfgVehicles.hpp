class CfgVehicles {
    class WeaponHolder;
    class GroundWeaponHolder: WeaponHolder {
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0,1,0};
        ace_dragging_dragDirection = 0;

        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0,0.5,1};
        ace_dragging_carryDirection = 0;
    };

    class ThingX;
    class WeaponHolderSimulated: ThingX {
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0,1,0};
        ace_dragging_dragDirection = 0;

        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0,0.5,1};
        ace_dragging_carryDirection = 0;
    };
};
