#include "script_component.hpp"

params ["_object", ["_sideArray", [true,true,true,true]]];

private _allowBLUFOR = _sideArray select 0;
private _allowINDFOR = _sideArray select 1;
private _allowOPFOR  = _sideArray select 2;
private _allowCIV    = _sideArray select 3;

private _action = [
    // title
    ("<t color='#A6A600' size='2' align='center'>" + ("Fast-Travel") + "</t>"),

    // script
    {createDialog QGVAR(mainDialog);},

    // arguments
    _object,

    // priority
    1.5,

    // showWindow,
    true,

    // hideOnUse
    true,

    // shortcut
    "",

    // condition
    "true",

    // radius
    5
];

if(_allowBLUFOR) then {
    [_object, _action] remoteExec ["addAction", west, true];
};

if(_allowINDFOR) then {
    [_object, _action] remoteExec ["addAction", resistance, true];
};

if(_allowOPFOR) then {
    [_object, _action] remoteExec ["addAction", east, true];
};

if(_allowCIV) then {
    [_object, _action] remoteExec ["addAction", civilian, true];
};
