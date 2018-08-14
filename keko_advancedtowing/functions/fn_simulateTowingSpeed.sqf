// original version by Duda https://github.com/sethduda/AdvancedTowing

params ["_vehicle"];

private ["_runSimulation","_currentCargo","_maxVehicleSpeed","_maxTowedCargo","_vehicleMass"];

_maxVehicleSpeed = getNumber (configFile >> "CfgVehicles" >> typeOf _vehicle >> "maxSpeed");
_vehicleMass = 1000 max (getMass _vehicle);
_maxTowedCargo = keko_settings_advancedtowing_maxTowedVehicles;
_runSimulation = true;

private ["_currentVehicle","_totalCargoMass","_totalCargoCount","_findNextCargo","_towRopes","_ropeLength"];
private ["_ends","_endsDistance","_currentMaxSpeed","_newMaxSpeed"];

while {_runSimulation} do {

	// Calculate total mass and count of cargo being towed (only takes into account
	// cargo that's actively being towed (e.g. there's no slack in the rope)
	_currentVehicle = _vehicle;
	_totalCargoMass = 0;
	_totalCargoCount = 0;
	_findNextCargo = true;
	while {_findNextCargo} do {
		_findNextCargo = false;

		if( count (ropeAttachedObjects _currentVehicle) == 0 ) then {
			_currentCargo = objNull;
		} else {
			_currentCargo = ((ropeAttachedObjects _currentVehicle) select 0) getVariable ["keko_advancedtowing_cargo",objNull];
		};

		if(!isNull _currentCargo) then {
			_towRopes = _currentVehicle getVariable ["keko_advancedtowing_towRopes",[]];
			if(count _towRopes > 0) then {
				_ropeLength = ropeLength (_towRopes select 0);
				_ends = ropeEndPosition (_towRopes select 0);
				_endsDistance = (_ends select 0) distance (_ends select 1);
				if( _endsDistance >= _ropeLength - 2 ) then {
					_totalCargoMass = _totalCargoMass + (1000 max (getMass _currentCargo));
					_totalCargoCount = _totalCargoCount + 1;
					_currentVehicle = _currentCargo;
					_findNextCargo = true;
				};
			};
		};
	};

	_newMaxSpeed = _maxVehicleSpeed / (1 max ((_totalCargoMass /  _vehicleMass) * 2));
	_newMaxSpeed = (_maxVehicleSpeed * 0.75) min _newMaxSpeed;

	// Prevent vehicle from moving if trying to move more cargo than pre-defined max
	if(_totalCargoCount > _maxTowedCargo) then {
		_newMaxSpeed = 0;
	};

	_currentMaxSpeed = _vehicle getVariable ["keko_advancedtowing_maxTowSpeed",_maxVehicleSpeed];

	if(_currentMaxSpeed != _newMaxSpeed) then {
		_vehicle setVariable ["keko_advancedtowing_maxTowSpeed",_newMaxSpeed];
	};

	sleep 0.1;

};
