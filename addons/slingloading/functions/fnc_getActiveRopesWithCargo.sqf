#include "script_component.hpp"

params ["_vehicle"];

private ["_activeRopesWithCargo","_existingCargo","_activeRopes","_cargo"];

_activeRopesWithCargo = [];
_existingCargo = _vehicle getVariable [QGVAR(Cargo),[]];
_activeRopes = _this call FUNC(getActiveRopes);
{
	_cargo = _existingCargo select (_x select 0);
	if(!isNull _cargo) then {
		_activeRopesWithCargo pushBack _x;
	};
} forEach _activeRopes;
_activeRopesWithCargo;
