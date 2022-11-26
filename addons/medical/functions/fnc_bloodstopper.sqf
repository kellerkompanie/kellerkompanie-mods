#include "script_component.hpp"

/*
 * Author: C4ll_me_Nomad
 * Applies a bloodstopper to the patient.
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 * 2: Body Part (not used) <STRING>
 * 3: Treatment (not used) <STRING>
 * 4: Item User (not used) <OBJECT>
 * 5: Used Item (not used) <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, player] call keko_medical_fnc_bloodstopper
 *
 * Public: No
 */
 
params ["_medic", "_patient"];

hint format ["bloodStopper for %1", _patient];

["keko_medical_fnc_bloodstopperLocal", [_patient], _patient] call CBA_fnc_targetEvent;
//[QGVAR(bloodstopperLocal), [_patient], _patient] call CBA_fnc_targetEvent;