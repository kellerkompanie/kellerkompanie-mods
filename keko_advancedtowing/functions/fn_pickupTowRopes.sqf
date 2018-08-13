params ["_vehicle","_player"];
if(local _vehicle) then {
	private ["_attachedObj","_helper"];
	{
		_attachedObj = _x;
		{
			_attachedObj ropeDetach _x;
		} forEach (_vehicle getVariable ["keko_advancedtowing_towRopes",[]]);
		deleteVehicle _attachedObj;
	} forEach ropeAttachedObjects _vehicle;
	_helper = "Land_Can_V2_F" createVehicle position _player;
	{
		[_helper, [0, 0, 0], [0,0,-1]] ropeAttachTo _x;
		_helper attachTo [_player, [-0.1, 0.1, 0.15], "Pelvis"];
	} forEach (_vehicle getVariable ["keko_advancedtowing_towRopes",[]]);
	hideObject _helper;
	[_helper] remoteExec ["keko_advancedtowing_fnc_hideObjectGlobal", 2];
	_player setVariable ["keko_advancedtowing_towRopesVehicle", _vehicle,true];
	_player setVariable ["keko_advancedtowing_towRopesPickUpHelper", _helper,true];
} else {
	_this remoteExecCall ["keko_advancedtowing_fnc_pickupTowRopes", _vehicle];
};
