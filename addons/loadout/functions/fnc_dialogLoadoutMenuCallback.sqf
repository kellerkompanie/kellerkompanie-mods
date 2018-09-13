#include "script_component.hpp"

if (_this isEqualTo "") exitWith {};

_arr = _this splitString " ";

_faction = _arr select 0;
_role = _arr select 1;

[player, _faction, _role] spawn FUNC(giveLoadout);

closeDialog 1;

true;
