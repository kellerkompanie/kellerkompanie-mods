#include "script_component.hpp"

params ["_unit", "_state", "_reason"];

if (_reason != "SetSurrendered" || !_state) exitWith {};

//(format ["%1 onSurrender", _unit]) remoteExec ["systemChat", [0, -2] select isDedicated];

[
    _unit,                                            // Object the action is attached to
    "Interrogate",                                        // Title of the action
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",    // Idle icon shown on screen
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",    // Progress icon shown on screen
    "_this distance _target < 2", // Condition for the action to be shown
    "_caller distance _target < 2", // Condition for the action to progress
    {},                                                    // Code executed when action starts
    {},                                                    // Code executed on every progress tick
    { [QGVAR(interrogated), _this] remoteExec ["CBA_fnc_localEvent", 0]; },  // Code executed on completion
    {},                                                    // Code executed on interrupted
    [],                                                    // Arguments passed to the scripts as _this select 3
    10,                                                    // Action duration [s]
    0,                                                    // Priority
    true,                                                // Remove on completion
    false                                                // Show in unconscious state
] remoteExec ["BIS_fnc_holdActionAdd", [0, -2] select isDedicated];

private _group = group _unit;
private _onSurrenderCodeString = _group getVariable [QGVAR(onSurrenderCode), ""];

if (count _onSurrenderCodeString == 0) exitWith {};

call compile _onSurrenderCodeString;
