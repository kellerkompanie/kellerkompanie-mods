#include "script_component.hpp"

ADDON = false;

// unconscious spectator mode donated by shukari/TacticalBacon, see https://github.com/TacticalBaconDevs/TBMod/blob/master/addons/medical/XEH_preInit.sqf#L161-L220
[
    QGVAR(unconsciousMode),
    "LIST",
    [localize LSTRING(unconsciousMode), localize LSTRING(unconsciousMode)],
    localize LSTRING(cbaSettingsCategory),
    [[0, 1, 2], ["Vanilla", "SpectatorSelf", "SpectatorTeam"], 1],
    1
] call CBA_fnc_addSetting;

["ace_unconscious", {
    params ["_unit", "_unconscious"];

    if (GVAR(unconsciousMode) == 0 || {_unit != ACE_player}) exitWith {};

    // spectate only self
    if (GVAR(unconsciousMode) == 1) then
    {
        if (_unconscious) then
        {
            ace_spectator_unitWhitelist = [_unit];
            ace_spectator_unitBlacklist = [];

            [[2], [0,1]] call ace_spectator_fnc_updateCameraModes;
            [[-2,-1], [0,1,2,3,4,5,6,7]] call ace_spectator_fnc_updateVisionModes;
            [2, _unit, -2] call ace_spectator_fnc_setCameraAttributes;

            // enable spectator on current ACE_player, force interface, but do not hide the player
            [true, true, false] call ace_spectator_fnc_setSpectator;
        }
        else
        {
            // disable spectator, hide interface, do not hide the player
            [false, false, false] call ace_spectator_fnc_setSpectator;
        };
    };

    // spectate entire team
    if (GVAR(unconsciousMode) == 2) then
    {
        if (_unconscious) then
        {
            ace_spectator_unitWhitelist = [];
            ace_spectator_unitBlacklist = [];

            // since ACE moves a player to civilian side when unconscious we need to determine the original side first
            private _unitType = typeOf _unit;
            private _unitSideNum = getNumber (configFile >> "CfgVehicles" >> _unitType >> "side");
            private _unitSide = switch (_unitSideNum) do {
                case 0: { east };
                case 1: { west };
                case 2: { resistance };
                case 3: { civilian };
                default { sideUnknown };
            };

            // add side of unit and remove all enemy sides from spectator
            [[_unitSide], _unit call BIS_fnc_enemySides] call ace_spectator_fnc_updateSides;
            [[1,2], [0]] call ace_spectator_fnc_updateCameraModes;
            [[-2,-1], [0,1,2,3,4,5,6,7]] call ace_spectator_fnc_updateVisionModes;
            [2, _unit, -2] call ace_spectator_fnc_setCameraAttributes;

            // enable spectator on current ACE_player, force interface, but do not hide the player
            [true, true, false] call ace_spectator_fnc_setSpectator;
        }
        else
        {
            // disable spectator, hide interface, do not hide the player
            [false, false, false] call ace_spectator_fnc_setSpectator;
        };
    };
}] call CBA_fnc_addEventHandler;

["unit", {
    params ["_new"];

    if (GVAR(unconsciousMode) in [1, 2] && !(_new getVariable ["ACE_isUnconscious", false])) then
    {
        // disable spectator, hide interface, do not hide the player
        [false, false, false] call ace_spectator_fnc_setSpectator;
    };
}] call CBA_fnc_addPlayerEventHandler;

ADDON = true;