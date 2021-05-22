#include "script_component.hpp"

params ["_players"];

(GVAR(Players) select 0) append _players;

private ["_player","_group","_leader"];

private _count = 0;

for "_count" from _count to (count _players - 1) do {
	_player = (_players select _count);	
	_group = (group _player);	
	_leader = (leader _group);	
	[_player] call FUNC(Marker_F1);
	
	if (_player == _leader) then {
		(GVAR(Players) select 2) pushBackUnique _group;		
		{ [_x] call FUNC(Marker_F1) } forEach units _player;
	};
	
	_player setVariable [QGVAR(Suppressed), time];
	
	if (GVAR(Dedicated)) then {
		_player addEventHandler ["FiredMan", {_this call FUNC(EH_Fired_F1) } ];
	};
};

if (GVAR(System) select 3) then {
	(GVAR(Players) select 1) append _players;
};

True
