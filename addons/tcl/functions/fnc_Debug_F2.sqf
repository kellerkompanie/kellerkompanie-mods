#include "script_component.hpp"

_this spawn {
	private ["_array"];

	_array = _this;

	private _header = _array call FUNC(Header_F2);
	private _text = format ["<t color='#bebebe'>Server:</t> %1<br/><t color='#bebebe'>Multiplayer:</t> %2<br/><t color='#bebebe'>Dedicated:</t> %3", GVAR(Server), GVAR(Multiplayer), GVAR(Dedicated) ];
	private ["_object","_group","_string","_enemy","_knowledge"];

	while { True } do {
		_object = cursorTarget;
		
		if (alive _object) then	{
			_group = (group _object);
			
			if (isNull _group) then {
				_string = format ["%1<t align='center'><t color='#bebebe'>Object:</t> %2<br/><t color='#bebebe'>Type:</t> %3<br/><t color='#bebebe'>Distance:</t> %4<br/>%5", _header, _object, (typeOf _object), (player distance _object), _text];
			}
			else {
				_knowledge = 0;			
				_enemy = objNull;
				
				if (_group in (GVAR(Groups) select 0) ) then {
					_enemy = (_group getVariable QGVAR(Enemy));
					
					if (alive _enemy) then {
						if (_object targetKnowledge _enemy select 0) then {
							_knowledge = (_object knowsAbout vehicle _enemy);
						};
					}
					else {
						_enemy = "Unknown";
					};			
				};
				
				_string = format ["%1<t align='center'><t color='#bebebe'>Group:</t> %2<br/><t color='#bebebe'>Unit:</t> %3<br/><t color='#bebebe'>Skill:</t> %4<br/><t color='#bebebe'>Enemy:</t> %5<br/><t color='#bebebe'>Knowledge:</t> %6<br/><t color='#bebebe'>Behaviour:</t> %7<br/><t color='#bebebe'>Combat Mode:</t> %8<br/><t color='#bebebe'>Speed Mode:</t> %9<br/><t color='#bebebe'>Type:</t> %10<br/><t color='#bebebe'>Distance:</t> %11<br/></t>%12", _header, _group, _object, (skill _object), _enemy, _knowledge, (behaviour _object), (combatMode _object), (speedMode _object), (typeOf _object), (player distance _object), _text];
			};
			
			hint parseText _string;
		};
		
		sleep 1;
	};
};
