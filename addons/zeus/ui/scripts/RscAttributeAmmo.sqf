#include "script_component.hpp"

#define IDC_RSCATTRIBUTEAMMO_VALUE 14375

params["_mode", "_params", "_unit"];

switch _mode do {
    case "onLoad": {
        private _display = _params select 0;
        private _ctrlSlider = _display displayctrl IDC_RSCATTRIBUTEAMMO_VALUE;
        private _ammo = if (_unit isKindOf "Man") then {_unit call FUNC(getUnitAmmoDef)} else {_unit call FUNC(getVehicleAmmoDef)};
        _ctrlSlider sliderSetRange [0, 1];
        _ctrlSlider sliderSetSpeed [0.1, 0.3];
        _ctrlSlider slidersetposition _ammo;
        _ctrlSlider ctrlSetTooltip str _ammo;
        _ctrlSlider ctrlSetEventHandler["SliderPosChanged", "params [""_ctrl"", ""_value""]; _ctrl ctrlSetTooltip str _value;"];
        _ctrlSlider ctrlEnable alive _unit;
    };
    case "confirmed": {
        private _display = _params select 0;
        private _ctrlSlider = _display displayctrl IDC_RSCATTRIBUTEAMMO_VALUE;
        private _ammo = sliderposition _ctrlSlider;
        if (_unit isKindOf "Man") then {
            private _previousAmmo = _unit call FUNC(getUnitAmmoDef);
            if (abs(_previousAmmo - _ammo) < 0.01) exitWith {};
            private _curatorSelected = ["man"] call FUNC(getCuratorSelected);
            {
                if (local _x) then {
                    [_x, _ammo] call FUNC(setUnitAmmoDef);
                } else {
                    [_x, _ammo] remoteExecCall [QFUNC(setUnitAmmoDef), _x];
                };
            } forEach _curatorSelected;
        } else {
            private _previousAmmo = _unit call FUNC(getVehicleAmmoDef);
            if (abs(_previousAmmo - _ammo) < 0.01) exitWith {};
            private _curatorSelected = ["vehicle"] call FUNC(getCuratorSelected);
            {
                if (local _x) then {
                    [_x, _ammo] call FUNC(setVehicleAmmoDef);
                } else {
                    [_x, _ammo] remoteExecCall [QFUNC(setVehicleAmmoDef), _x];
                };
            } forEach _curatorSelected;
        };
    };
    case "onUnload": {};
};
