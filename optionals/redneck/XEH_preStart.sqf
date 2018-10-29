#include "script_component.hpp"

if(isNil "keko_logging_db_setupComplete") then {
	INFO("keko_logging_db_setupComplete not set or false");

	private _result = "extDB3" callExtension "9:ADD_DATABASE:Database";
	if(!(_result isEqualTo "[1]")) exitWith {ERROR("extDB3: Error with Database Connection");};
	INFO("added database");

	keko_logging_db_setupComplete = true;	
};


private _result = "extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:Database:SQL_CUSTOM:keko_redneck:kellerkompanie-redneck.ini";
if(!(_result isEqualTo "[1]")) exitWith {
	ERROR("extDB3: Error with Database Connection");
};
INFO("added custom sql protocol keko_redneck:kellerkompanie-redneck.ini");

private _ret = "extDB3" callExtension format [ "0:keko_redneck:createTableLocations"];
INFO_1("keko_redneck:createTableLocations %1",_ret);
