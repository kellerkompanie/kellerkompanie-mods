#include "script_component.hpp"

params ["_teleporterObject", "_teleporterName", ["_sideArray", [true,true,true,true]]];

private _allowBLUFOR = _sideArray select 0;
private _allowINDFOR = _sideArray select 1;
private _allowOPFOR  = _sideArray select 2;
private _allowCIV    = _sideArray select 3;

if(_allowBLUFOR) then {
	if (isNil QGVAR(destinations_blufor)) then {GVAR(destinations_blufor) = []};
	GVAR(destinations_blufor) pushBack _teleporterName;
	publicVariable QGVAR(destinations_blufor);
	diag_log text format["[KEKO] (teleport) BLUFOR destinations after added new: %1", GVAR(destinations_blufor)];

	[position _teleporterObject, _teleporterName, west] remoteExec [QFUNC(createMarker), west, true];
};

if(_allowINDFOR) then {
	if (isNil QGVAR(destinations_indfor)) then {GVAR(destinations_indfor) = []};
	GVAR(destinations_indfor) pushBack _teleporterName;
	publicVariable QGVAR(destinations_indfor);
	diag_log text format["[KEKO] (teleport) INDFOR destinations after added new: %1", GVAR(destinations_indfor)];

	[position _teleporterObject, _teleporterName, resistance] remoteExec [QFUNC(createMarker), resistance, true];
};

if(_allowOPFOR) then {
	if (isNil QGVAR(destinations_opfor))  then {GVAR(destinations_opfor)  = []};
	GVAR(destinations_opfor) pushBack _teleporterName;
	publicVariable QGVAR(destinations_opfor);
	diag_log text format["[KEKO] (teleport) OPFOR destinations after added new: %1", GVAR(destinations_opfor)];

	[position _teleporterObject, _teleporterName, east] remoteExec [QFUNC(createMarker), east, true];
};

if(_allowCIV) then {
	if (isNil QGVAR(destinations_civ))    then {GVAR(destinations_civ)    = []};
	GVAR(destinations_civ) pushBack _teleporterName;
	publicVariable QGVAR(destinations_civ);
	diag_log text format["[KEKO] (teleport) CIV destinations after added new: %1", GVAR(destinations_civ)];

	[position _teleporterObject, _teleporterName, civilian] remoteExec [QFUNC(createMarker), civilian, true];
};
