#include "script_component.hpp"

/*
 * Author: DerZade
 * Removes item from unit's chestpack.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Item/magazine/weapon classname <STRING>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [player,"FirstAidKit"] call keko_backpack_on_chest_fnc_removeItemFromChestpack;
 *
 * Public: No
 */
params ["_unit", "_item"];

//exit if there is no such item in chestpack
if ([_unit] call FUNC(chestpackItems) find _item isEqualTo -1) exitWith {};

private _var = _unit getVariable [QGVAR(chestpack), nil];

if (isClass (configFile >> "CfgMagazines" >> _item)) then {
     (_var select 3) deleteAt ([(_var select 3), _item] call BIS_fnc_findInPairs);
} else {
     (_var select 2) deleteAt ((_var select 2) find _item);
};

_unit setVariable [QGVAR(chestpack), _var, true];
