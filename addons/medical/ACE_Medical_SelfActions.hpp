class Medical {
  class ACE_Head {
    class PainkillersBox {
      displayName = "Use Painkillers";
      condition = QUOTE(GVAR(PainkillersBoxPill) in (magazines _player));
      statement = QUOTE([GVAR(PainkillersBoxPill), _player, _target, 'head', 'Painkillers'] call FUNC(painkillersAction));
      showDisabled = 0;
      exceptions[] = {"isNotInside", "isNotSitting"};
      icon = QPATHTOF(\ui\icon_painkillers_action.paa);
    };
  };
};
