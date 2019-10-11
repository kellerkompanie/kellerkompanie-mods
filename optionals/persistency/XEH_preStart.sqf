#include "script_component.hpp"

if(isNil "keko_logging_db_setupComplete") then {
    private _result = "extDB3" callExtension "9:ADD_DATABASE:Database";
    if(!(_result isEqualTo "[1]")) exitWith {
        ERROR("extDB3: Error with Database Connection");
    };

    keko_logging_db_setupComplete = true;
    publicVariable "keko_logging_db_setupComplete";
};

private _result = "extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:Database:SQL_CUSTOM:keko_persistency:kellerkompanie-persistency.ini";
if(!(_result isEqualTo "[1]")) exitWith {
    ERROR("extDB3: Error with Database Connection");
};

"extDB3" callExtension "1:keko_persistency:createTableLoadout";
"extDB3" callExtension "1:keko_persistency:createTableCrate";
"extDB3" callExtension "1:keko_persistency:createTableVehicle";
"extDB3" callExtension "1:keko_persistency:createTableMoney";
