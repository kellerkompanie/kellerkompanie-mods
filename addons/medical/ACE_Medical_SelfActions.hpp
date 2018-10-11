class Medical {
   class ACE_Head {
		class fieldDressing;
        class Painkillers: fieldDressing {
            displayName = "Use Painkillers";
            condition = QUOTE([ARR_4(_player, _target, 'head', 'Painkillers')] call ace_medical_fnc_canTreatCached);
            exceptions[] = {"isNotSwimming"};
            statement = QUOTE([ARR_4(_player, _target, 'head', 'Painkillers')] call ace_medical_fnc_treatment);
            icon = "";
        };
    };
};
