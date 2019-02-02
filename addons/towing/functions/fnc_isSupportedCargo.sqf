#include "script_component.hpp"

params ["_vehicle","_cargo"];

private ["_canTow"];
_canTow = false;

if(not isNull _vehicle && not isNull _cargo) then {
	{
		if(_vehicle isKindOf (_x select 0)) then {
			if(_cargo isKindOf (_x select 2)) then {
				if( (toUpper (_x select 1)) == "CAN_TOW" ) then {
					_canTow = true;
				} else {
					_canTow = false;
				};
			};
		};
	} forEach [
		["Tank","CAN_TOW","Tank"],
		["Tank","CAN_TOW","Car"],
		["Tank","CAN_TOW","Ship"],
		["Tank","CAN_TOW","Air"],
		["Car","CAN_TOW","Tank"],
		["Car","CAN_TOW","Car"],
		["Car","CAN_TOW","Ship"],
		["Car","CAN_TOW","Air"],
		["Ship","CAN_TOW","Ship"]
	];
};
_canTow;
