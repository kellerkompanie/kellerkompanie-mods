#include "script_component.hpp"

params ["_vehicle","_ropeIndex"];

private _selectedRopes = [];
private _allRopes = _vehicle getVariable [QGVAR(Ropes),[]];
if(count _allRopes > _ropeIndex) then {
    _selectedRopes = _allRopes select _ropeIndex;
};
_selectedRopes;
