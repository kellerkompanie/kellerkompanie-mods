#include "script_component.hpp"

params ["_unit"];

if (GVAR(Server)) then {
	if (_unit in (GVAR(Players) select 0) ) then {
		if (GVAR(Feature) select 22) then {
			_this call FUNC(EH_Fired_F2);
		};
		
		if (GVAR(Feature) select 27) then {
			_this call FUNC(EH_Fired_F3);
		};
	};
};

if (GVAR(Dedicated)) exitWith {};

private _ammo = _this select 4;

if (_ammo isKindOf "BulletBase") then {
	if ((GVAR(FX) select 0) && { (floor (random 100) < (GVAR(FX) select 1)) } ) then {
		if (_unit == player) exitWith {};
		
		if ( (_unit distance player < 300) && { (count (GVAR(Whiz_FX) select 0) < 3) } ) then {
			private _bullet = _this select 6;
			
			[_unit, _bullet] call FUNC(Whiz_FX_F1);
		};
	};
	
	private _bullet = _this select 6;
}
else {
	if ( (GVAR(FX) select 2) && { (_ammo isKindOf "ShellBase") } && { (floor (random 100) < (GVAR(FX) select 3) ) } ) then {
		private _shell = _this select 6;
		
		[_shell] spawn FUNC(Whiz_FX_F3);
	};
};

True
