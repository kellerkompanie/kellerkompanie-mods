/*
	Name: keko_ctab_fnc_getPlayerEncryptionKey

	Author(s):
		Gundy

	Description:
		Return the used encryption key for the currently controlled unit

	Parameters:
		NONE

	Returns:
		STRING - Encryption key

	Example:
		_playerEncryptionKey = call keko_ctab_fnc_getPlayerEncryptionKey;
*/
#include "script_component.hpp"

missionNamespace getVariable [format ["cTab_encryptionKey_%1",side cTab_player],""];
