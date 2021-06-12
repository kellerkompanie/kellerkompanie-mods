#include "script_component.hpp"

params ["_unit", "_state", "_reason"];

if (_reason != "SetSurrendered" || !_state) exitWith {};

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

// make unit throw away its weapon visibly
private _weapon = currentWeapon _unit;
[_unit, _weapon] remoteExec ["removeWeapon", _unit];
private _weaponHolder = "WeaponHolderSimulated" createVehicle [0,0,0];
_weaponHolder addWeaponCargoGlobal [_weapon, 1];
_weaponHolder setPos (_unit modelToWorld [0,.2,1.2]);
_weaponHolder disableCollisionWith _unit;
private _dir = random(360);
private _speed = 1.5;
_weaponHolder setVelocity [_speed * sin(_dir), _speed * cos(_dir), 4];

// execute the custom code provided for onSurrender inside the 3den module
private _group = group _unit;
private _onSurrenderCodeString = _group getVariable [QGVAR(onSurrenderCode), ""];

if !(count _onSurrenderCodeString == 0) then {
    call compile _onSurrenderCodeString;
};
