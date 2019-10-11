#include "script_component.hpp"

disableSerialization;

private _action = ctrlText ((uiNamespace getVariable QGVAR(mainDialog)) displayCtrl 1401);
private _title = ctrlText ((uiNamespace getVariable QGVAR(mainDialog)) displayCtrl 1400);
private _content = ctrlText ((uiNamespace getVariable QGVAR(mainDialog)) displayCtrl 1402);
private _remove = cbChecked ((uiNamespace getVariable QGVAR(mainDialog)) displayCtrl 2800);

systemChat format ["_remove %1", _remove];

profileNamespace setVariable [QGVAR(lastAction), _action];
profileNamespace setVariable [QGVAR(lastAction), _title];
profileNamespace setVariable [QGVAR(lastAction), _content];
profileNamespace setVariable [QGVAR(lastAction), _remove];

private _logic = profileNamespace getVariable QGVAR(logic);

private _object = attachedTo _logic;

// TODO spawn object if not placed on object
// ["Land_File1_F","Land_File2_F","Land_FilePhotos_F","Land_Map_F","Land_Map_unfolded_F","Land_Laptop_unfolded_F","Land_MobilePhone_smart_F","Land_Tablet_01_F","Land_Tablet_02_F"]


switch (true) do {
    case (isNull _object): {
        [objNull, "nothing selected"] call bis_fnc_showCuratorFeedbackMessage;
    };
    default {
        [_object, _action, _title, _content, _remove] call FUNC(addIntel);
    };
};

deleteVehicle _logic;
closeDialog 1;

true
