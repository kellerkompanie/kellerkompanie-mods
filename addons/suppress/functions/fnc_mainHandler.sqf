#include "script_component.hpp"

private _deleted = false;

{
	_x params [
		"_projectile",
		"_dDist",
		"_hit"
	];
	if !(alive _projectile) then {
		GVAR(mainArray) set [_forEachIndex, objNull];
		_deleted = true;
	} else {
		if ((player distance _projectile) <= _dDist) then {
			private _divisor =  OVERHEADDIVISOR;
			private _pPos = getPosATL _projectile;
			private _lis = lineIntersectsSurfaces [ATLToASL _pPos, eyePos player, player];
			if (_lis isEqualTo []) then {
				_dDist = _dDist * 0.65
			};

			if ((_pPos distance player) <= _dDist) then {
				_divisor = IMPACTDIVISOR;
				GVAR(lastShotAt) = time;

				if ((_pPos distance player) <= 4.3) then {
					[] call FUNC(impact);
				};
			};

			if (_divisor != 0) then {
				if ((vehicle player == player) || (isTurnedOut player)) then {
					GVAR(Threshold) = (GVAR(Threshold) + (_hit/_divisor)) min MAXSUPP;
				};
			};
			GVAR(mainArray) set [_forEachIndex, objNull];
            _deleted = true;
		};
	};
	nil
} forEach GVAR(mainArray);

if (_deleted) then {
    GVAR(mainArray) = GVAR(mainArray) - [objNull];
    _deleted = false;
};
