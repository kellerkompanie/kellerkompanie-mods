#include "script_component.hpp"

params ["_vehicle"];

private _activeRopesWithoutCargo = [];
private _existingCargo = _vehicle getVariable [QGVAR(Cargo),[]];
private _activeRopes = _this call FUNC(getActiveRopes);
{
	private _cargo = _existingCargo select (_x select 0);
	if(isNull _cargo) then {
		_activeRopesWithoutCargo pushBack _x;
	};
} forEach _activeRopes;
_activeRopesWithoutCargo;
