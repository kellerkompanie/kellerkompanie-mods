#include "script_component.hpp"

if !(isServer) exitWith {};

if(isNil "keko_logging_db_setupComplete") then {
	private _result = "extDB3" callExtension "9:ADD_DATABASE:Database";
	if(!(_result isEqualTo "[1]")) exitWith {ERROR("extDB3: Error with Database Connection");};

	keko_logging_db_setupComplete = true;
};


private _result = "extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:Database:SQL_CUSTOM:keko_redneck:kellerkompanie-redneck.ini";
if(!(_result isEqualTo "[1]")) exitWith {
	ERROR("extDB3: Error with Database Connection");
};

private _ret = "extDB3" callExtension format [ "0:keko_redneck:createTableLocations"];
