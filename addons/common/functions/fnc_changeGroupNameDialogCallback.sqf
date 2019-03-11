#include "script_component.hpp"

disableSerialization;

private _groupName = ctrlText ((uiNamespace getVariable QGVAR(changeGroupName)) displayCtrl 1400);

(group player) setGroupIdGlobal [_groupName];

closeDialog 1;
