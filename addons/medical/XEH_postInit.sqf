#include "script_component.hpp"

/*
Based on ADV-aceRefill by Belbo - modified by Schwaggot
*/

if !(hasInterface) exitWith {};

["loadout", { params ["_unit", "_loadout"]; [_unit,3, QGVAR(manualKit)] call FUNC(refill) }] call CBA_fnc_addPlayerEventHandler;

private _manualKitAction = [QGVAR(MKaction), localize "STR_KEKO_REFILL_OPEN", "\z\ace\addons\medical\UI\icons\medical_cross.paa",{

    [player, 2, QGVAR(manualKit)] call FUNC(refill);

},{ (_player getVariable ["ACE_medical_medicClass", 0] > 0) && ( ({_x == QGVAR(manualKit)} count items _player) > 0 ) }] call ace_interact_menu_fnc_createAction;

private _FAKAction = [QGVAR(FAKaction), localize "STR_KEKO_REFILL_OPEN_FAK", "\z\ace\addons\medical\UI\icons\medical_cross.paa",{

    [player, 1, QGVAR(FAK)] call FUNC(refill);

},{ ({_x == QGVAR(FAK)} count items _player) > 0 }] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "ACE_Equipment"], _manualKitAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "ACE_Equipment"], _FAKAction] call ace_interact_menu_fnc_addActionToObject;
