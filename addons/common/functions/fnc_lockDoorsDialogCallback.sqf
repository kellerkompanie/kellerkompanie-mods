#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Callback for the lock doors dialog. Checks input and locks/unlocks doors
 * accordingly. Closes dialog afterwards.
 *
 * Arguments:
 * 0: Lock state, true = lock, false = unlock <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * _lockedState call keko_common_fnc_lockDoorsDialogCallback
 *
 */

params ["_lockedState"];

disableSerialization;

private _radiusText = ctrlText ((uiNamespace getVariable QGVAR(lockdoors_dialog)) displayCtrl 1400);
//_lockedState = ctrlChecked ((uiNamespace getVariable "keko_common_lockdoors_dialog") displayCtrl 2800);

private _centerPos = profileNamespace getVariable QGVAR(lockDoors_center);
private _radius = parseNumber _radiusText;

TRACE_1("lockDoorsDialogCallback", _lockedState);
[_centerPos, _radius, _lockedState] call FUNC(lockDoors);

profileNamespace setVariable [QGVAR(lastDoorRadius), _radiusText];
profileNamespace setVariable [QGVAR(lastDoorLocked), _lockedState];

closeDialog 1;
