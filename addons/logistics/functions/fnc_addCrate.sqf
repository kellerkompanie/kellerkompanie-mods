#include "script_component.hpp"

params ["_name", "_classname", "_content"];

if (isNil QGVAR(crates)) exitWith {ERROR_2("%1 is nil, can't add crate %2", QGVAR(crates), _name); false};

GVAR(crates) pushBack [_name, _classname, _content];

true
