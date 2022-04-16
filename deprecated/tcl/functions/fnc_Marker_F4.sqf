#include "script_component.hpp"

params ["_unit","_marker"];

private _side = (side _unit);

_marker setMarkerColor "colorBlue";

private ["_type","_vehicle","_displayName"];

while { alive _unit } do {
	if (visibleMap || GVAR(Multiplayer)) then {
		if (GVAR(Debug) select 3) then {
			if (_marker isEqualTo format ["%1", _unit] ) then {
				_unit = _unit;
			};
		};
		
		_type = "Switchable";
		
		if (_unit in (GVAR(Players) select 0) ) then {
			_type = "Playable";
		};
		
		if (isNull objectParent _unit) then {
			_displayName = "";
		}
		else {
			_vehicle = (vehicle _unit);
			
			_displayName = getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName");
		};
		
		_marker setMarkerText format ["%1 ( %2 ) %3 ( %4 ) %5", _unit, _side, _type, (behaviour _unit), _displayName];		
		_marker setMarkerDir (getDir _unit);		
		_marker setMarkerPos (getPos _unit);
	};
	
	sleep 1;
};

deleteMarker _marker;
