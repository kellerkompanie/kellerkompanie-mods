#include "script_component.hpp"

params ["_vehicle","_ropeIndex"];

private ["_allCargo","_selectedCargo"];

_selectedCargo = objNull;
_allCargo = _vehicle getVariable [QGVAR(Cargo),[]];
if(count _allCargo > _ropeIndex) then {
	_selectedCargo = _allCargo select _ropeIndex;
};
_selectedCargo;
