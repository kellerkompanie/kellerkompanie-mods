params ["_object"];

diag_log text format["[KEKO] (teleport) adding teleport menu on %1", _object];

//_object addAction [("<t color='#A6A600' size='2' align='center'>" + ("Fast-Travel") + "</t>"), {createDialog "keko_teleport_mainDialog";}];
[_object, [("<t color='#A6A600' size='2' align='center'>" + ("Fast-Travel") + "</t>"), {createDialog "keko_teleport_mainDialog";}, _object]] remoteExec ["addAction", 0, true];