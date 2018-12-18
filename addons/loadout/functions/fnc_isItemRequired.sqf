#include "script_component.hpp"

params ["_item"];

_item = toLower _item;

if (!ace_medical_enableAdvancedWounds && (_item in ["ace_surgicalkit"])) exitWith {false};
if (ace_medical_healHitPointAfterAdvBandage && (_item in ["adv_acesplint_splint"])) exitWith {false};
if (!adv_aceSplint_enable && (_item in ["adv_acesplint_splint"])) exitWith {false};
if (!kat_aceAirway_enable && (_item in ["kat_accuvac","kat_guedel","kat_larynx"])) exitWith {false};

true
