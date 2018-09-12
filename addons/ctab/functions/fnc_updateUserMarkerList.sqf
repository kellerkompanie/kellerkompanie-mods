/*
	Name: keko_ctab_fnc_updateUserMarkerList

	Author(s):
		Gundy

	Description:
		Update lists of user markers by finding extracting all the user markers with the right encryption key and then translate the marker data in to a format so that it can be drawn quicker.

	Parameters:
		NONE

	Returns:
		BOOLEAN - Always TRUE

	Example:
		call keko_ctab_fnc_updateUserMarkerList;
*/
#include "script_component.hpp"

private ["_playerEncryptionKey","_tempList"];

_playerEncryptionKey = call FUNC(getPlayerEncryptionKey);

_tempList = [];
{
	0 = _tempList pushBack [_x select 0,_x select 1 call FUNC(translateUserMarker)];
} count ([cTab_userMarkerLists,_playerEncryptionKey,[]] call FUNC(getFromPairs));

cTabUserMarkerList = _tempList;

true
