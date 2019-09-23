#include "script_component.hpp"

params["_logic"];

if (!isServer) exitWith {};

private _faction = _logic getVariable ["Faction", "DEFAULT"];
if(_faction isEqualTo "DEFAULT") then {
    _faction = GVAR(loadoutFaction);
};

private _objects = synchronizedObjects _logic;
{
    [_x, _faction] call FUNC(addLoadoutMenu);
} forEach _objects;

deleteVehicle _logic;

true
