#include "script_component.hpp"

params ["_vehicle","_player",["_ropesIndex",0]];

if(local _vehicle) then {
	private ["_helper","_existingRopes"];
	_helper = (_player getVariable [QGVAR(ropesPickUpHelper), objNull]);
	if(!isNull _helper) then {
		_existingRopes = [_vehicle,_ropesIndex] call FUNC(getRopes);
		{
			_helper ropeDetach _x;
		} forEach _existingRopes;
		detach _helper;
		deleteVehicle _helper;
	};
	_player setVariable [QGVAR(RopesVehicle), nil,true];
	_player setVariable [QGVAR(RopesPickUpHelper), nil,true];
} else {
	[_this,QFUNC(DropRopes),_vehicle,true] call FUNC(remoteExec);
};
