#include "script_component.hpp"

if (isNil QGVAR(heliEntryPoint)) then {
    GVAR(heliEntryPoint) = [0, 0, 100];
    publicVariable QGVAR(heliEntryPoint);
};
if (isNil QGVAR(heliExitPoint)) then {
    GVAR(heliExitPoint) = [0, 0, 100];
    publicVariable QGVAR(heliExitPoint);
};
