#include "script_component.hpp"

params ["_item"];

private _hasMagazine = [ACE_player, _item] call ace_common_fnc_hasMagazine;
private _hasItem = _item in ([ACE_player] call ace_common_fnc_uniqueItems);

(player getVariable [QGVAR(logistic), false]) && (_hasMagazine || _hasItem)
