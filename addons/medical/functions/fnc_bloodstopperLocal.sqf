#include "script_component.hpp"

/*
 * Author: C4ll_me_Nomad
 * Local callback for applying a bloodstopper
 *
 * Arguments:
 * 0: Patient <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call keko_medical_fnc_bloodstopperLocal
 *
 * Public: No
 */

params ["_patient"];

private _fatigueFactor = 50;

ace_advanced_fatigue_anReserve = (ace_advanced_fatigue_anReserve - (_fatigueFactor * 20)) max 0;
ace_advanced_fatigue_anFatigue = (ace_advanced_fatigue_anFatigue + (_fatigueFactor / 100)) min 1.0;


hint format ["(Local) Reserve: %1 \n Fatigue: %2", (ace_advanced_fatigue_anReserve - _fatigueFactor * 20) max 0, (ace_advanced_fatigue_anFatigue + _fatigueFactor / 100) min 0.8];
