params ["_player", "_vehicle"];

if(local _vehicle) then {
	private ["_helper"];
	_helper = (_player getVariable ["keko_advancedtowing_towRopesPickUpHelper", objNull]);
	if(!isNull _helper) then {
		{
			_helper ropeDetach _x;
		} forEach (_vehicle getVariable ["keko_advancedtowing_towRopes",[]]);
		detach _helper;
		deleteVehicle _helper;
	};
	_player setVariable ["keko_advancedtowing_towRopesVehicle", nil, true];
	_player setVariable ["keko_advancedtowing_towRopesPickUpHelper", nil, true];
} else {
	_this remoteExecCall ["keko_advancedtowing_fnc_dropTowRopes", _vehicle];
};
