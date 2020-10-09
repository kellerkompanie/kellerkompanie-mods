#include "script_component.hpp"

params ["_player"];

private _action = [QGVAR(supplyDropUAV), "Call UAV Supply", QPATHTOF(ui\icon_uav), {}, {true}] call ace_interact_menu_fnc_createAction;
[_player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

{
    _x params ["_crateName", "_crateClass", "_crateInventory"];

    private _actionName = format ["keko_logistics_supplyDropUAV_%1", _forEachIndex];
    private _actionTitle = _crateName;
    private _actionStatement = {
        params ["_target", "_player", "_params"];
        [GVAR(uavSupplyBase), getPos _player, _params] call keko_logistics_fnc_supplyDrone;
    };
    private _action = [_actionName, _actionTitle, QPATHTOF(ui\icon_uav), _actionStatement, {true}, {}, _crateInventory] call ace_interact_menu_fnc_createAction;

    [_player, 1, ["ACE_SelfActions", QGVAR(supplyDropUAV)], _action] call ace_interact_menu_fnc_addActionToObject;
} forEach GVAR(crates);
