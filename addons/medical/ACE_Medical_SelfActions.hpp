class Medical {
  class ACE_ArmLeft {
    class FieldDressing;
    class Morphine;
    class Painkiller: Morphine {
      displayName = "Use Painkillers";
      condition = "[_player, _target, 'hand_l', 'Painkiller'] call ace_medical_fnc_canTreatCached";
      statement = "[_player, _target, 'hand_l', 'Painkiller'] call ace_medical_fnc_treatment";
    };
  };
  class ACE_ArmRight {
    class FieldDressing;
    class Morphine;
    class Painkiller: Morphine {
      displayName = "Use Painkillers";
      condition = "[_player, _target, 'hand_r', 'Painkiller'] call ace_medical_fnc_canTreatCached";
      statement = "[_player, _target, 'hand_r', 'Painkiller'] call ace_medical_fnc_treatment";
    };
  };
  class ACE_LegLeft {
    class FieldDressing;
    class Morphine;
    class Painkiller: Morphine {
      displayName = "Use Painkillers";
      condition = "[_player, _target, 'leg_l', 'Painkiller'] call ace_medical_fnc_canTreatCached";
      statement = "[_player, _target, 'leg_l', 'Painkiller'] call ace_medical_fnc_treatment";
    };
  };
  class ACE_LegRight {
    class FieldDressing;
    class Morphine;
    class Painkiller: Morphine {
      displayName = "Use Painkillers";
      condition = "[_player, _target, 'leg_r', 'Painkiller'] call ace_medical_fnc_canTreatCached";
      statement = "[_player, _target, 'leg_r', 'Painkiller'] call ace_medical_fnc_treatment";
    };
  };
};
