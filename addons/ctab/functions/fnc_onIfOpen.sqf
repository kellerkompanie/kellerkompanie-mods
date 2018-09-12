/*
	Name: keko_ctab_fnc_onIfOpen

	Author(s):
		Gundy

	Description:
		Handles dialog / display setup, called by "onLoad" event

	Parameters:
		0: Display

	Returns:
		BOOLEAN - TRUE

	Example:
		// open TAD display as main interface type
		[_dispaly] call keko_ctab_fnc_onIfOpen;
*/
#include "script_component.hpp"

private [];

uiNamespace setVariable [cTabIfOpen select 1,_this select 0];

[] call FUNC(updateInterface);

cTabIfOpenStart = false;

true
