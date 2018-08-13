params ["_player", "_vehicle"];
if(local _vehicle) then {
	diag_log format ["Take Tow Ropes Called %1", _this];
	private ["_existingTowRopes","_hitchPoint","_rope"];
	_existingTowRopes = _vehicle getVariable ["keko_advancedtowing_towRopes",[]];
	if(count _existingTowRopes == 0) then {
		_hitchPoint = [_vehicle] call keko_advancedtowing_fnc_getHitchPoints select 1;
		_rope = ropeCreate [_vehicle, _hitchPoint, 10];
		_vehicle setVariable ["keko_advancedtowing_towRopes",[_rope],true];
		_this call keko_advancedtowing_fnc_pickupTowRopes;
	};
} else {
	_this remoteExecCall ["keko_advancedtowing_fnc_takeTowRopes", _vehicle];
};
