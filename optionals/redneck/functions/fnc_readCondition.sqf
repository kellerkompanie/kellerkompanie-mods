#include "script_component.hpp"

params ["_player", "_book"];

private _item = "";
private _condition = false;

switch (_book) do {
	case "medic1": {
		_item = QGVAR(medicMagazine1);
		_condition = (_player getVariable ["ace_medical_medicClass", 0]) == 0;
	};
	case "medic2": {
		_item = QGVAR(medicMagazine2);
		_condition = (_player getVariable ["ace_medical_medicClass", 0]) < 2;
	};
	case "mechanic1": {
		_item = QGVAR(mechanicMagazine1);
		_condition = (_player getVariable ["ACE_isEngineer", 0]) == 0;
	};
	case "mechanic2": {
		_item = QGVAR(mechanicMagazine2);
		_condition = (_player getVariable ["ACE_isEngineer", 0]) < 2;
	};
};

([_player, _item] call ace_common_fnc_hasItem) && _condition
