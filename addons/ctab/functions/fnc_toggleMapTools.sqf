/*
 	Name: keko_ctab_fnc_toggleMapTools

 	Author(s):
		Gundy

 	Description:
		Toggle drawing of map tools


	Parameters:
		0: STRING - Name of uiNamespace variable for interface

 	Returns:
		BOOLEAN - Draw map tools

 	Example:
		cTabDrawMapTools = call keko_ctab_fnc_toggleMapTools;
*/
#include "script_component.hpp"

private ["_displayName","_currentMapTools","_newMapTools"];

_displayName = _this select 0;
_currentMapTools = [_displayName,"mapTools"] call FUNC(getSettings);
_newMapTools = if (_currentMapTools) then {false} else {true};
[_displayName,[["mapTools",_newMapTools]]] call FUNC(setSettings);
_newMapTools
