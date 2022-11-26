class ace_medical_treatment {
    class Medication {
        class Painkiller {
            painReduce = 0.4;
            hrcreaseLow[] = {-5, -10};
            hrcreaseNormal[] = {-5, -15};
            hrcreaseHigh[] = {-5, -15};
            timeInSystem = 1200;
            timeTillMaxEffect = 60;
            maxDose = 10;
            incompatibleMedication[] = {};
            viscosityChange = -5;
        };

        class Bloodstopper {
            painReduce = 0.0;
            hrcreaseLow[] = { -40, -50 };
            hrcreaseNormal[] = { -30, -45 };
            hrcreaseHigh[] = { -30, -40 };
            timeInSystem = 1800;
            timeTillMaxEffect = 30;
            maxDose = 2;
            onOverDose = QFUNC(overdose);
            incompatibleMedication[] = {};
            viscosityChange = 75;
        };

        class GoJuice {
            painReduce = 0.8;
            hrcreaseLow[] = { 50, 75 };
            hrcreaseNormal[] = { 35, 55 };
            hrcreaseHigh[] = { 20, 40 };
            timeInSystem = 2400;
            timeTillMaxEffect = 10;
            maxDose = 1;
            onOverDose = QFUNC(overdose);
            incompatibleMedication[] = {};
            viscosityChange = -40;
        };

        class Contrafinil {
            painReduce = -1;
            hrcreaseLow[] = { 0, -15 };
            hrcreaseNormal[] = { 0, -15 };
            hrcreaseHigh[] = { 0, -15 };
            timeInSystem = 1600;
            timeTillMaxEffect = 30;
            maxDose = 3;
            onOverDose = QFUNC(overdose);
            incompatibleMedication[] = {};
            viscosityChange = 15;
        };
    };
};
