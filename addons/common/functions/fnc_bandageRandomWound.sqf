#include "script_component.hpp"

params ["_unit"];

private _openWounds = _unit getVariable ["ace_medical_openWounds", []];

// get all bleeding body parts
private _woundedBodyParts = [];
{
	_x params ["", "", "_bodyPart", "", "_bloodLoss"];

	if(_bloodLoss > 0) then {
		switch (_bodyPart) do {
			// Head
			case 0: {
				_woundedBodyParts pushBackUnique "head";
			};

			// Body
			case 1: {
				_woundedBodyParts pushBackUnique "body";
			};

			// Left Arm
			case 2: {
				_woundedBodyParts pushBackUnique "hand_l";
			};

			// Right Arm
			case 3: {
				_woundedBodyParts pushBackUnique "hand_r";
			};

			// Left Leg
			case 4: {
				_woundedBodyParts pushBackUnique "leg_l";
			};

			// Right Leg
			case 5: {
				_woundedBodyParts pushBackUnique "leg_r";
			};
		};
	};
} forEach _openWounds;

INFO_1("_woundedBodyParts %1",_woundedBodyParts);

// preferablly bandage head and torso wounds first
private _woundBandaged = false;
if("head" in _woundedBodyParts) then {
	INFO("bandaging head wound");
	[_unit, _unit, "head", "Bandage"] call ace_medical_fnc_treatmentAdvanced_bandage;
	_woundBandaged = true;
} else {
	if("body" in _woundedBodyParts) then {
		INFO("bandaging torso wound");
		[_unit, _unit, "body", "Bandage"] call ace_medical_fnc_treatmentAdvanced_bandage;
		_woundBandaged = true;
	};
};

// if no head or torso wound was closed, chose at random
if(!_woundBandaged) then {
	private _selection = selectRandom _woundedBodyParts;
	INFO_1("bandaging %1 wound",_selection);
	[_unit, _unit, _selection, "Bandage"] call ace_medical_fnc_treatmentAdvanced_bandage;
};
