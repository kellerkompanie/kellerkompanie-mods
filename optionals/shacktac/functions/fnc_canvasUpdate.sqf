#include "script_component.hpp"

{
    private "_start";
    private _funcName = _x;
    if (STUI_Canvas_Profile) then
    {
        _start = diag_tickTime;
    };

    _this call (missionNamespace getVariable _funcName);

    if (STUI_Canvas_Profile) then
    {
        STUI_Canvas_ProfileData pushBack [_funcName, diag_tickTime - _start];
        if ((diag_frameno % 10) isEqualTo 0) then
        {
            diag_log STUI_Canvas_ProfileData;
            STUI_Canvas_ProfileData = [];
        };
    };
} forEach STUI_Canvas_Funcs;
