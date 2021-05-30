#include "script_component.hpp"

[QGVAR(kill), {
    params ["_name", "_killInfo"];

    // Increment kill counter
    GVAR(killCount) = GVAR(killCount) + 1;
    GVAR(eventsArray) pushBack format ["Kill: %1 %2", _name, _killInfo];
    GVAR(outputText) = (format ["%1 %2<br/>", "Total Kills:", GVAR(killCount)]) + (GVAR(eventsArray) joinString "<br/>");
}] call CBA_fnc_addEventHandler;

[QGVAR(death), {
    params ["_name", "_killInfo"];

    GVAR(eventsArray) pushBack format ["Killer: %1 %2", _name, _killInfo];
    GVAR(outputText) = (format ["%1 %2<br/>", "Total Kills:", GVAR(killCount)]) + (GVAR(eventsArray) joinString "<br/>");
}] call CBA_fnc_addEventHandler;

["ace_killed", FUNC(onAceKilled)] call CBA_fnc_addEventHandler;