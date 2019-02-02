#include "script_component.hpp"

params ["_target"];

if (!local _target) exitWith {};

_target flyInHeight 30;
private _crew = crew _target;
INFO_1("_crew %1", _crew);
private _crewMember = _crew select 0;
INFO_1("_crewMember %1", _crewMember);
private _group = group _crewMember;
INFO_1("_group %1", _group);
INFO_1("GVAR(uavSupplyBase) %1", GVAR(uavSupplyBase));
private _homeWP = _group addWaypoint [GVAR(uavSupplyBase), 0];
_homeWP setWaypointStatements ["true", "if (!local (group this)) exitWith {}; private _vehicle = vehicle this; _vehicle remoteExec ['deleteVehicle', _vehicle]; ['keko_loadout_onUAVReturned', []] call CBA_fnc_serverEvent;"];
