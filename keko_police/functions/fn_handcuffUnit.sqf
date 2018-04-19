_target = cursorTarget;

_canOpenMedicMenu = [player, _target] call ace_medical_menu_fnc_canOpenMenu;

if(_canOpenMedicMenu) then {
	_canApplyHandcuffs = [player, _target] call ACE_captives_fnc_canApplyHandcuffs;
	if(_canApplyHandcuffs) then {
		[player, _target] call ACE_captives_fnc_doApplyHandcuffs;
		true
	};
};