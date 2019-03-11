#include "script_component.hpp"

params ["_display"];

disableSerialization;

private _ctrlGroupName = _display displayCtrl 1400;
private _groupName = groupId (group player);
_ctrlGroupName ctrlSetText _groupName;
