#include "script_component.hpp"

if(isNil "keko_logging_db_setupComplete") then {
	_result = "extDB3" callExtension "9:ADD_DATABASE:Database";
	if(!(_result isEqualTo "[1]")) exitWith {ERROR("extDB3: Error with Database Connection");};

	keko_logging_db_setupComplete = true;
};

_result = "extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:Database:SQL_CUSTOM:keko_logging:kellerkompanie-logging.ini";
if(!(_result isEqualTo "[1]")) exitWith {ERROR("extDB3: Error with Database Connection");};
