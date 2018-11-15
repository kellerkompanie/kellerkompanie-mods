class ACE_Medical_Actions {
    class Advanced {
		class Morphine;
        class Painkillers: Morphine {
            displayName = "Use Painkillers";
			displayNameProgress = "Using Painkillers...";
            allowedSelections[] = {"head"};
            category = "medication";
            items[] = {};
            treatmentTime = 3;
			condition = "'keko_medical_Painkillers' in (magazines _player)";
            callbackSuccess = "['keko_medical_Painkillers', _player, _target, 'head', 'Painkillers'] call keko_medical_fnc_painkillersAction";
            animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";
            litter[] = {};

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
