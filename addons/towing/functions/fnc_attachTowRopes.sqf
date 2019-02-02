#include "script_component.hpp"

params ["_player", "_cargo"];
private ["_vehicle"];

_vehicle = _player getVariable [QGVAR(towRopesVehicle), objNull];

TRACE_3("attachTowRopes", _player, _cargo, _vehicle);

if(!isNull _vehicle) then {
	if(local _vehicle) then {
		private ["_towRopes","_vehicleHitch","_cargoHitch","_objDistance","_ropeLength"];
		_towRopes = _vehicle getVariable [QGVAR(towRopes),[]];
		if(count _towRopes == 1) then {

			_cargoHitch = ([_cargo] call FUNC(getHitchPoints)) select 0;

			_vehicleHitch = ([_vehicle] call FUNC(getHitchPoints)) select 1;
			_ropeLength = (ropeLength (_towRopes select 0));
			_objDistance = ((_vehicle modelToWorld _vehicleHitch) distance (_cargo modelToWorld _cargoHitch));
			if( _objDistance > _ropeLength ) then {
				"The tow ropes are too short. Move vehicle closer." remoteExec ["hint", _player];
			} else {
				private ["_helper"];

				[_player, _vehicle] call FUNC(dropTowRopes);
				_helper = "Land_Can_V2_F" createVehicle position _cargo;
				// TODO add ACE interaction to rope end aka. helper object
				_helper attachTo [_cargo, _cargoHitch];
				_helper setVariable [QGVAR(Cargo),_cargo,true];
				hideObject _helper;
				[_helper] remoteExec [QFUNC(hideObjectGlobal), [0, 2] select isDedicated];
				[_helper, [0,0,0], [0,0,-1]] ropeAttachTo (_towRopes select 0);
				[_vehicle,_vehicleHitch,_cargo,_cargoHitch,_ropeLength] spawn FUNC(simulateTowing);
			};
		};
	} else {
		_this remoteExecCall [QFUNC(attachTowRopes), _vehicle];
	};
};
