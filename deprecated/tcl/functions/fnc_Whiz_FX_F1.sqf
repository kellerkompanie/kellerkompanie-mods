#include "script_component.hpp"

params ["_unit","_bullet"];
	
private _direction = [_unit, player] call FUNC(Rel_Dir_To_F);

if ( (_direction > 340) || (_direction < 20) ) then {
	(GVAR(Whiz_FX) select 0) pushBack _bullet;
	
	private _array = (GVAR(Whiz_FX) select 1);	
	private _detector = (_array select 0);
	
	(GVAR(Whiz_FX) select 1) deleteAt ((GVAR(Whiz_FX) select 1) find _detector);
	[_bullet, _detector] spawn FUNC(Whiz_FX_F2);
};

True
	