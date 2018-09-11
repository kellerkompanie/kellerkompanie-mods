if (dialog) exitwith {closedialog 0};

_txt = [];

if (speed (vehicle player) > 0.1) then
{
	_txt pushback ["Eject", [1,1], 1, {player action ['Eject', vehicle player]},[]];
} else
{
	_txt pushback ["Getout", [1,1], 1, {player action ['Getout', vehicle player]},[]];
};

	 
_txt pushback [(localize "str_action_gear"), [1,1], 1, {player action ['Gear', vehicle player]},[]];	
 

["babe_menuAd", 7, 15, 0.1, 0.1, _txt, [], {}] call babe_int_fnc_menuAd;