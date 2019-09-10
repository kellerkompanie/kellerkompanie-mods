#include "script_component.hpp"

private _action = [
    GVAR(transferAction), "Transfer Loot to Vehicle", "a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa",
    {
        params ["_target", "_player"];

        (nearestObjects [_player, ace_cargo_cargoHolderTypes, 10]) select {
            (_x != _target) && {([_target, _x] call ace_interaction_fnc_getInteractionDistance) < 10}
        } params [["_nearestVehicle", objNull]];

        if !(isNull _nearestVehicle) then {
            [_target, _nearestVehicle] call FUNC(transferToVehicle);
        };
    },
    {
        (_target isKindOf "WeaponHolderSimulated" || _target isKindOf "WeaponHolder" || _target isKindOf "GroundWeaponHolder" || !alive _target || _target isKindOf "ReammoBox_F") &&
        {!(_target getVariable [QGVAR(looter), false])} &&
        {[_player, _target] call ace_common_fnc_canInteractWith} &&
        {
            0 < {
                (_x != _target) && {([_target, _x] call ace_interaction_fnc_getInteractionDistance) < 10}
            } count (nearestObjects [_player, ace_cargo_cargoHolderTypes, 10])
        }
    },
    {
        private _statement = {
            params ["_target", "_player", "_vehicle"];
            [_target, _vehicle] call FUNC(transferToVehicle);
        };

        private _vehicles = (nearestObjects [_target, ace_cargo_cargoHolderTypes, 15]) select {
            (_x != _target) && {([_target, _x] call ace_interaction_fnc_getInteractionDistance) < 10}
        };

        [_vehicles, _statement, _target] call ace_interact_menu_fnc_createVehiclesActions;
    }
] call ace_interact_menu_fnc_createAction;

["CAManBase", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["GroundWeaponHolder", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["WeaponHolder", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["WeaponHolderSimulated", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["ReammoBox_F", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

player addEventHandler [ "Put", {
    params[ "_unit", "_container" ];

    if( typeOf _container isEqualTo "GroundWeaponHolder" || typeOf _container isEqualTo "WeaponHolderSimulated" ) then {
        _container call FUNC(initObject);
    };
}];
