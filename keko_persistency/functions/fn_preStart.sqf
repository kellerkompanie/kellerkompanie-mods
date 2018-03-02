diag_log format["[keko_persistency] preStart %1", keko_logging_db_setupComplete];

if(isNil "keko_logging_db_setupComplete") then {
	diag_log "[keko_persistency] keko_logging_db_setupComplete not set or false";

	_result = "extDB3" callExtension "9:ADD_DATABASE:Database";
	if(!(_result isEqualTo "[1]")) exitWith {diag_log "extDB3: Error with Database Connection";};
	diag_log "[keko_persistency] added database";	

	keko_logging_db_setupComplete = true;
};

_result = "extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:Database:SQL_CUSTOM:keko_persistency:kellerkompanie-persistency.ini";
if(!(_result isEqualTo "[1]")) exitWith {diag_log "extDB3: Error with Database Connection";};
diag_log "[keko_persistency] added custom sql protocol keko_persistency:kellerkompanie-persistency.ini";	

keko_persistency_key = "UNDEFINED";