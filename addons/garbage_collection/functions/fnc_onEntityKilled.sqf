#include "script_component.hpp"

params ["_entity"];

INFO_1("onEntityKilled: %1", _entity);

if (_entity getVariable [QGVAR(isBlacklisted), false]) exitWith {
    INFO_1("onEntityKilled: %1 isBlacklisted EXITING", _entity);
    false
};

if (_entity isKindOf "CAManBase") then {
    INFO_1("onEntityKilled isKindOf CAManBase: %1", _entity);
    GVAR(corpses) pushBack _entity;
};

if (_entity isKindOf "LandVehicle" || _entity isKindOf "Air" || _entity isKindOf "Ship") then {
    INFO_1("onEntityKilled is vehicle: %1", _entity);
    GVAR(wrecks) pushBack _entity;
};

true
