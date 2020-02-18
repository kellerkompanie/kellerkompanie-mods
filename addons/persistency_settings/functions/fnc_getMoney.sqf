#include "script_component.hpp"
/*
    Description:
     VASS wants to know how much money the unit has
    Parameter(s):
     0: OBJECT - Unit whose money is requested
    Has to return:
     NUMBER - Unit's money
*/
params ["_unit"];

parseNumber (_unit getVariable [QEGVAR(persistency,cash), EGVAR(persistency,defaultMoney)])
