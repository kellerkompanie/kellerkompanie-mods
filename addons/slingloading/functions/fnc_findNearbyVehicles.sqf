#include "script_component.hpp"

private _nearVehicles = [];
{
    _nearVehicles append  (player nearObjects [_x, 30]);
} forEach (missionNamespace getVariable [QGVAR(SupportedVehiclesOverride),GVAR(SupportedVehicles)]);

private _nearVehiclesWithRopes = [];
{
    private _vehicle = _x;
    {
        private _ropes = _vehicle getVariable [QGVAR(Ropes),[]];
        if(count _ropes > (_x select 0)) then {
            _ropes = _ropes select (_x select 0);
            {
                private _ends = ropeEndPosition _x;
                if(count _ends == 2) then {
                    private _end1 = _ends select 0;
                    private _end2 = _ends select 1;
                    private _playerPosAGL = ASLtoAGL getPosASL player;
                    if((_playerPosAGL distance _end1) < 5 || (_playerPosAGL distance _end2) < 5 ) then {
                        _nearVehiclesWithRopes =  _nearVehiclesWithRopes + [_vehicle];
                    }
                };
            } forEach _ropes;
        };
    } forEach ([_vehicle] call FUNC(getActiveRopes));
} forEach _nearVehicles;
_nearVehiclesWithRopes;
