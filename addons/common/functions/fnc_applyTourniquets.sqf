#include "script_component.hpp"

params ["_unit"];

private _openWounds = _unit getVariable ["ace_medical_openWounds", []];

private _leftArmWounds = 0;
private _leftLegWounds = 0;
private _rightArmWounds = 0;
private _rightLegWounds = 0;

{
	_x params ["", "", "_bodyPart", "_numOpenWounds", "_bloodLoss"];

	if(_bloodLoss > 0) then {
		switch (_bodyPart) do {
			// Head
			case 0: {

			};

			// Body
			case 1: {

			};

			// Left Arm
			case 2: {
				_leftArmWounds = _leftArmWounds + _numOpenWounds;
			};

			// Right Arm
			case 3: {
				_rightArmWounds = _rightArmWounds + _numOpenWounds;
			};

			// Left Leg
			case 4: {
				_leftLegWounds = _leftLegWounds + _numOpenWounds;
			};

			// Right Leg
			case 5: {
				_rightLegWounds = _rightLegWounds + _numOpenWounds;
			};
		};
	};
} forEach _openWounds;

if(_leftArmWounds > 0) then {
	INFO("applying tourniquet to left arm");
	[_unit, "", "hand_l"] remoteExec ["ace_medical_fnc_treatmentTourniquetLocal", _unit];
};
if(_rightArmWounds > 0) then {
	INFO("applying tourniquet to right arm");
	[_unit, "", "hand_r"] remoteExec ["ace_medical_fnc_treatmentTourniquetLocal", _unit];
};
if(_leftLegWounds > 0) then {
	INFO("applying tourniquet to left leg");
	[_unit, "", "leg_l"] remoteExec ["ace_medical_fnc_treatmentTourniquetLocal", _unit];
};
if(_rightLegWounds > 0) then {
	INFO("applying tourniquet to right leg");
	[_unit, "", "leg_r"] remoteExec ["ace_medical_fnc_treatmentTourniquetLocal", _unit];
};
