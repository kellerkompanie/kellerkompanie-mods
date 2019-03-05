#include "script_component.hpp"

params ["_object", ["_sideArray", [true,true,true,true]]];

private _allowBLUFOR = _sideArray select 0;
private _allowINDFOR = _sideArray select 1;
private _allowOPFOR  = _sideArray select 2;
private _allowCIV    = _sideArray select 3;

TRACE_2("adding teleport menu for sides", _object, _sideArray);

//_object addAction [("<t color='#A6A600' size='2' align='center'>" + ("Fast-Travel") + "</t>"), {createDialog "keko_teleport_mainDialog";}];

if(_allowBLUFOR) then {
    [_object, [("<t color='#A6A600' size='2' align='center'>" + ("Fast-Travel") + "</t>"), {createDialog QGVAR(mainDialog);}, _object]] remoteExec ["addAction", west, true];
};

if(_allowINDFOR) then {
    [_object, [("<t color='#A6A600' size='2' align='center'>" + ("Fast-Travel") + "</t>"), {createDialog QGVAR(mainDialog);}, _object]] remoteExec ["addAction", resistance, true];
};

if(_allowOPFOR) then {
    [_object, [("<t color='#A6A600' size='2' align='center'>" + ("Fast-Travel") + "</t>"), {createDialog QGVAR(mainDialog);}, _object]] remoteExec ["addAction", east, true];
};

if(_allowCIV) then {
    [_object, [("<t color='#A6A600' size='2' align='center'>" + ("Fast-Travel") + "</t>"), {createDialog QGVAR(mainDialog);}, _object]] remoteExec ["addAction", civilian, true];
};
