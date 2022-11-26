#include "script_component.hpp"

/*
 * Author: C4ll_me_Nomad
 * Applies a bloodstopper to the patient.
 *
 * Arguments:
 * 0: _patient <OBJECT>
 * 1: _substance <classname as String>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "KEKO_GoJuice"] call keko_medical_fnc_addAddiction
 *
 * Public: No
 */
 
params ["_patient", "_substance"];

// TODO: shaking hands, random hints, text in medic menu, voices

hint "addicted!!";