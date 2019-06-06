#include "script_component.hpp"

#include "\A3\ui_f_curator\ui\defineResinclDesign.inc"

disableSerialization;
params ["_curator", "_placedObject"];

// fix module activation bug for copy/paste
if (_placedObject isKindOf "Module_f") then
{
    _placedObject setVariable ["BIS_fnc_initModules_activate", true, true];
};

if (local _placedObject) then
{
    GVAR(CuratorObjectPlaced_UnitUnderCursor) = curatorMouseOver;
    GVAR(CuratorObjectPlaces_LastPlacedObjectPosition) = position _placedObject;
    [format ["Placed Object %1 (%2) on %3 at position %4, %5", _placedObject, typeOf _placedObject, str(GVAR(CuratorObjectPlaced_UnitUnderCursor)), str(GVAR(CuratorObjectPlaces_LastPlacedObjectPosition)), (nearestLocation [GVAR(CuratorObjectPlaces_LastPlacedObjectPosition), "nameCity"]) call BIS_fnc_locationDescription]] call FUNC(log);
}
else
{
    [format ["NON-LOCAL Placed Object %1 with %2 under mouse at position %3", _placedObject, str(GVAR(CuratorObjectPlaced_UnitUnderCursor)), str(GVAR(CuratorObjectPlaces_LastPlacedObjectPosition))]] call FUNC(log);
};

if (({missionNamespace getVariable [_x, false]} count [QGVAR(deleteCrewOnSpawn), QGVAR(toggleCrewOnSpawn)]) isEqualTo 1) then
{
    private _curatorDisplay = findDisplay IDD_RSCDISPLAYCURATOR;
    private _ctrlModeGroups = _curatorDisplay displayCtrl IDC_RSCDISPLAYCURATOR_MODEGROUPS;
    private _crew = crew _placedObject;
    if (ctrlScale _ctrlModeGroups != 1 and count _crew > 0) then
    {
        {_placedObject deleteVehicleCrew _x} forEach _crew;
    };
};

if (!isNil QGVAR(specifyPositionBeforeSpawn)) then
{
    private _curatorDisplay = findDisplay IDD_RSCDISPLAYCURATOR;
    private _ctrlModeUnits = _curatorDisplay displayCtrl IDC_RSCDISPLAYCURATOR_MODEUNITS;
    private _ctrlModeRecent = _curatorDisplay displayCtrl IDC_RSCDISPLAYCURATOR_MODERECENT;
    if (ctrlScale _ctrlModeUnits == 1 or {ctrlScale _ctrlModeRecent == 1}) then
    {
        if (!(_placedObject isKindOf "module_f") and {count units group _placedObject - count crew _placedObject <= 0}) then
        {
            // if not a module or a group
            [_placedObject] call FUNC(PreplaceMode);
        }
    };
};
