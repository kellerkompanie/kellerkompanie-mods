#include "script_component.hpp"

["ace_treatmentSucceded", FUNC(onMedicalTreatment)] call CBA_fnc_addEventHandler;
["ace_throwableThrown", FUNC(onThrowableThrown)] call CBA_fnc_addEventHandler;
player addEventHandler ["Fired", FUNC(onFired)];
["CAManBase", "killed", FUNC(onKilled)] call CBA_fnc_addClassEventHandler;

[QEGVAR(punch,onPunched), { GVAR(peoplePunched) = GVAR(peoplePunched) + 1; }] call CBA_fnc_addEventHandler;
[QEGVAR(punch,onCorpseHidden), { GVAR(corpsesHidden) = GVAR(corpsesHidden) + 1; }] call CBA_fnc_addEventHandler;
[QGVAR(onWindowBroken), { GVAR(windowsBroken) = GVAR(windowsBroken) + 1; }] call CBA_fnc_addEventHandler;

[QEGVAR(common,onMissionEnd), FUNC(onMissionEnd)] call CBA_fnc_addEventHandler;
