#include "script_component.hpp"

params ["_vehicle","_ropeIndex"];
private ["_selectedCargo","_selectedRopes"];
_selectedCargo = (_this call FUNC(getCargo));
_selectedRopes = (_this call FUNC(getRopes));
[_selectedRopes, _selectedCargo];
