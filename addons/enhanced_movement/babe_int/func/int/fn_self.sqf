if (dialog) exitwith {closedialog 0};

if ((profilenamespace getVariable "babe_em_settings_selfinteraction") select 0 == 2) exitwith {};

_weapon = currentWeapon player;

babe_cidx = 0;

player action ["SWITCHWEAPON", player, player, babe_cidx];

while{(currentWeapon player) != _weapon} do 
{
	babe_cidx = babe_cidx + 1; 
	player action ["SWITCHWEAPON", player, player, babe_cidx];
};

_weapon = primaryWeapon player;

babe_primidx = 0;

player action ["SWITCHWEAPON", player, player, babe_primidx];

while{(currentWeapon player) != _weapon} do 
{
	babe_primidx = babe_primidx + 1; 
	player action ["SWITCHWEAPON", player, player, babe_primidx];
};

_weapon = handgunWeapon player;

babe_hidx = 0;

player action ["SWITCHWEAPON", player, player, babe_hidx];

while{(currentWeapon player) != _weapon} do 
{
	babe_hidx = babe_hidx + 1; 
	player action ["SWITCHWEAPON", player, player, babe_hidx];
};

_weapon = secondaryWeapon player;

babe_lidx = 0;

player action ["SWITCHWEAPON", player, player, babe_lidx];

while{(currentWeapon player) != _weapon} do 
{
	babe_lidx = babe_lidx + 1; 
	player action ["SWITCHWEAPON", player, player, babe_lidx];
};

player action ["SWITCHWEAPON", player, player, babe_cidx];


_txt = [];

if (primaryweapon player != "" && currentweapon player != primaryweapon player) then
{
	_txt pushback ["Primaryweapon", [], {player action ['SwitchWeapon', player, player, babe_primidx]}, [], {true}]; 
};
if (secondaryweapon player != "" && currentweapon player != secondaryweapon player) then
{
	_txt pushback ["Secondaryweapon", [], {player action ['SwitchWeapon', player, player, babe_lidx]}, [], {true}];
};
if (handgunweapon player != ""  && currentweapon player != handgunweapon player) then
{
	_txt pushback ["Sidearm", [], {player action ['SwitchWeapon', player, player, babe_hidx]}, [], {true}];	 
};
if (currentweapon player != "") then
{
	_txt pushback ["Hands", [], {player action ['SwitchWeapon', player, player, 100]}, [], {true}];	 
};


[7, 15, 0.1, 0.1, _txt, [], {}] call babe_int_fnc_menuAd;