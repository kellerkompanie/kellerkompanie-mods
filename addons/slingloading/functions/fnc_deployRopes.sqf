#include "script_component.hpp"

params ["_player", "_vehicle", ["_cargoCount",1]];

INFO_3("deployRopes _player=%1 _vehicle=%2 _cargoCount=%3",_player,_vehicle,_cargoCount);

if(local _vehicle) then {
	private _slingLoadPoints = [_vehicle] call FUNC(getSlingLoadPoints);
	private _existingRopes = _vehicle getVariable [QGVAR(Ropes),[]];

	if(count _existingRopes == 0) then {
		if(count _slingLoadPoints == 0) exitWith {
			"Vehicle doesn't support cargo ropes" remoteExec ["hint", _player];
		};

		if(count _slingLoadPoints < _cargoCount) exitWith {
			("Vehicle doesn't support " + _cargoCount + " cargo ropes") remoteExec ["hint", _player];
		};

		private _cargoRopes = [];
		private _cargo = [];

		for "_i" from 0 to (_cargoCount-1) do {
			_cargoRopes pushBack [];
			_cargo pushBack objNull;
		};

		_vehicle setVariable [QGVAR(Ropes),_cargoRopes,true];
		_vehicle setVariable [QGVAR(Cargo),_cargo,true];

		for "_i" from 0 to (_cargoCount-1) do {
			[_vehicle,_i] call FUNC(deployRopesIndex);
		};
	} else {
		"Vehicle already has cargo ropes deployed" remoteExec ["hint", _player];
	};
} else {
	_this remoteExecCall [QFUNC(deployRopes), _vehicle];
};
