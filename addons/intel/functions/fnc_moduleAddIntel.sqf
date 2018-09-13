#include "script_component.hpp"

params ["_logic"];

if !(local _logic) exitWith{};

profileNamespace setVariable [QGVAR(logic), _logic];

createDialog QGVAR(mainDialog);
