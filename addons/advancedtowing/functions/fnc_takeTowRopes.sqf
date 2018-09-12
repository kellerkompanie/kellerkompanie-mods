// original version by Duda https://github.com/sethduda/AdvancedTowing
#include "script_component.hpp"

params ["_player", "_vehicle"];

if(local _vehicle) then {
	diag_log text format ["[KEKO] (advancedtowing) takeTowRopes: %1", _this];

	private ["_existingTowRopes","_hitchPoint","_rope"];

	_existingTowRopes = _vehicle getVariable ["keko_advancedtowing_towRopes",[]];
	if(count _existingTowRopes == 0) then {
		_hitchPoint = [_vehicle] call FUNC(getHitchPoints) select 1;
		_rope = ropeCreate [_vehicle, _hitchPoint, GVAR(maxRopeLength)];
		_vehicle setVariable ["keko_advancedtowing_towRopes",[_rope],true];
		_player setVariable ["keko_advancedtowing_towRopesVehicle", _vehicle];
		_this call FUNC(pickupTowRopes);
	};
} else {
	_this remoteExecCall [QFUNC(takeTowRopes), _vehicle];
};
