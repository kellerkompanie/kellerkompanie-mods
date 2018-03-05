keko_var_police_defaultSurrenderChance = 0.5;
keko_var_police_defaultShoutDistance = 15;

params [["_distance", keko_var_police_defaultShoutDistance]];

_playerSide = side player;

player say3D "keko_police_shout1";

[_distance, _playerSide] spawn {
	params ["_distance", "_playerSide"];
	
	sleep 2;

	_list = player nearEntities ["Man", _distance];
	{
		_unit = _x;
		_sideEntity = side _unit;
		_isFriendly = [_sideEntity, _playerSide] call BIS_fnc_sideIsFriendly;

		
		if!(_isFriendly) then {
			_surrenderAlreadyDecided = _unit getVariable ["keko_police_surrenderAlreadyDecided", false];
			if !(_surrenderAlreadyDecided) then {
				_unit setVariable ["keko_police_surrenderAlreadyDecided", true, true];

				_isWounded = damage _unit > 0;
				_surrenderChance = _unit getVariable ["keko_police_surrenderChance", keko_var_police_defaultSurrenderChance];

				if(_isWounded) then {
					_surrenderChance = _surrenderChance + 0.2;
				};

				_random = random 1.0;
				if(_random <= _surrenderChance) then {
					// do surrender
					["ACE_captives_setSurrendered", [_unit, true], _unit] call CBA_fnc_targetEvent;
					_unit say3D "keko_police_surrender1";
				} else {
					_unit say3D "keko_police_fuckyou1";
				};
			};		
		};
	} forEach _list;
};