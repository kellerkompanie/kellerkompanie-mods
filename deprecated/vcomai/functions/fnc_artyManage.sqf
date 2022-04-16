#include "script_component.hpp"
/*
	Author: Genesis

	Description:
		Scans group for artillery pieces, found artillery is added to keko_vcomai_ARTYLST.

	Parameter(s):
		0: GROUP - group to scan for artillery pieces

	Returns:
		NOTHING
*/

private _ArtyGroupBool = false;

{
	private _veh = (vehicle _x);
	private _num = GVAR(ARTYLST) findIf {_x isEqualTo _veh};
	if (_num isEqualTo -1) then	{
		private _class = typeOf _veh;
		if !(isNil ("_class")) then {
			private _artyChk = getNumber(configfile/"CfgVehicles"/_class/"artilleryScanner");
			if (_artyChk isEqualTo 1) then {
				GVAR(ARTYLST) pushback _veh;
				_ArtyGroupBool = true;
			};
		};
	}
	else {
		_ArtyGroupBool = true;
	};
} foreach (units _this);

_ArtyGroupBool