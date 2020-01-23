#include "script_component.hpp"

disableSerialization;
params ["_display"];

if (_display isEqualType controlNull) exitWith {  //the onSelChanged EH calls before the actual backpack changed so we have to wait a little bit
     [ctrlParent _display] spawn {sleep 0.05; _this call FUNC(arsenal_updateUI)};
};

//the arsenal unit
private _center = missionnamespace getvariable ["BIS_fnc_arsenal_center",player];

private _chestpack = [_center] call FUNC(chestpack);
private _backpack = backpack _center;

private _action = ["onback", "onchest"] select (_chestpack isEqualTo "");
if (!(_backpack isEqualTo "") and !(_chestpack isEqualTo "")) then {_action = "swap";};

(_display displayCtrl 9233) ctrlSetText format [QPATHTOF(ui\actions\%1_ca.paa), _action];
(_display displayCtrl 9233) ctrlSetTooltip localize format [LSTRING(%1), _action];

if ((_backpack isEqualTo "") and (_chestpack isEqualTo "")) then {
     (_display displayCtrl 9233) ctrlEnable false;
     (_display displayCtrl 9233) ctrlSetTooltip "";
} else {
     (_display displayCtrl 9233) ctrlEnable true;
};
