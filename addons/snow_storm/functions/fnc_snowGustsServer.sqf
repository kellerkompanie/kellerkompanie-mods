#include "script_component.hpp"

params ["_effect_on_objects"];

while {GVAR(stormActive)} do {
	GVAR(snow_gust) = selectrandom [[QGVAR(rafala_1),12],[QGVAR(rafala_2),8.5],[QGVAR(rafala_3),17],[QGVAR(rafala_5),13],[QGVAR(rafala_6),16],[QGVAR(rafala_7),13.5]]; 
	publicVariable QGVAR(snow_gust);
	GVAR(vit_x) = (selectrandom [1,-1]) * round(2 + random 5); 
	GVAR(vit_y) = (selectrandom [1,-1]) * round(2 + random 5);
	publicVariable QGVAR(vit_x);
	publicVariable QGVAR(vit_y);
	if (_effect_on_objects) then {
		[GVAR(vit_x), GVAR(vit_y)] spawn FUNC(blowObjects);
	};
	sleep 60;
};