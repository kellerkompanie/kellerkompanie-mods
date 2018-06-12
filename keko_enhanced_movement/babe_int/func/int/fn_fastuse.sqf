params ["_obj"];


_tb = getNumber (configFile >> "CfgVehicles" >> typeof _obj >> "transportmaxbackpacks");
_tm = getNumber (configFile >> "CfgVehicles" >> typeof _obj >> "transportmaxmagazines");
_tw = getNumber (configFile >> "CfgVehicles" >> typeof _obj >> "transportmaxweapons");

if 
(
	_tb + _tm + _tw > 0 or 
	{
		_obj isKindOf "CaManBase" && 
		(
			!alive _obj or 
			(_obj in (units group player) && !isPlayer _obj)
		)
	}
) then 
{
	player action ["Gear", _obj];
};

_anms = animationNames _obj;

_range = 1.55;

if (cameraView == "External") then
{
	_range = _range + ((positioncameratoworld [0,0,0]) distance (player modeltoworld(player selectionposition "head")));
};

_posa = positionCameraToWorld [0,0,0];
_posb = positionCameraToWorld [0,0,_range];

_int = ([_obj, "GEOM"] intersect [_posa, _posb]) select 0 select 0;

if (isNil "_int") then
{
	_int = ([_obj, "FIRE"] intersect [_posa, _posb]) select 0 select 0;
};


if (!IsNil "_int") then 
{
	_locked = !isNil {_obj getVariable ("bis_disabled_" + _int)} && {(_obj getVariable ("bis_disabled_" + _int) isEqualTo 1)};
	if _locked then
	{
		_obj animateSource [format ["%1_locked_source", _int], (1 - (_obj animationSourcePhase (format ["%1_locked_source", _int])))];
	} else
	{
		{
			if (toLower _x find toLower _int > -1) then
			{
				if (_obj animationPhase _x > 0.5) then
				{
					_obj animate [_x, 0];
				} else
				{
					_obj animate [_x, 1];
				};
			};
		} count _anms;	
	};
};