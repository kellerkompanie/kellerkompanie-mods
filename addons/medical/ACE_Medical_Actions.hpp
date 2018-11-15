class ACE_Head {
    // Advanced medical
  class FieldDressing;
	class Painkillers: fieldDressing {
        displayName = "Use Painkillers";
        condition = QUOTE([ARR_4(_player, _target, 'head', 'Painkillers')] call ace_medical_fnc_canTreatCached);
        statement = QUOTE([GVAR(PainkillersBoxPill), _player, _target, 'head', 'Painkillers'] call FUNC(painkillersAction));
        exceptions[] = {"isNotSwimming"};
        icon = QPATHTOF(ui\icon_painkillers_action.paa);
    };
};
