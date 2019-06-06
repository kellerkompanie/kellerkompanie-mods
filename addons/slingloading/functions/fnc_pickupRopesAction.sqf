#include "script_component.hpp"

if([] call FUNC(canPickupRopes)) then {
    private _closestRope = [] call FUNC(getClosestRope);
    if(!isNull (_closestRope select 0)) then {
        private _canPickupRopes = true;
        if!(missionNamespace getVariable [QGVAR(LockedVehiclesEnabled),false]) then {
            if( locked (_closestRope select 0) > 1 ) then {
                hint "Cannot pick up cargo ropes from locked vehicle";
                _canPickupRopes = false;
            };
        };
        if(_canPickupRopes) then {
            [(_closestRope select 0), player, (_closestRope select 1)] call FUNC(pickupRopes);
        };
    };
};
