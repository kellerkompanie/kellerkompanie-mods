#include "script_component.hpp"

/*
 * Author: C4ll_me_Nomad
 * Applies Contrafinil to the patient.
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 *
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call keko_medical_fnc_contrafinil
 *
 * Public: No
 */
 
params ["_medic", "_patient"];

hint "contrafinil!!!!";

["keko_medical_fnc_contrafinilLocal", [_patient], _patient] call CBA_fnc_targetEvent;
//[QGVAR(bloodstopperLocal), [_patient], _patient] call CBA_fnc_targetEvent;
