#include "script_component.hpp"

diag_log text format["[KEKO] (persistency) preStart %1", keko_logging_db_setupComplete];

if(isNil "keko_logging_db_setupComplete") then {
	diag_log text "[KEKO] (persistency) keko_logging_db_setupComplete not set or false";

	private _result = "extDB3" callExtension "9:ADD_DATABASE:Database";
	if(!(_result isEqualTo "[1]")) exitWith {diag_log text "[KEKO] (persistency) extDB3: Error with Database Connection";};
	diag_log text "[KEKO] (persistency) added database";

	keko_logging_db_setupComplete = true;
	publicVariable "keko_logging_db_setupComplete";
};

private _result = "extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:Database:SQL_CUSTOM:keko_persistency:kellerkompanie-persistency.ini";
if(!(_result isEqualTo "[1]")) exitWith {diag_log text "[KEKO] (persistency) extDB3: Error with Database Connection";};
diag_log text "[KEKO] (persistency) added custom sql protocol keko_persistency:kellerkompanie-persistency.ini";

// TODO create tables if not exist
