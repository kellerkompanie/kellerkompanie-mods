#include "script_component.hpp"

/*
 * Author: C4ll_me_Nomad
 * Applies Contrafinil to the patient.
 *
 * Arguments:
 * 0: Patient <OBJECT>
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
 
params ["_patient"];

[_patient] spawn {
	params ["_patient"];
	while {[_patient] call ace_medical_blood_fnc_isBleeding} do {

		[_patient] remoteExec  ["keko_common_fnc_bandageRandomWound", _patient, _patient];

		if (random 1 < 0.5) then {
			private _bodyPart = selectRandom [ "LeftArm", "RightArm", "LeftLeg", "RightLeg", "Head", "Body" ];
 	   		[_patient, 0.01, _bodyPart, "punch"] remoteExec  ["ace_medical_fnc_addDamageToUnit", _patient, _patient];
			sleep 0.5;
		};
	};
}
