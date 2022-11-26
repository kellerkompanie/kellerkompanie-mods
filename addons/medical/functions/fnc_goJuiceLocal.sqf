#include "script_component.hpp"

/*
 * Author: C4ll_me_Nomad
 * Applies Go-Juice to the patient.
 *
 * Arguments:
 * 0: Patient <OBJECT>
 * Return Value:
 * None
 *
 * Example:
 * [player] call keko_medical_fnc_goJuiceLocal
 *
 * Public: No
 */

 // TODO: Handling when someone takes multiple GoJuice 

params ["_patient"];

_patient setVariable ["onGoJuice", true, false];

 // Some Magnified optics cancel this effect :/
["RadialBlur", 100, [0.1, 0.1, 0.3, 0.5], -1, _patient] spawn
{
	params ["_name", "_priority", "_effect", "_handle", "_patient"];
	while {
		_handle = ppEffectCreate [_name, _priority];
		_handle < 0
	} do {
		_priority = _priority + 1;
	};

    sleep 5; // Give it some time to kick in
	_handle ppEffectEnable true;

    while {
        _patient getVariable "onGoJuice";
    } do {
        _effect = [
            random [0.1, 0.2, 0.30],
            random [0.1, 0.2, 10],
            random [0.05, 0.3, 0.5],
            random [0.05, 0.25, 0.5]
        ];
        _handle ppEffectAdjust _effect;
	    _handle ppEffectCommit 3;
        waitUntil { ppEffectCommitted _handle };
    };
	
    _handle ppEffectEnable false;
    ppEffectDestroy _handle;
};

private _recoil = unitRecoilCoefficient _patient;
_patient setUnitRecoilCoefficient 0;

private _weaponSway = getCustomAimCoef _patient;
_patient setCustomAimCoef (_weaponSway - 3) max 0;


ace_advanced_fatigue_anReserve = ace_advanced_fatigue_anReserve + 500;


[_patient, _recoil, _weaponSway] spawn {
    params ["_patient", "_recoil", "_weaponSway"];
    sleep 2400;

    // Set Recoil back to old values
    _patient setUnitRecoilCoefficient _recoil;
    _patient setCustomAimCoef _weaponSway;

    // Cancel tunnel Vision effect
    [_patient, "KEKO_GoJuice"] call keko_medical_fnc_addAddiction;
}

