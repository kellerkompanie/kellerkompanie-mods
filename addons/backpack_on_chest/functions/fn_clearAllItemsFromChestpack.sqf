#include "script_component.hpp"

/*
 * Author: DerZade
 * Removes all items (includes weapons and magazines) from a unit's chestpack.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [player] call keko_backpack_on_chest_fnc_clearAllItemsFromChestpack;
 *
 * Public: No
 */
params ["_unit"];

private _var = _unit getVariable [QGVAR(chestpack), nil];
_var set [2,[]];
_var set [3,[]];

_unit setVariable [QGVAR(chestpack), _var, true];
