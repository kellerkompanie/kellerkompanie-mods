#include "script_component.hpp"

params ["_unit"];

if (_unit == ACE_player) then {
    GVAR(fragsOut) = GVAR(fragsOut) + 1;
};
