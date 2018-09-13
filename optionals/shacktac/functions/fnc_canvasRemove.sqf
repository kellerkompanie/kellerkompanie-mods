#include "script_component.hpp"

params ["_funcName"];
GVAR(Canvas_Funcs) = GVAR(Canvas_Funcs) - [_funcName];
