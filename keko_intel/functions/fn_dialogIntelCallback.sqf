disableSerialization;

_action = ctrlText ((uiNamespace getVariable "keko_intel_mainDialog") displayCtrl 1401);
_title = ctrlText ((uiNamespace getVariable "keko_intel_mainDialog") displayCtrl 1400);
_content = ctrlText ((uiNamespace getVariable "keko_intel_mainDialog") displayCtrl 1402);
_remove = cbChecked ((uiNamespace getVariable "keko_intel_mainDialog") displayCtrl 2800);

systemChat format ["_remove %1", _remove];

profileNamespace setVariable ["keko_intel_lastAction", _action];
profileNamespace setVariable ["keko_intel_lastTitel", _title];
profileNamespace setVariable ["keko_intel_lastContent", _content];
profileNamespace setVariable ["keko_intel_lastRemove", _remove];

//diag_log text format["[KEKO] (intel) dialogIntelCallback: %1 %2 %3 %4", _action, _title, _content, _remove];

_logic = profileNamespace getVariable "keko_intel_logic";

private _object = attachedTo _logic;
diag_log text format["[KEKO] (intel) dialogIntelCallback on object: %1", _object];

// TODO spawn object if not placed on object 
// ["Land_File1_F","Land_File2_F","Land_FilePhotos_F","Land_Map_F","Land_Map_unfolded_F","Land_Laptop_unfolded_F","Land_MobilePhone_smart_F","Land_Tablet_01_F","Land_Tablet_02_F"]


switch (true) do {
    case (isNull _object): {
    	diag_log text "[KEKO] (common) ERROR: _object is null";
        [objNull, "nothing selected"] call bis_fnc_showCuratorFeedbackMessage;
    };
    default {
		[_object, _action, _title, _content, _remove] call keko_intel_fnc_addIntel;
    };
};

deleteVehicle _logic;
closeDialog 1;

true;