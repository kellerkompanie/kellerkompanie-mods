#include "script_component.hpp"

private ["_array","_groups","_array","_count","_logic","_group","_units","_textUnit","_textGroup","_string"];

_array = _this;

private _header = _array call FUNC(Header_F2);

while { True } do {
	_array = GVAR(Logic) select 0;
	
	if (count _array > 0) then {
		_groups = [];		
		_count = 0;
		
		for "_count" from _count to (count _array - 1) do {
			_logic = (_array select _count);			
			_group = (_logic getVariable QGVAR(Group));
			
			if (_group == group player) exitWith {
				_groups = (_logic getVariable QGVAR(Reinforcement));
			};
		};
		
		if (count _groups > 0) then {
			_units = [];			
			{_units append units _x} forEach _groups;			
			_textUnit = "Unit";
			
			if (count _units > 1) then {
				_textUnit = "Units";
			};
			
			_textGroup = "Group";
			
			if (count _groups > 1) then	{
				_textGroup = "Groups";
			};
			
			_string = format ["%1<t align='center'>Currently there are <br/><t size='1.3' color='#ff0000'>%2</t> <t size='1.3' color='#bebebe'>A.I. %3</t><br/>which holds<br/><t size='1.3' color='#ff0000'>%4</t> <t size='1.3' color='#bebebe'>A.I. %5</t><br/>trying to kill you!", _header, count _groups, _textGroup, count _units, _textUnit];
			hint parseText _string;			
			sleep 10;			
			hint "";
		};
	};
	
	sleep 5;
};
