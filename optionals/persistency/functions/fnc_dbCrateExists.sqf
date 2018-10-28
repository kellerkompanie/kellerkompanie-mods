#include "script_component.hpp"

EXIT_IF_PERSISTENCY_DISABLED;
EXIT_IF_KEY_INVALID;

params ["_objectVariable"];

private _ret = call compile ("extDB3" callExtension format [ "0:keko_persistency:containsCrate:%1:%2", GVAR(key), _objectVariable]);
private _crateExists = false;
if ((_ret select 0) == 1) then {
	INFO_1("dbCrateExists: loading sucessful %1", _ret);
	if (count (_ret select 1) == 1) then {
		_crateExists = true;
	};
} else {
	ERROR_1("dbCrateExists: loading unsucessful %1", _ret);
};

_crateExists
