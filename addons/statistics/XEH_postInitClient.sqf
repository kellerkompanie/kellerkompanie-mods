#include "script_component.hpp"

["ace_treatmentSucceded", FUNC(onMedicalTreatment)] call CBA_fnc_addEventHandler;
["ace_throwableThrown", FUNC(onThrowableThrown)] call CBA_fnc_addEventHandler;
player addEventHandler ["Fired", FUNC(onFired)];

[QEGVAR(punch,onPunched), { GVAR(peoplePunched) = GVAR(peoplePunched) + 1; }] call CBA_fnc_addEventHandler;
[QEGVAR(punch,onCorpseHidden), { GVAR(corpsesHidden) = GVAR(corpsesHidden) + 1; }] call CBA_fnc_addEventHandler;
[QGVAR(onWindowBroken), { GVAR(windowsBroken) = GVAR(windowsBroken) + 1; }] call CBA_fnc_addEventHandler;

[QEGVAR(common,onMissionEnd), FUNC(onMissionEnd)] call CBA_fnc_addEventHandler;


["acex_killtracker_kill", {
    params ["_name", "_killInfo"];

    // Increment kill counter
    GVAR(killCount) = GVAR(killCount) + 1;
    GVAR(eventsArray) pushBack format ["Kill: %1 %2", _name, _killInfo];
    GVAR(outputText) = (format ["%1 %2<br/>", "Total Kills:", GVAR(killCount)]) + (GVAR(eventsArray) joinString "<br/>");
}] call CBA_fnc_addEventHandler;

["acex_killtracker_death", {
    params ["_name", "_killInfo"];

    GVAR(eventsArray) pushBack format ["Killer: %1 %2", _name, _killInfo];
    GVAR(outputText) = (format ["%1 %2<br/>", "Total Kills:", GVAR(killCount)]) + (GVAR(eventsArray) joinString "<br/>");
}] call CBA_fnc_addEventHandler;

["ace_killed", FUNC(onAceKilled)] call CBA_fnc_addEventHandler;
