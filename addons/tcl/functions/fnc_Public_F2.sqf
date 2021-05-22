#include "script_component.hpp"

params ["_object"];

if (_object isEqualType grpNull) then {
	private _group = _object;	
	(GVAR(Zeus) select 0) pushBack _group;
}
else {
	private _group = _this select 1;
	
	if (_group in (GVAR(Zeus) select 1) ) then {
		_this call FUNC(EH_Zeus_F3);
	}
	else {
		_this call FUNC(EH_Zeus_F2);
	};
};

True
