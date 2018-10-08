#include "script_component.hpp"

params ["_unit"];

if(isPlayer _unit) then {
	diag_log text format ["[KEKO] (common) initPlayerServer for EventHandler %1", _unit];
	// event handlers for the statistics at mission end
	_unit addEventHandler ["Fired", {
		params ["_unit", "_weapon", "_muzzle"];

		if (_muzzle isEqualTo "HandGrenadeMuzzle" || _muzzle isEqualTo "MiniGrenadeMuzzle") then {
			GVAR(fragsOut) = GVAR(fragsOut) + 1;
		};

		if (_weapon isEqualTo primaryWeapon _unit) then {
			GVAR(shotsFired) = GVAR(shotsFired) + 1;
		};
	}];
};
