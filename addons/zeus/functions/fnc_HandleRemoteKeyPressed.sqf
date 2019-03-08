#include "script_component.hpp"

params ["_ctrl", "_key", "_shiftKey", "_ctrlKey", "_altKey"];
private _handled = false;

switch (true) do
{
    case (_key in actionKeys "Chat"):
    {
        // if remote control unit and open chat => open controlled unit's chat
        if (!isNil "bis_fnc_moduleRemoteControl_unit") then
        {
            [bis_fnc_moduleRemoteControl_unit] spawn FUNC(chatter);
            _handled = true;
        };
    };
    case (_key in actionKeys "CuratorInterface"):
    {
        // if remote control unit and open chat => open controlled unit's chat
        if (!isNil "bis_fnc_moduleRemoteControl_unit" and {not isNil {bis_fnc_moduleRemoteControl_unit getVariable QGVAR(switchUnit_data)}}) then
        {
            [] call FUNC(switchUnit_exit);
            _handled = true;
        };
    };
};
_handled
