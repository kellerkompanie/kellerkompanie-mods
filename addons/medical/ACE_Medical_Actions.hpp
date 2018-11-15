class ACE_Head {
	// Advanced medical
	class FieldDressing;
	class GVAR(Painkillers): FieldDressing {
		displayName = "Use Painkillers";
		condition = "[_player, _target, 'head', 'Painkillers'] call ace_medical_fnc_canTreatCached";
		statement = "['keko_medical_Painkillers', _player, _target, 'head', 'Painkillers'] call keko_medical_fnc_painkillersAction";
		exceptions[] = {"isNotSwimming"};
		icon = QPATHTOF(ui\icon_painkillers_action.paa);
	};
};
