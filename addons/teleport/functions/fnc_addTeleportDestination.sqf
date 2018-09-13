#include "script_component.hpp"

params ["_teleporterObject", "_teleporterName", ["_sideArray", [true,true,true,true]]];

private _allowBLUFOR = _sideArray select 0;
private _allowINDFOR = _sideArray select 1;
private _allowOPFOR  = _sideArray select 2;
private _allowCIV    = _sideArray select 3;

if(_allowBLUFOR) then {
	if (isNil "keko_teleport_destinations_blufor") then {keko_teleport_destinations_blufor = []};
	keko_teleport_destinations_blufor pushBack _teleporterName;
	publicVariable "keko_teleport_destinations_blufor";
	diag_log text format["[KEKO] (teleport) BLUFOR destinations after added new: %1", keko_teleport_destinations_blufor];

	[position _teleporterObject, _teleporterName, west] remoteExec ["keko_teleport_fnc_createMarker", west, true];
};

if(_allowINDFOR) then {
	if (isNil "keko_teleport_destinations_indfor") then {keko_teleport_destinations_indfor = []};
	keko_teleport_destinations_indfor pushBack _teleporterName;
	publicVariable "keko_teleport_destinations_indfor";
	diag_log text format["[KEKO] (teleport) INDFOR destinations after added new: %1", keko_teleport_destinations_indfor];

	[position _teleporterObject, _teleporterName, resistance] remoteExec ["keko_teleport_fnc_createMarker", resistance, true];
};

if(_allowOPFOR) then {
	if (isNil "keko_teleport_destinations_opfor")  then {keko_teleport_destinations_opfor  = []};
	keko_teleport_destinations_opfor pushBack _teleporterName;
	publicVariable "keko_teleport_destinations_opfor";
	diag_log text format["[KEKO] (teleport) OPFOR destinations after added new: %1", keko_teleport_destinations_opfor];

	[position _teleporterObject, _teleporterName, east] remoteExec ["keko_teleport_fnc_createMarker", east, true];
};

if(_allowCIV) then {
	if (isNil "keko_teleport_destinations_civ")    then {keko_teleport_destinations_civ    = []};
	keko_teleport_destinations_civ pushBack _teleporterName;
	publicVariable "keko_teleport_destinations_civ";
	diag_log text format["[KEKO] (teleport) CIV destinations after added new: %1", keko_teleport_destinations_civ];

	[position _teleporterObject, _teleporterName, civilian] remoteExec ["keko_teleport_fnc_createMarker", civilian, true];
};
