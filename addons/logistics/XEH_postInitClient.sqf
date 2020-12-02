#include "script_component.hpp"

call FUNC(addFuelConsumptionHandler);

if (GVAR(enableUnflipAction) > 0) then {
    private _action = [QGVAR(unflip), "Unflip vehicle", "", {_target call EFUNC(common,unflipVehicle)}, {true}] call ace_interact_menu_fnc_createAction;
    ["LandVehicle", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
};

if(GVAR(virtualUAVLogistics) > ACCESS_DISABLED) then {
    if (isNil QGVAR(uavSupplyBase)) then {
        systemChat "[KEKO] (Logistics) WARNING: Virtual UAV Logistics enabled but no supply base set! UAV supply not available.";
    } else {
        if ([player,GVAR(virtualUAVLogistics)] call FUNC(hasAccess)) then {
            [{time > 0}, {
                player call FUNC(addVirtualUAVLogisticActions);
            }] call CBA_fnc_waitUntilAndExecute;
        };
    };
};