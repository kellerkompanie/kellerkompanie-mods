#include "script_component.hpp"

params ["_item"];

_item = toLower _item;

private _advanced_bandages = ace_medical_treatment_advancedBandages > 0;
if (!_advanced_bandages && (_item in ["ace_quikclot","ace_fielddressing","ace_packingbandage"])) exitWith {"ace_elasticbandage"};

_item
