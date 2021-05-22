#include "script_component.hpp"

params ["_type"];

if (_type isEqualType "") then {
	if (GVAR(Debug) select 1) then {
		_this call FUNC(Marker_F2);
	};
}
else {
	if (GVAR(Debug) select 2) then {
		_this spawn FUNC(Marker_F3);
	};
};

True
	