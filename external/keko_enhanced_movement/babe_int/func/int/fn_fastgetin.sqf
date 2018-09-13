params ["_obj"];


if (vehicle player == player) exitwith
{
	if (locked _obj > 1) exitwith {};
	
	if (_obj isKindOf "Air" or _obj isKindOf "StaticWeapon") then
	{	
		player action ["getOut", _obj];
		if (player == driver _obj) then {_obj engineOn false};
	} else
	{
		player action ["Eject", _obj];
		if (player == driver _obj) then {_obj engineOn false};
	};
};

if (locked _obj > 1) exitwith {};

if (isNull driver _obj) exitwith 
{
	player action ["GetInDriver", _obj];
	player assignasdriver _obj;
};


if (isNull gunner _obj) exitwith 
{
	player action ["GetInGunner", _obj];
	player assignasgunner _obj;
};

player action ["GetInCargo", _obj];
player assignascargo _obj;
