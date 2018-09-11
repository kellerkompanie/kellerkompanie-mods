params ["_object", ["_sideArray", [true,true,true,true]]];

_allowBLUFOR = _sideArray select 0;
_allowINDFOR = _sideArray select 1;
_allowOPFOR  = _sideArray select 2;
_allowCIV    = _sideArray select 3;

diag_log text format["[KEKO] (teleport) adding teleport menu on %1 for sides %2", _object, _sideArray];

//_object addAction [("<t color='#A6A600' size='2' align='center'>" + ("Fast-Travel") + "</t>"), {createDialog "keko_teleport_mainDialog";}];

if(_allowBLUFOR) then {
	[_object, [("<t color='#A6A600' size='2' align='center'>" + ("Fast-Travel") + "</t>"), {createDialog "keko_teleport_mainDialog";}, _object]] remoteExec ["addAction", west, true];
};

if(_allowINDFOR) then {
	[_object, [("<t color='#A6A600' size='2' align='center'>" + ("Fast-Travel") + "</t>"), {createDialog "keko_teleport_mainDialog";}, _object]] remoteExec ["addAction", resistance, true];
};

if(_allowOPFOR) then {
	[_object, [("<t color='#A6A600' size='2' align='center'>" + ("Fast-Travel") + "</t>"), {createDialog "keko_teleport_mainDialog";}, _object]] remoteExec ["addAction", east, true];
};

if(_allowCIV) then {
	[_object, [("<t color='#A6A600' size='2' align='center'>" + ("Fast-Travel") + "</t>"), {createDialog "keko_teleport_mainDialog";}, _object]] remoteExec ["addAction", civilian, true];
};