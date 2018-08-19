_logic = _this select 0;

diag_log text "[KEKO] (persistency_settings) running modulePersistencyOverwriteID3den";

_overwriteID = parseNumber (_logic getVariable ["ID", "-1"]);

if(_overwriteID == -1) exitWith{"ERROR: ID of persistency overwrite cannot be -1" remoteExec ["systemChat", 0]; false};

_objects = synchronizedObjects _logic;

if ((count _objects) == 1) then {
  _object = _objects select 0;
  diag_log text format ["[KEKO] (persistency_settings) overwriting ID of object %1 to %2", _object, _overwriteID];
  _object setVariable ["keko_persistency_overwriteID", _overwriteID, true];
  true
} else {
  "ERROR: synchronize Persistency overwrite module to exactly 1 object" remoteExec ["systemChat", 0];
  false
};
