#include "script_component.hpp"

params ["_canFireSalvo", "_reloadTimeRemaining", "_aquisitionGlobalModifier", "_payloadInformation"];

diag_log text format ["clientReceivePermissionToFire", _canFireSalvo, _reloadTimeRemaining, _aquisitionGlobalModifier, _payloadInformation];

GVAR(JtacAvailable) = false;

if( _canFireSalvo ) then {
    private _counterSleepTime = (_payloadInformation select 0) * _aquisitionGlobalModifier;
    private _reloadDelay = _payloadInformation select 1;
    private _counter = 0;
    private _targetAcquired = true;
    private _laserLocation = [0,0,0];
    while {_counter < 100 } do {
        private ["_laserTarget", "_currentLaserLocation", "_designatorName"];
        _counter = _counter + 1 ;

        _laserTarget = objNull;
        _designatorName = "Laser Designator";
        _laserTarget = laserTarget player;

        hint format ["%1", laserTarget (getConnectedUAV player)];

        if(isNull _laserTarget && !isNull laserTarget (getConnectedUAV player)) then {
            _laserTarget = laserTarget (getConnectedUAV player);
            _designatorName = "Connected UAV";
        };

        if(isNull _laserTarget && !isNull laserTarget (vehicle player)) then {
            _laserTarget = laserTarget (vehicle player);
            _designatorName = "Your Vehicle";
        };

        hintSilent format["Using %1\nAcquiring target: %2%3", _designatorName, _counter, "%"];

        if(isNull _laserTarget) exitwith{_targetAcquired = false; };
        _currentLaserLocation = getPosASL _laserTarget;
        _laserLocation = [ (_laserLocation select 0) + (_currentLaserLocation select 0),
                            (_laserLocation select 1) + (_currentLaserLocation select 1),
                            (_laserLocation select 2) + (_currentLaserLocation select 2)
                        ];
        sleep _counterSleepTime;
    };

    if(_targetAcquired) then {
        _laserLocation = [ (_laserLocation select 0) / _counter,
                        (_laserLocation select 1) / _counter,
                        (_laserLocation select 2) / _counter
        ];
        hint "Rounds inbound, take cover! \n(It's safe to turn your laser off.)";
        private _firemission = format[(_payloadInformation select 2), _laserLocation];
        [player, _firemission, _reloadDelay] remoteExec [QFUNC(serverPerformFireMission), 2, false];
    } else {
        hint format["Laser turned off. Targeting canceled"];
    };

    GVAR(JtacAvailable) = true;
} else {
    hint format ["Cannot fire! The guns need another %1 seconds to reload!", _reloadTimeRemaining];
    GVAR(JtacAvailable) = true;
};
