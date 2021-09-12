#include "script_component.hpp"

params["_logic"];

if (!isServer) exitWith {false};

private _replaceSide = _logic getVariable [QGVAR(ReplaceSide), 0];

switch (_replaceSide) do
{
    case 0: {
        private _objects = synchronizedObjects _logic;
        if ((count _objects) > 0) then {
            private _units = [];
            {
                if (_x isKindOf "Man") then {
                    _units pushBackUnique _x;
                    {
                        _units pushBackUnique _x;
                    } forEach (units group _x);                    
                };                
            } forEach _objects;
            {
                _x remoteExec [QFUNC(replaceMagsWithTracers), _x];
            } forEach _units;
        };
    };
    case 1;
    case 2;
    case 3;
    case 4: { 
        {
            _x remoteExec [QFUNC(replaceMagsWithTracers), _x];
        } forEach ([[], allUnits, units blufor, units independent, units opfor] select _replaceSide);
    };
};

true