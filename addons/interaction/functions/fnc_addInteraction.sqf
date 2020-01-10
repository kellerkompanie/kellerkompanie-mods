#include "script_component.hpp"

params ["_object", "_type", "_action", "_actionDuration", "_removeAction", "_removeObject", "_codeOnInteraction", "_condition"];

private _textures = [
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdaction_connect_ca.paa",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdaction_forcerespawn_ca.paa",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdaction_hack_ca.paa",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdaction_loaddevice_ca.paa",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdaction_passleadership_ca.paa",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdaction_requestleadership_ca.paa",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdaction_revive_ca.paa",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdaction_revivemedic_ca.paa",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdaction_search_ca.paa",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdaction_secure_ca.paa",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdaction_takeoff1_ca.paa",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdaction_takeoff2_ca.paa",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdaction_thumbsdown_ca.paa",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdaction_thumbsup_ca.paa",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdaction_unbind_ca.paa",
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdaction_unloaddevice_ca.paa"
];
private _typeTexture = _textures select _type;

[
    // Object the action is attached to
    _object,

     // Title of the action
    _action,

    // Idle icon shown on screen
    _typeTexture,

     // Progress icon shown on screen
    _typeTexture,

    // Condition for the action to be shown
    format ["_this distance _target < 2 && (%1)", _condition],

    // Condition for the action to progress
    nil,

    // Code executed when action starts
    {},

    // Code executed on every progress tick
    {
        private _progressTick = _this select 4;
        if (_progressTick % 2 == 0) exitwith {};
        playsound3d [((getarray (configfile >> "CfgSounds" >> "Orange_Action_Wheel" >> "sound")) param [0,""]) + ".wss", player, false, getposasl player, 1, 0.9 + 0.2 * _progressTick / 24];
    },

    // Code executed on completion
    {
        params ["_object", "", "_actionId", "_arguments"];
        _arguments params ["_removeObject", "_removeAction", "_codeOnInteraction"];

        if (count _codeOnInteraction > 0) then {
            [_object, _codeOnInteraction] spawn {
                params ["", "_codeOnInteraction"];
                call compile _codeOnInteraction;
            };
        };

        if (_removeObject) then {deleteVehicle _object};
        if (_removeAction) then {[ _object, _actionId ] remoteExec ["BIS_fnc_holdActionRemove", [0, -2] select isDedicated];};
    },

    // Code executed on interrupted
    {},

    // Arguments passed to the scripts
    [_removeObject, _removeAction, _codeOnInteraction],

    // Action duration
    _actionDuration,

    // Priority
    nil,

    // Remove on completion
    _removeAction
] remoteExec ["BIS_fnc_holdActionAdd", [0, -2] select isDedicated, true];
