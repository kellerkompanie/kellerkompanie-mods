#include "script_component.hpp"

params ["_entity"];

if (_entity getVariable [QGVAR(isBlacklisted), false]) exitWith {
    false
};

if (_entity isKindOf "CAManBase") then {
    GVAR(corpses) pushBack _entity;
};

if (_entity isKindOf "LandVehicle" || _entity isKindOf "Air" || _entity isKindOf "Ship") then {
    GVAR(wrecks) pushBack _entity;
};

true
