#include "script_component.hpp"

params ["_vehicle","_player",["_ropesIndex",0]];
if(local _vehicle) then {
	private ["_existingRopesAndCargo","_existingRopes","_existingCargo","_helper","_allCargo"];
	_existingRopesAndCargo = [_vehicle,_ropesIndex] call FUNC(getRopesAndCargo);
	_existingRopes = _existingRopesAndCargo select 0;
	_existingCargo = _existingRopesAndCargo select 1;
	if(!isNull _existingCargo) then {
		{
			_existingCargo ropeDetach _x;
		} forEach _existingRopes;
		_allCargo = _vehicle getVariable [QGVAR(Cargo),[]];
		_allCargo set [_ropesIndex,objNull];
		_vehicle setVariable [QGVAR(Cargo),_allCargo, true];
	};
	_helper = "Land_Can_V2_F" createVehicle position _player;
	{
		[_helper, [0, 0, 0], [0,0,-1]] ropeAttachTo _x;
		_helper attachTo [_player, [-0.1, 0.1, 0.15], "Pelvis"];
	} forEach _existingRopes;
	hideObject _helper;
	[[_helper],QFUNC(hideObjectGlobal)] call FUNC(remoteExecServer);
	_player setVariable [QGVAR(RopesVehicle), [_vehicle,_ropesIndex],true];
	_player setVariable [QGVAR(RopesPickUpHelper), _helper,true];
} else {
	[_this,QFUNC(pickupRopes),_vehicle,true] call FUNC(remoteExec);
};
