#include "script_component.hpp"

private ["_vehicle","_sounds","_delays","_count","_sound","_delay"];

_vehicle = _this select 0;

if ((floor (random 100) < 50)) then {
	_sounds = ["West_Air_v56a","West_Air_v57a","West_Air_v58a","West_Air_v59a","West_Air_v60a","West_Air_v61a","West_Air_v62a","West_Air_v63a","West_Air_v64a","West_Air_v65a","West_Air_v66a","West_Air_v67a","West_Air_v68a","West_Air_v69a","West_Air_v70a","West_Air_v71a","West_Air_v72a","West_Air_v73a","West_Air_v74a","West_Air_v75a","West_Air_v76a","West_Air_v77a","West_Air_v78a","West_Air_v79a","West_Air_v80a","West_Air_v81a","West_Air_v82a","West_Air_v83a"];
	_delays = [4.76, 3.4, 2.12, 2.56, 4.76, 1.5, 4.84, 2.16, 2.48, 4.4, 5.56, 2.36, 1.92, 2.72, 3.48, 5.56, 2.72, 2.92, 1.92, 2.24, 5.36, 4.36, 5.32, 4.48, 4.32, 5.12, 3.76, 10.96];
}
else {
	_sounds = ["West_Air_v84a","West_Air_v85a","West_Air_v86a","West_Air_v87a","West_Air_v88a","West_Air_v89a","West_Air_v90a","West_Air_v91a","West_Air_v92a","West_Air_v93a","West_Air_v94a","West_Air_v95a","West_Air_v96a"];
	_delays = [2.24, 5.6, 11.3, 2.6, 2.12, 1.5, 2.84, 4.56, 3.72, 4.8, 3.84, 5.2, 3.2];
};

_count = 0;

while { (alive _vehicle) && { (_vehicle == vehicle player) } && { (isEngineOn _vehicle) } && { (_count < count _sounds) } && { (GVAR(Chatter) select 0) } } do {
	0 fadeMusic (GVAR(Chatter) select 1);
	_sound = (_sounds select _count);
	playMusic _sound;
	_delay = (_delays select _count);
	sleep _delay;
	_count = _count + 1;
};
