class ACE_Medical_Actions {
    class Advanced {
		class fieldDressing;
        class Painkillers: fieldDressing {
            displayName = "Use Painkillers";
            displayNameProgress = "Using Painkillers";
            allowedSelections[] = {"head"};
            category = "medication";
            items[] = {QGVAR(painkillers)};
            treatmentTime = 3;
            callbackSuccess = QUOTE(ace_medical_fnc_treatmentAdvanced_medication);
            animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";
            litter[] = { {"All", "", {"ACE_MedicalLitter_morphine"}} };
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
