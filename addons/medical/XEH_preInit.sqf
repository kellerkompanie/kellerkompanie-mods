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
            [[_unit], allUnits] call ace_spectator_fnc_updateUnits;
            [[2], [0,1]] call ace_spectator_fnc_updateCameraModes;

            [[-2,-1], [0,1,2,3,4,5,6,7]] call ace_spectator_fnc_updateVisionModes;
            [2, _unit, -2] call ace_spectator_fnc_setCameraAttributes;
            [true, true, false] call ace_spectator_fnc_setSpectator;
        }
        else
        {
            [false, false, false] call ace_spectator_fnc_setSpectator;
        };
    };

    // spectate entire team
    if (GVAR(unconsciousMode) == 2) then
    {
        if (_unconscious) then
        {
            [[_unit], []] call ace_spectator_fnc_updateUnits;
            [[side _unit], _unit call BIS_fnc_enemySides] call ace_spectator_fnc_updateSides;
            [[1,2], [0]] call ace_spectator_fnc_updateCameraModes;

            [[-2,-1], [0,1,2,3,4,5,6,7]] call ace_spectator_fnc_updateVisionModes;
            [2, _unit, -2] call ace_spectator_fnc_setCameraAttributes;
            [true, true, false] call ace_spectator_fnc_setSpectator;
        }
        else
        {
            [false, false, false] call ace_spectator_fnc_setSpectator;
        };
    };
}] call CBA_fnc_addEventHandler;

["unit", {
    params ["_new"];

    if (GVAR(unconsciousMode) in [1, 2] && !(_new getVariable ["ACE_isUnconscious", false])) then
    {
        [false, false, false] call ace_spectator_fnc_setSpectator;
    };
}] call CBA_fnc_addPlayerEventHandler;

ADDON = true;