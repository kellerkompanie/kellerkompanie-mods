#include "script_component.hpp"

TRACE_1("preStart", GVAR(setupComplete));

if(isNil "keko_logging_db_setupComplete") then {
	INFO("keko_logging_db_setupComplete not set or false");

	_result = "extDB3" callExtension "9:ADD_DATABASE:Database";
	if(!(_result isEqualTo "[1]")) exitWith {ERROR("extDB3: Error with Database Connection");};
	INFO("added database");

	GVAR(setupComplete) = true;
};

_result = "extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:Database:SQL_CUSTOM:keko_logging:kellerkompanie-logging.ini";
if(!(_result isEqualTo "[1]")) exitWith {ERROR("extDB3: Error with Database Connection");};
INFO("added custom sql protocol keko_logging:kellerkompanie-logging.ini");
