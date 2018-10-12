#include "script_component.hpp"

params ["_vehicle","_player",["_cargoCount",1],["_ropeLength",15]];

if(local _vehicle) then {
	private ["_existingRopes","_cargoRopes","_startLength","_slingLoadPoints"];

	_slingLoadPoints = [_vehicle] call FUNC(getSlingLoadPoints);
	_existingRopes = _vehicle getVariable [QGVAR(Ropes),[]];

	if(count _existingRopes == 0) then {
		if(count _slingLoadPoints == 0) exitWith {
			[["Vehicle doesn't support cargo ropes", false],QFUNC(hint),_player] call FUNC(remoteExec);
		};

		if(count _slingLoadPoints < _cargoCount) exitWith {
			[["Vehicle doesn't support " + _cargoCount + " cargo ropes", false],QFUNC(hint),_player] call FUNC(remoteExec);
		};

		_cargoRopes = [];
		_cargo = [];

		for "_i" from 0 to (_cargoCount-1) do {
			_cargoRopes pushBack [];
			_cargo pushBack objNull;
		};

		_vehicle setVariable [QGVAR(Ropes),_cargoRopes,true];
		_vehicle setVariable [QGVAR(Cargo),_cargo,true];

		for "_i" from 0 to (_cargoCount-1) do {
			[_vehicle,_player,_i] call FUNC(deployRopesIndex);
		};
	} else {
		[["Vehicle already has cargo ropes deployed", false],QFUNC(hint),_player] call FUNC(remoteExec);
	};
} else {
	[_this,QFUNC(deployRopes),_vehicle,true] call FUNC(remoteExec);
};
