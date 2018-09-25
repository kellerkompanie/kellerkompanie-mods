#include "script_component.hpp"

params ["_logic"];

if !(local _logic) exitWith{};

profileNamespace setVariable [QGVAR(destObject), _logic];

createDialog QGVAR(destinationDialog);
