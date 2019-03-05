#include "script_component.hpp"

params ["_logic"];
if (!local _logic) exitWith {};

private _target = attachedTo _logic;
TRACE_3("moduleLimitWounds",_logic,_target,typeOf _target);

switch (true) do {
    case (isNull _target): {
        ERROR("_target is null");
        [objNull, "nothing selected"] call bis_fnc_showCuratorFeedbackMessage;
    };
    case (!alive _target): {
        ERROR("_target is not alive");
        [objNull, "place on not destroyed"] call bis_fnc_showCuratorFeedbackMessage;
    };
    default {
        // Get the open wounds for this unit
        private _numOpenWounds = _target call FUNC(getNumOpenWounds);

        if(_numOpenWounds > 0) then {
            _target call FUNC(applyTourniquets);
        };

        while {_numOpenWounds > 4} do {
            _target call FUNC(bandageRandomWound);
            _numOpenWounds = _target call FUNC(getNumOpenWounds);
        };
    };
};

deleteVehicle _logic;
