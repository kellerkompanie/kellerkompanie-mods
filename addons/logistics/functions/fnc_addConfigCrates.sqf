#include "script_component.hpp"

private _cratesCfgs = "true" configClasses (configFile >> "kekoFactions" >> EGVAR(loadout,loadoutFaction) >> "crates");
{
    private _crateConfig = _x;

    private _addCrate = 0;
    switch (configName _crateConfig) do {
        case "EmptyCrate": { _addCrate = QGVAR(addCrateEmpty) call CBA_settings_fnc_get; };
        case "FireTeamCrate": { _addCrate = QGVAR(addCrateFireTeam) call CBA_settings_fnc_get; };
        case "InfantryCrate": { _addCrate = QGVAR(addCrateInfantry) call CBA_settings_fnc_get; };
        case "GrenadesCrate": { _addCrate = QGVAR(addCrateGrenades) call CBA_settings_fnc_get; };
        case "MGCrate": { _addCrate = QGVAR(addCrateMG) call CBA_settings_fnc_get; };
        case "ATCrate": { _addCrate = QGVAR(addCrateAT) call CBA_settings_fnc_get; };
        case "ATGustavCrate": { _addCrate = QGVAR(addCrateATGustav) call CBA_settings_fnc_get; };
        case "AACrate": { _addCrate = QGVAR(addCrateAA) call CBA_settings_fnc_get; };
        case "MedicCrate": { _addCrate = QGVAR(addCrateMedic) call CBA_settings_fnc_get; };
        case "SupportCrate": { _addCrate = QGVAR(addCrateSupport) call CBA_settings_fnc_get; };
        case "EODCrate": { _addCrate = QGVAR(addCrateEOD) call CBA_settings_fnc_get; };
        case "RationsCrate": { _addCrate = QGVAR(addCrateRations) call CBA_settings_fnc_get; };
        case "CQBCrate": { _addCrate = QGVAR(addCrateCQB) call CBA_settings_fnc_get; };
        case "SpareWheel": { _addCrate = QGVAR(addCrateSpareWheel) call CBA_settings_fnc_get; };
        case "SpareTrack": { _addCrate = QGVAR(addCrateSpareTrack) call CBA_settings_fnc_get; };
        default {_addCrate = QGVAR(addCrateOther) call CBA_settings_fnc_get;};
    };

    if (_addCrate > ADD_CRATE_NOBODY) then {
        private _isAdmin = call EFUNC(common,isAdmin);
        private _isCurator = call EFUNC(common,isCurator);
        if (_addCrate == ADD_CRATE_ALL || (_addCrate == ADD_CRATE_ZEUS && (_isAdmin || _isCurator))) then {
            private _crateObjectClassnames = getArray (_crateConfig >> "cfgName");
            private _crateName = getText (_crateConfig >> "name");

            private _crateObjectClassname = _crateObjectClassnames select 0;
            private _inventory = getArray (_crateConfig >> "inventory");

            GVAR(crates) pushBack [_crateName, _crateObjectClassname, _inventory];
        };
    };
} forEach _cratesCfgs;
