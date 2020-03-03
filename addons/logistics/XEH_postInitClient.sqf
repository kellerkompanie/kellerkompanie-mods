#include "script_component.hpp"

call FUNC(addFuelConsumptionHandler);

if (GVAR(enableUnflipAction) > 0) then {
    private _action = [QGVAR(unflip), "Unflip vehicle", "", {_target call EFUNC(common,unflipVehicle)}, {true}] call ace_interact_menu_fnc_createAction;
    ["LandVehicle", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
};
