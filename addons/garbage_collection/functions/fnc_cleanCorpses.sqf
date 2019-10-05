#include "script_component.hpp"

INFO_1("cleanCorpses: before corpses: %1", GVAR(corpses));

private _corpses = +GVAR(corpses);
GVAR(corpses) = [];
{
    INFO_1("cleanCorpses: deleting %1", _x);
    deleteVehicle _x;
} forEach _corpses;

INFO_1("cleanCorpses: after corpses: %1", GVAR(corpses));
