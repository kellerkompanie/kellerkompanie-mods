#include "script_component.hpp"

if !(isServer) exitWith {};

params ["_object","_type","_load"];

if (count _load == 0) then {
    switch (_type) do {
        case "cigs": {
            _load = [["murshun_cigs_cigpack",0],["murshun_cigs_matches",0]];
        };
        case "soda": {
            _load = [["ACE_Can_Franta",0],["ACE_Can_RedGull",0],["ACE_Can_Spirit",0],["ACE_WaterBottle",0]];
        };
        default {
            _load = [["immersion_pops_poppack",0]];
        };
    };
};

_object setVariable [QGVAR(type), _type, true];
_object setVariable [QGVAR(load), _load, true];

[_object] remoteExec [QFUNC(addVendingActions), [0, -2] select isDedicated, true];
