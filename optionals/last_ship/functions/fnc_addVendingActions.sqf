#include "script_component.hpp"

if !(hasInterface) exitWith {};

params ["_object"];

private _type = _object getVariable QGVAR(type);
switch(_type) do {
    case "cigs": {
        _actionRefillCigs = [QGVAR(refillCigs),"Refill cigarettes","",{[_target, "murshun_cigs_cigpack"] call FUNC(refillVendingMachine);},{["murshun_cigs_cigpack"] call FUNC(canRefillVendingMachine)}] call ace_interact_menu_fnc_createAction;
        _actionRefillMatches = [QGVAR(refillMatches),"Refill matches","",{[_target, "murshun_cigs_matches"] call FUNC(refillVendingMachine);},{["murshun_cigs_matches"] call FUNC(canRefillVendingMachine)}] call ace_interact_menu_fnc_createAction;
        _actionBuyCigs = [QGVAR(buyCigs),format ["Buy cigarettes (%1€)",6],"",{[_target, "murshun_cigs_cigpack"] call FUNC(useVendingMachine);},{true}] call ace_interact_menu_fnc_createAction;
        _actionBuyMatches = [QGVAR(buyMatches),format ["Buy matches (%1€)",1],"",{[_target, "murshun_cigs_matches"] call FUNC(useVendingMachine);},{true}] call ace_interact_menu_fnc_createAction;

        [_object, 0, ["ACE_MainActions"], _actionRefillCigs] call ace_interact_menu_fnc_addActionToObject;
        [_object, 0, ["ACE_MainActions"], _actionRefillMatches] call ace_interact_menu_fnc_addActionToObject;
        [_object, 0, ["ACE_MainActions"], _actionBuyCigs] call ace_interact_menu_fnc_addActionToObject;
        [_object, 0, ["ACE_MainActions"], _actionBuyMatches] call ace_interact_menu_fnc_addActionToObject;
    };
    case "soda": {
        _actionRefillFranta = [QGVAR(refillFranta),"Refill Franta","",{[_target, "ACE_Can_Franta"] call FUNC(refillVendingMachine);},{["ACE_Can_Franta"] call FUNC(canRefillVendingMachine)}] call ace_interact_menu_fnc_createAction;
        _actionRefillRedGull = [QGVAR(refillRedgull),"Refill RedGull","",{[_target, "ACE_Can_RedGull"] call FUNC(refillVendingMachine);},{["ACE_Can_RedGull"] call FUNC(canRefillVendingMachine)}] call ace_interact_menu_fnc_createAction;
        _actionRefillSpirit = [QGVAR(refillSpirit),"Refill Spirit","",{[_target, "ACE_Can_Spirit"] call FUNC(refillVendingMachine);},{["ACE_Can_Spirit"] call FUNC(canRefillVendingMachine)}] call ace_interact_menu_fnc_createAction;
        _actionRefillWater = [QGVAR(refillWater),"Refill water","",{[_target, "ACE_WaterBottle"] call FUNC(refillVendingMachine);},{["ACE_WaterBottle"] call FUNC(canRefillVendingMachine)}] call ace_interact_menu_fnc_createAction;
        _actionBuyFranta = [QGVAR(buyFranta),format ["Buy can of Franta (%1€)",2],"",{[_target, "ACE_Can_Franta"] call FUNC(useVendingMachine);},{true}] call ace_interact_menu_fnc_createAction;
        _actionBuyRedGull = [QGVAR(buyRedgull),format ["Buy can of RedGull (%1€)",3],"",{[_target, "ACE_Can_RedGull"] call FUNC(useVendingMachine);},{true}] call ace_interact_menu_fnc_createAction;
        _actionBuySpirit = [QGVAR(buySpirit),format ["Buy can of Spirit (%1€)",2],"",{[_target, "ACE_Can_Spirit"] call FUNC(useVendingMachine);},{true}] call ace_interact_menu_fnc_createAction;
        _actionBuyWater = [QGVAR(buyWater),format ["Buy can of Water (%1€)",1],"",{[_target, "ACE_WaterBottle"] call FUNC(useVendingMachine);},{true}] call ace_interact_menu_fnc_createAction;

        [_object, 0, ["ACE_MainActions"], _actionRefillFranta] call ace_interact_menu_fnc_addActionToObject;
        [_object, 0, ["ACE_MainActions"], _actionRefillRedGull] call ace_interact_menu_fnc_addActionToObject;
        [_object, 0, ["ACE_MainActions"], _actionRefillSpirit] call ace_interact_menu_fnc_addActionToObject;
        [_object, 0, ["ACE_MainActions"], _actionRefillWater] call ace_interact_menu_fnc_addActionToObject;
        [_object, 0, ["ACE_MainActions"], _actionBuyFranta] call ace_interact_menu_fnc_addActionToObject;
        [_object, 0, ["ACE_MainActions"], _actionBuyRedGull] call ace_interact_menu_fnc_addActionToObject;
        [_object, 0, ["ACE_MainActions"], _actionBuySpirit] call ace_interact_menu_fnc_addActionToObject;
        [_object, 0, ["ACE_MainActions"], _actionBuyWater] call ace_interact_menu_fnc_addActionToObject;
    };
    default {
        _actionRefillLolli = [QGVAR(refillLolli),"Refill lollipop","",{[_target, "immersion_pops_poppack"] call FUNC(refillVendingMachine);},{["immersion_pops_poppack"] call FUNC(canRefillVendingMachine)}] call ace_interact_menu_fnc_createAction;
        _actionBuyLolli = [QGVAR(buyLolli),format ["Buy lollipop (%1€)",1],"",{[_target, "immersion_pops_poppack"] call FUNC(useVendingMachine);},{true}] call ace_interact_menu_fnc_createAction;

        [_object, 0, ["ACE_MainActions"], _actionRefillLolli] call ace_interact_menu_fnc_addActionToObject;
        [_object, 0, ["ACE_MainActions"], _actionBuyLolli] call ace_interact_menu_fnc_addActionToObject;
    };
};

private _actionCheckAmountLeft = [QGVAR(checkAmountLeft),"Check content","",{_target call FUNC(checkAmountLeft);},{player getVariable [QGVAR(logistic), false]}] call ace_interact_menu_fnc_createAction;
[_object, 0, ["ACE_MainActions"], _actionCheckAmountLeft] call ace_interact_menu_fnc_addActionToObject;
