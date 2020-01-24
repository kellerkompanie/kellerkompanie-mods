#include "script_component.hpp"

if !(isServer) exitWith {false};

params ["_crate", ["_force", false]];

// delay until next frame so that GVAR(crates) is initialized in XEH_postInit
[
    {
        params ["_crate", "_force"];

        if (!_force && (!(_crate isKindOf "ReammoBox_F") || !(_crate getVariable [QGVAR(isCustomCrate), false]))) exitWith {
            false
        };

        private _classname = typeOf _crate;
        private _name = _crate getVariable [QGVAR(customCrateName), getText (configFile >> "cfgVehicles" >> _classname >> "displayName")];
        private _content = _crate call FUNC(getCrateInventory);

        [_name, _classname, _content] remoteExec [QFUNC(addCrate), [0, -2] select isDedicated, true];

        deleteVehicle _crate;
    },
    [_crate, _force]
] call CBA_fnc_execNextFrame;

true
