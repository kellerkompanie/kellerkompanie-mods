#include "script_component.hpp"

params ["_logic"];

if (!isServer) exitWith {};
INFO("running moduleCustomLogistics3den");

if (isNil QGVAR(customCrates)) then {
    GVAR(customCrates) = [];
};

private _objects = synchronizedObjects _logic;

{
    TRACE_1("converting to crate", _x);

    private _classname = typeOf _x;
    private _name = getText (configFile >> "cfgVehicles" >> _classname >> "displayName");
    private _content = _x call FUNC(getCrateInventory);
    GVAR(customCrates) pushBack [_name, _classname, _content];

    deleteVehicle _x;

} forEach _objects;

publicVariable QGVAR(customCrates);
TRACE_1("customCrates", GVAR(customCrates));
