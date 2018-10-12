#include "script_component.hpp"

params ["_vehicle","_ropeIndex"];

private _selectedCargo = ([_vehicle, _ropeIndex] call FUNC(getCargo));
private _selectedRopes = ([_vehicle, _ropeIndex] call FUNC(getRopes));
[_selectedRopes, _selectedCargo];
