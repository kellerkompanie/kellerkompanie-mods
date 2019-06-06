#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Unlocks the backpack of the unit if it exsists and is locked.
 *
 * Arguments:
 * 0: The unit with the backpack <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _unit call keko_backpack_fnc_checkUnlockBP
 *
 */

params ["_unit"];

if ((_unit getVariable [QGVAR(backpackIsLocked),false]) && {isNull (unitBackpack _unit)} ) then {

    _unit setVariable [QGVAR(backpackIsLocked), false, true];

    if !(isNil "ace_common_fnc_displayTextStructured") then {
        [{[localize LSTRING(messageLockRemoved)] call ace_common_fnc_displayTextStructured;}, []] call CBA_fnc_execNextFrame;
    } else {
        hint localize LSTRING(messageLockRemoved);
    };
};
