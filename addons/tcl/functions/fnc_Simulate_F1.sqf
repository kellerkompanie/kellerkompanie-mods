#include "script_component.hpp"

private ["_unit","_object","_array","_animation"];

_unit = _this select 0;
_object = _this select 1;

if ( { (isPlayer _x) } count (units _unit) > 0) exitWith {};

if ( (alive _unit) && (_unit countEnemy [_object] > 0) && ( [_unit] call FUNC(Simulate_F2) ) ) then {
	_array = ["AdthPercMstpSlowWrflDnon_1","AdthPercMstpSlowWrflDnon_2","AdthPercMstpSlowWrflDnon_8","AdthPercMstpSlowWrflDnon_16","AdthPercMstpSlowWrflDnon_32","AdthPercMstpSrasWrflDnon_1","AdthPercMstpSrasWrflDnon_2","AdthPercMstpSrasWrflDnon_8","AdthPercMstpSrasWrflDnon_16","AdthPercMstpSrasWrflDnon_32"];

	if ( { (animationState _unit == _x) } count _array > 0) then {
		_unit switchMove "AinjPpneMstpSnonWnonDnon_kneel";
	}
	else {
		_animation = selectRandom _array;
		_unit playMove _animation;
		sleep 30 + (random 50);

		if (alive _unit ) then {
			if (isMultiplayer) then {
				if (floor (random 100) < 50) then {
					_unit playMove "AmovPpneMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon";
				};
			}
			else {
				if (floor (random 100) < 50) then {
					_unit switchMove "AinjPpneMstpSnonWnonDnon_rolltofront";
					_unit playMove "AmovPpneMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon";
				}
				else {
					_unit switchMove "AinjPpneMstpSnonWnonDnon_kneel";
				};
			};
		};
	};
};
