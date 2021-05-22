#include "script_component.hpp"

params ["_group"];

private _return = False;
private _units = (units _group);

if (_units findIf { ( (alive _x) && ( ("ItemRadio" in items _x) || ("ItemRadio" in assigneditems _x) ) ) } > -1) then {_return = True};

_return
	