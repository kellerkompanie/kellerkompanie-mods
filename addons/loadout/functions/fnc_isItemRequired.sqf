#include "script_component.hpp"

params ["_item"];

_item = toLower _item;

if (!ace_medical_enableAdvancedWounds && _item == "ace_surgicalkit") exitWith {false};
if (ace_medical_healHitPointAfterAdvBandage && _item == "adv_acesplint_splint") exitWith {false};
if (!adv_aceSplint_enable && _item == "adv_acesplint_splint") exitWith {false};
if (!kat_aceAirway_enable && (_item == "kat_accuvac" || _item == "kat_guedel" || _item == "kat_larynx")) exitWith {false};

true
