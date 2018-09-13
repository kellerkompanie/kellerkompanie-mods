#include "script_component.hpp"

if (_this isEqualTo "") exitWith {};

private _arr = _this splitString " ";

private _faction = _arr select 0;
private _role = _arr select 1;

[player, _faction, _role] spawn FUNC(giveLoadout);

closeDialog 1;

true;
