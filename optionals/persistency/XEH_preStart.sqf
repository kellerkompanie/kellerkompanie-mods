#include "script_component.hpp"

TRACE_1("preStart", keko_logging_db_setupComplete);

if(isNil "keko_logging_db_setupComplete") then {
	INFO("keko_logging_db_setupComplete not set or false");

	private _result = "extDB3" callExtension "9:ADD_DATABASE:Database";
	if(!(_result isEqualTo "[1]")) exitWith {
		ERROR("extDB3: Error with Database Connection");
	};
	INFO("added database");

	keko_logging_db_setupComplete = true;
	publicVariable "keko_logging_db_setupComplete";
};

private _result = "extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:Database:SQL_CUSTOM:keko_persistency:kellerkompanie-persistency.ini";
if(!(_result isEqualTo "[1]")) exitWith {
	ERROR("extDB3: Error with Database Connection");
};
INFO("added custom sql protocol keko_persistency:kellerkompanie-persistency.ini");

// TODO create tables if not exist

"extDB3" callExtension format [ "1:keko_persistency:createTableLoadout"];
"extDB3" callExtension format [ "1:keko_persistency:createTableCrate"];
"extDB3" callExtension format [ "1:keko_persistency:createTableVehicle"];
"extDB3" callExtension format [ "1:keko_persistency:createTableMoney"];
