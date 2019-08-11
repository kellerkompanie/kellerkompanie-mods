#include "script_component.hpp"

productVersion params ["", "", "", "", "", "", "", "_architecture"];

if (_architecture != "x64") then {
    private _msg = "[WICHTIG] Du benutzt 32bit ArmA 3, bitte überprüfe das!";

    systemChat _msg;
    hint _msg;
    diag_log _msg;

    (format ["[WARNUNG] %1 benutzt 32bit ArmA 3!", profileName]) remoteExecCall ["systemChat"];
};
