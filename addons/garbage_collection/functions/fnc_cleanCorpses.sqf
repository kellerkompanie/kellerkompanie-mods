#include "script_component.hpp"

private _corpses = +GVAR(corpses);
GVAR(corpses) = [];
{
    deleteVehicle _x;
} forEach _corpses;
