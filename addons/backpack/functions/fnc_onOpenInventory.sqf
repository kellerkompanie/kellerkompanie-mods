#include "script_component.hpp"
/*
 * Original Author: diwako https://github.com/diwako/lockBackpack
 * Author: Schwaggot
 * Check if unit can have backpack locked status after inventory change.
 *
 * Arguments:
 * 0: The unit with the backpack <OBJECT>
 * 1: Backpack <OBJECT>
 *
 * Return Value:
 * True if inventory should be closed, false otherwise
 *
 * Example:
 * [bob, unitBackpack bob] call keko_backpack_fnc_onOpenInventory
 *
 */

params ["", "_backpack"];

private _target = objectParent _backpack;

if (isNull _target) exitWith {false};

if (alive _target && {!(_target getVariable ["ACE_isUnconscious",false]) && {_target getVariable [QGVAR(backpackIsLocked),false]}}) exitWith {
    [
        {
            !isNull (findDisplay 602)
        },
        {
            (findDisplay 602) closeDisplay 0;
            if !(isNil "ace_common_fnc_displayTextStructured") then {
                [localize LSTRING(messageLocked)] call ace_common_fnc_displayTextStructured;
            } else {
                hint localize LSTRING(messageLocked);
            };
        },
        []
    ] call CBA_fnc_waitUntilAndExecute;
};

// return false to open inventory as usual
false
