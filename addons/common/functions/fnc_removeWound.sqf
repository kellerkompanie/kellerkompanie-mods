#include "script_component.hpp"
/*
 * Author: Schwaggot
 * Removes one wound on the given body part.
 * Parts of code from https://github.com/acemod/ACE3/blob/master/addons/medical_treatment/functions/fnc_bandageLocal.sqf
 *
 * Arguments:
 * 0: The bleeding unit <OBJECT>
 * 1: The body part <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_unit, "head"] call keko_common_fnc_removeWound
 *
 */
params ["_patient", "_bodyPart"];

[_patient, _bodyPart, "ElasticBandage"] remoteExec ["ace_medical_treatment_fnc_bandageLocal", _patient];
