#include "script_component.hpp"

if (GVAR(loadoutOnSpawn)) then {
	// Legacy code
	if( (player isKindOf "keko_blufor_soldier") || (player isKindOf "keko_opfor_soldier") || (player isKindOf "keko_indfor_soldier") ) then {
		private _playerObjectClass = typeOf player;
		private _loadoutDummyClass = getText (configFile >> "CfgVehicles" >> _playerObjectClass >> "loadoutDummy");
		[player, GVAR(loadoutFaction), _loadoutDummyClass] call FUNC(giveLoadout);
	};

	if( (player isKindOf QEGVAR(faction_generic,blufor_soldier)) || (player isKindOf QEGVAR(faction_generic,opfor_soldier)) || (player isKindOf QEGVAR(faction_generic,indfor_soldier)) ) then {
		private _playerObjectClass = typeOf player;
		private _loadoutDummyClass = getText (configFile >> "CfgVehicles" >> _playerObjectClass >> "loadoutDummy");
		[player, GVAR(loadoutFaction), _loadoutDummyClass] call FUNC(giveLoadout);
	};
};
