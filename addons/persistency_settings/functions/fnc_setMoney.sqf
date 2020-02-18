#include "script_component.hpp"
/*
    Description:
     VASS changes the amount of money the player has
    Parameter(s):
     1: OBJECT - Unit whose money will be changed
     0: NUMBER - Amount of money changed (can be positive or negative)
    Has to return:
     Nothing
*/
params ["_unit", "_change"];

if ((typeName _change) == "STRING") then {
    _change = parseNumber _change;
};

private _currentAmount = (_unit call FUNC(getMoney)) + _change;
_unit setVariable [QEGVAR(persistency,cash), _currentAmount, true];
_unit remoteExec [QEFUNC(persistency,manualSave), 2];
