class ACE_Medical_Actions {
    class Advanced {
        class FieldDressing;
        class Morphine;
        class Painkiller: Morphine {
            displayName = "Use Painkiller";
            displayNameProgress = "Using";
            items[] = {"ACE_painKiller"};
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
