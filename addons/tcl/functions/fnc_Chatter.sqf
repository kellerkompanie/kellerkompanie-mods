#include "script_component.hpp"

private ["_index","_vehicle","_turrets","_side","_string","_delay"];

_isAir = {
	( (_vehicle isKindOf "Air") && (isEngineOn _vehicle) && (GVAR(Chatter) select 0) && (_side == 1) )
};

_isLand = {
	( ( (_vehicle isKindOf "Car") || (_vehicle isKindOf "Tank") ) && { (count _turrets > 0) } && { (isEngineOn _vehicle) } && { (GVAR(Chatter) select 0) } )
};

waitUntil { !(isNull (finddisplay 46) ) };

_index = (findDisplay 46) displayAddEventHandler ["KeyDown", QUOTE(_this call FUNC(Chatter_F2))];

while { GVAR(FX) select 6 } do {
	if (player != vehicle player) then {
		_vehicle = (vehicle player);		
		_turrets = (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "turrets");		
		_side = getNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "side");
		
		switch (True) do {
			case (call _isAir): {
				[_vehicle, (GVAR(Chatter) select 2), True] call FUNC(Chatter_F3);
				
				while { (call _isAir) } do {
					if (floor (random 100) < 75) then {
						0 fadeMusic (GVAR(Chatter) select 1);
						_string = selectRandom ((GVAR(Resource) select 2) + (GVAR(Resource) select 5));
						playMusic _string;
					}
					else {
						[_vehicle] call FUNC(Chatter_F1);
					};

					_delay = 30 - (random 30); 
					while { ( (_delay > 0) && (_vehicle == vehicle player) ) } do {
						_delay = _delay - 1;
						sleep 1
					}; 
					_vehicle = [_vehicle] call FUNC(Chatter_F4);
				};
			};

			case (call _isLand): {
				[_vehicle, GVAR(Chatter) select 2, True] call FUNC(Chatter_F3);

				while { (call _isLand) } do	{
					0 fadeMusic (GVAR(Chatter) select 1);

					switch (_side) do {
						case 0:	{
							_string = selectRandom (GVAR(Resource) select 4);
						};
						case 1:	{
							_string = selectRandom ((GVAR(Resource) select 3) + (GVAR(Resource) select 5));
						};
						case 2: {
							_string = selectRandom (GVAR(Resource) select 4);
						};
					};

					playMusic _string;
					_delay = 30 - (random 30); 
					while { ( (_delay > 0) && (_vehicle == vehicle player) ) } do {
						_delay = _delay - 1; 
						sleep 1
					}; 
					_vehicle = [_vehicle] call FUNC(Chatter_F4);
				};
			};
		};
	};

	sleep 5;
};

(findDisplay 46) displayRemoveEventHandler ["KeyDown", _index];