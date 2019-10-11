#include "script_component.hpp"

params ["_target"];

if (!local _target) exitWith {};

_target flyInHeight 30;
private _crew = crew _target;
private _crewMember = _crew select 0;
private _group = group _crewMember;
private _homeWP = _group addWaypoint [GVAR(uavSupplyBase), 0];
_homeWP setWaypointStatements ["true", "if (!local (group this)) exitWith {}; private _vehicle = vehicle this; _vehicle remoteExec ['deleteVehicle', _vehicle]; ['keko_loadout_onUAVReturned', []] call CBA_fnc_serverEvent;"];
