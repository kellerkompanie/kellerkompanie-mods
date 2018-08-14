params ["_player", "_cargo"];

_vehicle = _player getVariable ["keko_advancedtowing_towRopesVehicle", objNull];

diag_log text format ["[KEKO] (advancedtowing) attachTowRopes _player=%1 _cargo=%2 _vehicle=%3", _player, _cargo, _vehicle];

if(!isNull _vehicle) then {
	if(local _vehicle) then {
		private ["_towRopes","_vehicleHitch","_cargoHitch","_objDistance","_ropeLength"];
		_towRopes = _vehicle getVariable ["keko_advancedtowing_towRopes",[]];
		if(count _towRopes == 1) then {

			_cargoHitch = ([_cargo] call keko_advancedtowing_fnc_getHitchPoints) select 0;

			_vehicleHitch = ([_vehicle] call keko_advancedtowing_fnc_getHitchPoints) select 1;
			_ropeLength = (ropeLength (_towRopes select 0));
			_objDistance = ((_vehicle modelToWorld _vehicleHitch) distance (_cargo modelToWorld _cargoHitch));
			if( _objDistance > _ropeLength ) then {
				"The tow ropes are too short. Move vehicle closer." remoteExec ["hint", _player];
			} else {
				[_player, _vehicle] call keko_advancedtowing_fnc_dropTowRopes;
				_helper = "Land_Can_V2_F" createVehicle position _cargo;
				_helper attachTo [_cargo, _cargoHitch];
				_helper setVariable ["keko_Cargo",_cargo,true];
				hideObject _helper;
				[_helper] remoteExec ["keko_advancedtowing_fnc_hideObjectGlobal", [0, 2] select isDedicated];
				[_helper, [0,0,0], [0,0,-1]] ropeAttachTo (_towRopes select 0);
				[_vehicle,_vehicleHitch,_cargo,_cargoHitch,_ropeLength] spawn keko_advancedtowing_fnc_simulateTowing;
			};
		};
	} else {
		_this remoteExecCall ["keko_advancedtowing_fnc_attachTowRopes", _vehicle];
	};
};
