#include "script_component.hpp"

diag_log text format["[KEKO] (logging) preStart %1", GVAR(setupComplete)];

if(isNil "keko_logging_db_setupComplete") then {
	diag_log text "[KEKO] (logging) keko_logging_db_setupComplete not set or false";

	_result = "extDB3" callExtension "9:ADD_DATABASE:Database";
	if(!(_result isEqualTo "[1]")) exitWith {diag_log text "[KEKO] (logging) extDB3: Error with Database Connection";};
	diag_log text "[KEKO] (logging) added database";

	GVAR(setupComplete) = true;
};

_result = "extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:Database:SQL_CUSTOM:keko_logging:kellerkompanie-logging.ini";
if(!(_result isEqualTo "[1]")) exitWith {diag_log text "[KEKO] (logging) extDB3: Error with Database Connection";};
diag_log text "[KEKO] (logging) added custom sql protocol keko_logging:kellerkompanie-logging.ini";
