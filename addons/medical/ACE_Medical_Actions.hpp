class ACE_Head {
	// Advanced medical
	class FieldDressing;
	class GVAR(Painkillers): FieldDressing {
		displayName = "Use Painkillers";
		condition = "[_player, _target, 'head', 'Painkillers'] call ace_medical_fnc_canTreatCached";
		statement = "[_player, _target, 'head', 'Painkillers'] call ace_medical_fnc_treatment";
		exceptions[] = {"isNotSwimming"};
		icon = QPATHTOF(ui\icon_painkillers_action.paa);
	};
};
