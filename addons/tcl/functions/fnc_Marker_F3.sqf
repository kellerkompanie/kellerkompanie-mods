#include "script_component.hpp"

params ["_unit"];

private _type = nil;
private _side = (side _unit);

if (GVAR(Debug) select 3) then {_type = _unit} else {if (_unit == leader _unit) then {_type = (group _unit) } };

if (isNil "_type") exitWith {};

private _marker = [ [_type, time], (getPos _unit), "Icon", [1,1], "mil_triangle", "colorYellow"] call FUNC(Create_Marker_F);
private _array = (GVAR(Players) select 0);

if (_unit in _array) exitWith {
	[_unit, _marker] spawn FUNC(Marker_F4);
};

private ["_group","_color","_vehicle","_displayName","_unitType","_groupType","_array","_enemy","_string"];

while { alive _unit } do {
	if ( visibleMap || GVAR(Multiplayer) ) then {
		_group = (group _unit);
		
		if (leader _unit in _array) exitWith {
			_type = "A.I.";			
			_marker setMarkerPos (getPos _unit);			
			_marker setMarkerDir (getDir _unit);			
			_marker setMarkerText format ["%1 ( %2 ) %3", _unit, _side, _type];
		};
		
		if (_group in (GVAR(Disabled) select 0) ) exitWith {
			_unit = objNull;
		};
		
		_color = "colorYellow";
		
		
		_unitType = "I.D.L.E.";
		
		if (fleeing _unit) exitWith {
			_unitType = "Fleeing"; _color = "colorWhite";
		};
		
		if (captive _unit) exitWith {
			_unitType = "Captive"; _color = "colorWhite";
		};
		
		if (side _unit == CIVILIAN) exitWith {
			_unitType = "Civilian"; _color = "colorWhite";
		};
		
		if (_group in (GVAR(Artillery) select 0) ) exitWith {
			_unitType = "Artillery"; _color = "colorGreen";
		};
		
		if (_unit in (GVAR(Heal) select 0) ) exitWith {
			_unitType = "( Heal )"; _color = "colorGreen";
		};
		
		if (_unit in (GVAR(Rearm) select 0) ) exitWith {
			_unitType = "( Rearm )"; _color = "colorGreen";
		};
		
		if (_unit in (GVAR(Static_Weapon) select 0) ) exitWith {
			_unitType = "( Static Weapon )"; _color = "colorGreen";
		};
		
		if (_unit in (GVAR(House_Search) select 0) ) exitWith {
			_unitType = "( House Search )"; _color = "colorGreen";
		};
		
		if (_group in (GVAR(Suppressed) select 0) ) exitWith {
			_unitType = "( Suppressed )"; _color = "colorGreen";
		};
		
		if (_unit in (GVAR(Take_Cover) select 0) ) exitWith {
			_unitType = "( Take Cover )"; _color = "colorGreen";
			
			if (_unit in (GVAR(Flanking) select 1) ) exitWith {
				_unitType = "( Flanking )"; _color = "colorGreen";
			};
			
			if (_unit in (GVAR(Flanking) select 2) ) exitWith {
				_unitType = "( Flanking )"; _color = "colorBlue";
			};
		};
		
		if (_unit in (GVAR(Regroup) select 0) ) exitWith {
			_unitType = "( Regroup )"; _color = "ColorBlue";
		};
		
		if (_group in (GVAR(Advancing) select 0) ) exitWith {
			_unitType = "Advancing";
		};
		
		if (_group in (GVAR(Zeus) select 1) ) exitWith {
			_unitType = "Zeus";
		};
		
		if (_group in (GVAR(Behaviour) select 0) ) exitWith {
			_unitType = "Behaviour";
		};
		
		if (_group in (GVAR(Waiting) select 0) ) exitWith {
			_unitType = "Waiting";
		};
		
		if (_group in (GVAR(Sneaking) select 0) ) exitWith {
			_unitType = "Sneaking";
		};
		
		if (_group in (GVAR(Join) select 0) ) exitWith {
			_unitType = "Joined";
		};
		
		if (_group in (GVAR(Enhanced) select 0) ) exitWith {
			_unitType = "Enhanced";
		};
		
		if (_group in (GVAR(Freeze) select 0) ) exitWith {
			_unitType = "Freeze";
		};
		
		if (_group in (GVAR(Default) select 0) ) exitWith {
			_unitType = "Default";
		};
		
		if (_group in (GVAR(Reinforcement) select 1) ) exitWith {
			_unitType = "Reinforcement";
		};
		
		if (_group in (GVAR(Reinforcement) select 0) ) exitWith {
			if (_group in (GVAR(Request) select 0) ) then {
				_unitType = "Request";
			}
			else {
				_unitType = "Requested";
			};
		};
		
		if (_unit in (GVAR(Watch) select 0) ) exitWith {
			_unitType = "( Watch )"; _color = "colorGreen";
		};
		
		if (_group in (GVAR(Garrison) select 0) ) exitWith {
			_unitType = "Garrison";
		};
				
		_groupType = "Combat";
		
		if (_group in (GVAR(Location) select 0) ) exitWith {
			private _string = ["Location"]; _color = "colorGreen";
			
			_array = (_group getVariable QGVAR(Location));				
			_array = _array - [_group];
			
			if (count _array > 0) then {
				private _count = (count _array);					
				_string pushBack format ["%1", _count];
			};
			
			if (_group in (GVAR(Hold) select 0) ) then {
				_string pushBack "Hold";					
				_color = "colorGreen";
			};
			
			if (_group in (GVAR(Defend) select 0) ) then {
				_string pushBack "Defend";							
				_color = "colorGreen";
			};
			
			_groupType = _string joinString " > ";
		};
		
		if (_group in (GVAR(Hold) select 0) ) exitWith {
			_groupType = "Hold"; 
			_color = "colorGreen";
		};
		
		if (_group in (GVAR(Defend) select 0) ) exitWith {
			_groupType = "Defend"; 
			_color = "colorGreen";
		};
		
		if (_group in (GVAR(Custom) select 0) ) exitWith {
			_groupType = "Custom";
		};
				
		if (_unit == leader _unit) then {
			_color = "colorRed";
		};
		
		_enemy = _group getVariable QGVAR(Enemy);
		
		if ( (alive _enemy) && (_unit knowsAbout vehicle _enemy > 0) ) then {
			_enemy = _enemy;
		}
		else {
			_enemy = "Unknown";
		};
		
		_markerText = _marker;
		
		if (isNull objectParent _unit) then {
			_displayName = "";
		}
		else {
			_vehicle = (vehicle _unit);
			
			if (_unit == driver _vehicle) then {
				_color = "colorWhite";
			}
			else {
				if (_unit == commander _vehicle) then {
					_color = "colorBlue";
				}
				else {
					if (_unit == gunner _vehicle) then {
						_color = "colorGreen";
					};
				};
			};
			
			_displayName = getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName");
		};
		
		if (_markerText isEqualTo "") then {
			_marker setMarkerText _markerText;
		}
		else {
			if (_unit == leader _unit) then {
				_string = format ["%1 %2 %3 %4 ( %5 %6 %7 %8 ) %9 %10 %11", _unitType, _groupType, _side, _unit, (behaviour _unit), (combatMode _unit), (speedMode _unit), (formation _unit), _enemy, (assignedTarget _unit), (unitPos _unit) ];
			}
			else {
				_string = format ["%1 %2 %3 %4 %5 %6", _unitType, _side, _unit, _enemy, (assignedTarget _unit), (unitPos _unit) ];
			};
			
			if (currentCommand _unit isEqualTo "") then {
				_string = _string + format [" %1", _displayName];
			}
			else {
				_string = _string + format [" %1 %2", (currentCommand _unit), _displayName];
			};
			
			if (False) then {
				if (_unit == leader _unit) then {
					_string = format ["%1 %2 %3 %4 ( %5 %6 %7 %8 )", _unitType, _groupType, _side, _unit, (behaviour _unit), (combatMode _unit), (speedMode _unit), (formation _unit) ];
				}
				else {
					_string = format ["%1 %2 %3 %4", _unitType, _side, _unit];
				};
				
				_string = _string + format ["> %1", (expectedDestination _unit) ];	

				if (currentCommand _unit isEqualTo "") exitWith {};		

				_string = _string + format [" %1 > %2", (unitPos _unit), (currentCommand _unit) ];
			};
			
			if (unitReady _unit) then {
				_string = _string + " > Ready";
			};
			
			_marker setMarkerText _string;
		};
		
		_marker setMarkerDir (getDir _unit);			
		_marker setMarkerColor _color;		
		_marker setMarkerPos (getPos _unit);
	};
	
	sleep 1;
};

_marker setMarkerColor "colorGrey";
_marker setMarkerText format ["%1 %2 ( %3:%4 )", _unit, _side, floor (time / 60), round (time % 60) ];

if (_type isEqualType grpNull) then {
	{ 
		[_x] spawn FUNC(Marker_F3) 
	} forEach units _unit;
};
