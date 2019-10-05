#include "script_component.hpp"

private _wrecks = +GVAR(wrecks);
GVAR(wrecks) = [];
{
    deleteVehicle _x;
} forEach _wrecks;
