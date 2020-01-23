class GVAR(onChest) {
     displayName = CSTRING(OnChest);
     condition = QUOTE(!(missionNamespace getVariable [ARR_2(QQGVAR(disabled), false)]) && !(backpack _player isEqualTo '') && ([_player] call zade_boc_fnc_chestpack isEqualTo ''));
     exceptions[] = {"isNotInside"};
     statement = QUOTE([_player] call FUNC(actionOnChest));
     showDisabled = 0;
     priority = 2.5;
     icon = QPATHTOF(ui\onchest_ca.paa);
};
class GVAR(onBack) : GVAR(onChest) {
     displayName = CSTRING(OnBack);
     condition = QUOTE(!(missionNamespace getVariable [ARR_2(QQGVAR(disabled), false)]) && (backpack _player isEqualTo '') && !([_player] call FUNC(chestpack) isEqualTo ''));
     statement = QUOTE([_player] call FUNC(actionOnBack));
     icon = QPATHTOF(ui\onback_ca.paa);
};
class GVAR(swap) : GVAR(onChest) {
     displayName = CSTRING(swap);
     condition = QUOTE(!(missionNamespace getVariable [ARR_2(QQGVAR(disabled), false)]) && !(backpack _player isEqualTo '') && !([_player] call FUNC(chestpack) isEqualTo ''));
     statement = QUOTE([_player] call FUNC(actionSwap));
     icon = QPATHTOF(ui\swap_ca.paa);
};
