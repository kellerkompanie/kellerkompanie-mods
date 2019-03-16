#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Removes the AI NVG from the unit.
 *
 * Arguments:
 * 0: The unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _unit call keko_ai_nvgs_fnc_nvgRemove
 *
 */

params ["_unit"];

private _hmd = hmd _unit;
if (_hmd == QGVAR(NVGoggles_AI)) then {
    _unit unlinkItem _hmd;
};
