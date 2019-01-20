class ACE_Medical_Actions {
    class Advanced {
        class FieldDressing {
            treatmentTime = 3; // 8
        };
        class Tourniquet: fieldDressing {
            treatmentTime = 2; // 4
        };
		class RemoveTourniquet: Tourniquet {
			treatmentTime = 2; // 2.5
		};
        class Morphine: fieldDressing {
            treatmentTime = 2; // 3
        };
		class Painkillers: Morphine {
            displayName = CSTRING(Take_Painkillers);
			displayNameProgress = CSTRING(Taking_Painkillers);
            allowedSelections[] = {"head"};
            items[] = {};
			condition = "'keko_medical_Painkillers' in (magazines _player)";
            callbackSuccess = "['keko_medical_Painkillers', _player, _target, 'head', 'Painkillers'] call keko_medical_fnc_painkillersAction";
            litter[] = {};
        };
        class BloodIV: fieldDressing {
			allowSelfTreatment = 1;
            treatmentTime = 4; // 7
        };
        class SurgicalKit: fieldDressing {
            allowSelfTreatment = 1;
            treatmentTime = "(count ((_this select 1) getVariable ['ACE_Medical_bandagedWounds', []]) * 2)"; // * 5
        };
        class PersonalAidKit: fieldDressing {
            allowSelfTreatment = 1;
            treatmentTime = QUOTE((_this select 1) call ace_medical_fnc_treatmentAdvanced_fullHealTreatmentTime);
        };
        class CheckPulse: fieldDressing {
            treatmentTime = 1; // 2
        };
        class CPR: fieldDressing {
            treatmentTime = 10; // 15
        };
        class BodyBag: fieldDressing {
            treatmentTime = 6; // 15
        };
		class splint: fieldDressing {
			treatmentTime = 4; // 8
		};
		class CheckLimbs: fieldDressing {
			treatmentTime = 2; // 3
		};
    };
};

class ACE_Medical_Advanced {
    class Treatment {
		class Medication {
            class Painkillers {
                painReduce = 5;
                timeInSystem = 600;
                maxDose = 10;
                inCompatableMedication[] = {};
                viscosityChange = 0;
				hrIncreaseLow[] = {-1, -2, 35};
                hrIncreaseNormal[] = {-1, -3, 35};
				hrIncreaseHigh[] = {-1, -4, 50};
            };
        };
    };
};
