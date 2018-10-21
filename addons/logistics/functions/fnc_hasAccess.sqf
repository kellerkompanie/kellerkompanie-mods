#include "script_component.hpp"

params ["_player"];

private _rank = rankId _player;
private _canAccess = false;

switch (GVAR(accessLevel)) do {
	case ACCESS_EVERYONE: {
		_canAccess = true;
	};
	case ACCESS_CORPORAL: {
		_canAccess = _rank > 0;
	};
	case ACCESS_SERGEANT: {
		_canAccess = _rank > 1;
	};
	case ACCESS_LIEUTENANT: {
		_canAccess = _rank > 2;
	};
	case ACCESS_ENGINEERS: {
		_canAccess = _player isKindOf QEGVAR(faction_generic,blufor_engineer) || _player isKindOf QEGVAR(faction_generic,blufor_engineer) || _player isKindOf QEGVAR(faction_generic,blufor_engineer) || (_player getVariable ["ACE_isEngineer", 0] > 0);
	};
	case ACCESS_ZEUS: {
		_canAccess = false;
	};
};

// add access for Zeus in any case
if (player isKindOf QEGVAR(faction_generic,blufor_command) || player isKindOf QEGVAR(faction_generic,opfor_command) || player isKindOf QEGVAR(faction_generic,indfor_command)) then {
	_canAccess = true;
};

if (!_canAccess) then {
	"Your rank cannot access logistics." remoteExec ["hintC", _player];
};

_canAccess
