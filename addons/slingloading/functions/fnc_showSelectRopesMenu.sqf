#include "script_component.hpp"

params ["_title", "_functionName","_ropesIndexAndLabelArray",["_ropesLabel","Ropes"]];

GVAR(ShowSelectRopesMenuArray) = [[_title,false]];
{
    GVAR(ShowSelectRopesMenuArray) pushBack [ (_x select 1) + " " + _ropesLabel, [0], "", -5, [["expression", "["+(str (_x select 0))+"] call " + _functionName]], "1", "1"];
} forEach _ropesIndexAndLabelArray;

GVAR(ShowSelectRopesMenuArray) pushBack ["All " + _ropesLabel, [0], "", -5, [["expression", "{ [_x] call " + _functionName + " } forEach [0,1,2];"]], "1", "1"];

showCommandingMenu "";
showCommandingMenu ("#USER:" + GVAR(ShowSelectRopesMenuArray));
