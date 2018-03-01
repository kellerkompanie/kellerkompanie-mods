diag_log "keko_logging preStart";

//if(isNil "keko_logging_db_setupComplete" || !keko_loggin_db_setupComplete) then {
diag_log "keko_loggin keko_loggin_db_setupComplete not set or false";

_result = "extDB3" callExtension "9:ADD_DATABASE:Database";
if(!(_result isEqualTo "[1]")) exitWith {diag_log "extDB3: Error with Database Connection";};
diag_log _result;

_result = "extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:Database:SQL:SQL";
if(!(_result isEqualTo "[1]")) exitWith {diag_log "extDB3: Error with Database Connection";};
diag_log _result;

//	keko_loggin_db_setupComplete = true;
//};

//diag_log "keko_logging keko_loggin_db_setupComplete is set";

onPlayerConnected {
	diag_log "keko_logging onPlayerConnected";
	_ret = "extDB3" callExtension format["0:SQL:insert into session (EventType, PlayerUID, PlayerName, JIP, Time) values ('CONNECTED', '%1', '%2', %3, NOW());", _uid, _name, _jip ];
	diag_log _ret;
};

onPlayerDisconnected {
	diag_log "keko_logging onPlayerDisconnected";
	_ret = "extDB3" callExtension format["0:SQL:insert into session (EventType, PlayerUID, PlayerName, JIP, Time) values ('DISCONNECTED', '%1', '%2', %3, NOW());", _uid, _name, _jip ];
	diag_log _ret;
};