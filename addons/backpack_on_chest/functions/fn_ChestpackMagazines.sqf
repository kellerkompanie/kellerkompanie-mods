#include "script_component.hpp"

/*
 * Author: DerZade
 * Returns array with all magazines from chestpack of the given unit.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Chestpack magazines <ARRAY> [classname,ammo count, amount of mags]
 *
 * Example:
 * [player] call keko_backpack_on_chest_fnc_chestpackMagazines;
 *
 * Public: No
 */
params ["_unit"];

private _var = _unit getVariable [QGVAR(chestpack),nil];
private _mags = [];

{
     private _mag = +(_x);
     _mag pushBack ((compile format ["_x isEqualTo %1",_x]) count (_var select 3));
     _mags pushBackUnique _mag;
} forEach (_var select 3);

//return objNull
if (isNil "_var" or isNil "_mags") exitWith {[]};

//return magazines
_mags
