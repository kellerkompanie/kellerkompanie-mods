#include "script_component.hpp"

params ["_unit", "_weapon"];

if (_unit != ACE_player) exitWith {};

if (_weapon == "Throw") then {
    GVAR(fragsOut) = GVAR(fragsOut) + 1;
};

if (_weapon isEqualTo primaryWeapon _unit) then {
    GVAR(shotsFired) = GVAR(shotsFired) + 1;
};
