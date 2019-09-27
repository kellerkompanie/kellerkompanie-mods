#include "script_component.hpp"

private _thirst = player getVariable ["acex_field_rations_thirst", 0];
private _thirstQuenched = 20;
player setVariable ["acex_field_rations_thirst", (_thirst - _thirstQuenched) max 0];

[] spawn {
    for "_i" from 0 to 5 do {
        ace_advanced_fatigue_anReserve = ace_advanced_fatigue_anReserve + 200;
        sleep 5;
    };
};
