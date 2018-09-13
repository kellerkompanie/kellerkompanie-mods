#include "script_component.hpp"

params ["_funcName"];

if !(_funcName isEqualType "") exitWith
{
    diag_log ["STUI Error: Only function names are to be passed into STUI_Canvas_Add. Bad Value:", _funcName];
    false;
};

if (isNil _funcName) exitWith
{
    diag_log ["STUI Error: Undefined function name given to STUI_Canvas_Add", _funcName];
    false;
};

if !((missionNamespace getVariable [_funcName, ""]) isEqualType {}) exitWith
{
    diag_log ["STUI Error: Only function names are to be passed into STUI_Canvas_Add. Bad Value:", _funcName];
    false;
};

// Check if already registered this name

if (_funcName in STUI_Canvas_Funcs) exitWith {true};
STUI_Canvas_Funcs pushBack(_funcName);
true;
