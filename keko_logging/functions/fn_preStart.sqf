diag_log "[keko_logging] preStart";

if(isNil "keko_logging_db_setupComplete" || !keko_loggin_db_setupComplete) then {
	diag_log "[keko_logging] keko_loggin_db_setupComplete not set or false";

	_result = "extDB3" callExtension "9:ADD_DATABASE:Database";
	if(!(_result isEqualTo "[1]")) exitWith {diag_log "extDB3: Error with Database Connection";};
	diag_log "[keko_logging] added database";	

	keko_loggin_db_setupComplete = true;
	publicVariable "keko_loggin_db_setupComplete";
};

_result = "extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:Database:SQL_CUSTOM:keko_logging:kellerkompanie-logging.ini";
if(!(_result isEqualTo "[1]")) exitWith {diag_log "extDB3: Error with Database Connection";};
diag_log "[keko_logging] added custom sql protocol keko_logging:kellerkompanie-logging.ini";	