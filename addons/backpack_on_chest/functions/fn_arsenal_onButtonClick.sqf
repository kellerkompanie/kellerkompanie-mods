#include "script_component.hpp"

private _center = missionnamespace getvariable ["BIS_fnc_arsenal_center",player];

private _chestpack = [_center] call FUNC(chestpack);
private _backpack = backpack _center;

private _action = ["onback", "onchest"] select (_chestpack isEqualTo "");
if (!(_backpack isEqualTo "") and !(_chestpack isEqualTo "")) then {_action = "swap";};

//exec action
[_center] call (missionNamespace getVariable (format ["keko_backpack_on_chest_fnc_action%1",_action]));

//update arsenal
["ListSelectCurrent"] call BIS_fnc_arsenal;
