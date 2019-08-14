#include "script_component.hpp"

params ["_unit"];

([_unit, QGVAR(canteen)] call ace_common_fnc_hasMagazine) || QGVAR(canteenEmpty) in ([_unit] call ace_common_fnc_uniqueItems)
