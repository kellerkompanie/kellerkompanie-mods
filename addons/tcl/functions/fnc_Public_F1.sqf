#include "script_component.hpp"

params ["_object"];

if (_object isKindOf "Man") then {
	[_object] spawn FUNC(Fire_FX_F1);
}
else {
	[_object] spawn FUNC(Whiz_FX_F3);
};

True
