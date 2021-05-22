#include "script_component.hpp"

params ["_vehicles"];
	
(GVAR(Vehicles) select 0) append _vehicles;

private "_vehicle";
private _count = 0;

for "_count" from _count to (count _vehicles - 1) do {
	_vehicle = (_vehicles select _count);
	
	if (GVAR(Multiplayer)) then {
		_vehicle addMPEventHandler ["MPKilled", {_this call FUNC(EH_Killed_F1) } ];
	}
	else {
		_vehicle addEventHandler ["Killed", {_this call FUNC(EH_Killed_F1) } ];
	};
};

True
