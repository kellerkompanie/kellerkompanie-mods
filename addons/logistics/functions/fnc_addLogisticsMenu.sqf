#include "script_component.hpp"

params ["_object"];

[_object, [("<t color='#42DCF4' size='2' align='center'>" + ("Logistik") + "</t>"), {createDialog QGVAR(menuDialog);}, _object]] remoteExec ["addAction", 0, true];
