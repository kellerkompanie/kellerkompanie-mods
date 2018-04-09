//params [["_distance", keko_police_var_shoutDistance, ["15"]],["_playSounds", true, [true]]];

// TODO fix parameters with default values
_distance = keko_police_var_shoutDistance;
_playSounds = true;

_playerSide = side player;

if(_playSounds) then {
	player say3D selectRandom [
		"keko_police_shout1",
		"keko_police_02_gangster_gesichtet",
		"keko_police_02_ganz_ruhig",
		"keko_police_02_halt_oder_ich_schiesse",
		"keko_police_02_keine_bewegung",
		"keko_police_02_polizei01",
		"keko_police_02_polizei02",
		"keko_police_02_polizei03",
		"keko_police_02_polizei04",
		"keko_police_02_polizei05",
		"keko_police_02_sofort_stehenbleiben",
		"keko_police_02_waffe_weg"];
};

[_distance, _playerSide, _playSounds] spawn {
	params ["_distance", "_playerSide", "_playSounds"];
	
	sleep 2;

	_list = player nearEntities ["Man", _distance];
	{
		_unit = _x;
		_sideEntity = side _unit;
		_isFriendly = [_sideEntity, _playerSide] call BIS_fnc_sideIsFriendly;

		
		if!(_isFriendly) then {
			// TODO replace true/false with value giving feedback if and why surrendered
			_surrenderAlreadyDecided = _unit getVariable ["keko_police_surrenderAlreadyDecided", false];
			if !(_surrenderAlreadyDecided) then {
				_unit setVariable ["keko_police_surrenderAlreadyDecided", true, true];

				_isWounded = damage _unit > 0;
				_surrenderChance = _unit getVariable ["keko_police_surrenderChance", keko_police_var_defaultSurrenderChance];

				if(keko_police_var_higherSurrenderWounded && _isWounded) then {
					_surrenderChance = _surrenderChance + 0.2;
				};

				_random = (random 1.0) * 100;
				if(_random <= _surrenderChance) then {
					// do surrender
					["ACE_captives_setSurrendered", [_unit, true], _unit] call CBA_fnc_targetEvent;
					if(_playSounds) then {
						_unit say3D "keko_police_surrender1";
					};
				} else {
					if(_playSounds) then {
						_unit say3D "keko_police_fuckyou1";
					};
				};
			};		
		};
	} forEach _list;
};