#include "script_component.hpp"

params ["_item"];

_item = toLower _item;

if (!ace_medical_enableAdvancedWounds && (_item in ["ace_quikclot","ace_fielddressing","ace_packingbandage"])) exitWith {"ace_elasticbandage"};

_item
