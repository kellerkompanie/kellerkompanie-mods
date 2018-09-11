params ["_object"];

[_object, [("<t color='#42DCF4' size='2' align='center'>" + ("Logistik") + "</t>"), {createDialog "keko_logistics_menuDialog";}, _object]] remoteExec ["addAction", 0, true];